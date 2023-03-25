#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
#define rep(i,a,b) for(int i = a ; i < b ; i++)


vector<int> adj[MAXN];
int inDegree[MAXN];
bool visited[MAXN];
vector<int> order;

vector<vector<int>> answer;
set<int> inputs;
int n;
string s1,s2;


void CLEAR(){
    for(auto x:adj) x.clear();
    for(auto x:inDegree) x = 0;
    for(auto x:visited) x = 0;
    order.clear();
    answer.clear();
    inputs.clear();
    s1.clear(); s2.clear();
}

void dfs(int depth) {
    if(depth == n) {
        answer.push_back(order);
        return;
    }
    for(int u : inputs) {
        if(!visited[u] && inDegree[u] == 0) {
            visited[u] = true;
            order.push_back(u); 


            for(auto v:adj[u]) inDegree[v]--;

            dfs(depth+1);

            for(auto v:adj[u]) inDegree[v]++;
            

            order.pop_back();
            visited[u] = false;
        }
    }
}

void topologicalSort() {
    dfs(0);

     if(!answer.size()){
          cout << "NO\n"; return;
     }
     for(auto x:answer){
          for(int i = 0 ; i < x.size() ; i++){ char ch = x[i] + 'A'; cout <<  ch  << (i == x.size() - 1 ? "\n":" "); }
     }
}
void solve(){
 CLEAR();
    getline(cin >> ws,s1);
    getline(cin >> ws,s2);

    for(auto x:s1) if(!isspace(x)) inputs.insert(x - 'A');
    n = inputs.size();


    for(int i = 0 ; i < s2.size(); i++) {
        if(s2[i] == '<'){
                adj[s2[i-1] - 'A'].push_back(s2[i+1] - 'A');
                inDegree[s2[i+1] - 'A']++;
        }
    }

    // for(auto x:adj) 
     //    for(auto y:inputs) cout << y << ' ';
     topologicalSort();
}

int main() {
    std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
         freopen("out.txt", "w", stdout);
      //   freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE

    int t ; cin >> t;

    rep(i,0,t){
         solve(); 
         if(i != t-1) cout << "\n";
     }
    
    return 0;
}
