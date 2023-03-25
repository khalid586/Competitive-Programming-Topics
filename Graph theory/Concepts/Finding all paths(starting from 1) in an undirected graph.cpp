#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 105;

vector<int> adj[MAXN];
int inDegree[MAXN];
bool visited[MAXN];
vector<int> order;
int n, m;
vector<vector<int>> answer;


void dfs(int par,int depth) {
    visited[par] = true;
    order.push_back(par); 

    if(depth == n) {
        answer.push_back(order);
        return;
    }

    for(int child:adj[par]) 
        if(!visited[child]) {
            dfs(child,depth+1); 

            order.pop_back();
            visited[child] = false;
        }

    
}

void solve(){

    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int u,v;
        cin >> u >> v; adj[u].push_back(v); adj[v].push_back(u);
    }

    dfs(1,1); 
    cout << "Number of paths = " << answer.size() << '\n'; cout << '\n';

   for(auto x:answer){ for(auto y :x) cout << y  << ' '; cout << '\n';}      
}

int main() {
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //   freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE


    solve();
    return 0;
}
