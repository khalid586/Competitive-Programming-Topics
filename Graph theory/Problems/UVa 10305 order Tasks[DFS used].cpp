#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)

void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
        // freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}

const int N = 109;
int n , m;

std::vector<int> graph[N];
bool vis[N];

stack<int> ans;

void topsort(int source){
     vis[source] = 1;

     for(auto child:graph[source]){
          if(!vis[child]) topsort(child);
     }

     ans.push(source); // when all the childs of a node have been visited then we will push it into the stack
}
void CLEAR(){ rep(i,1,n+1) graph[i].clear() , vis[i] = 0;}


void solve(int n , int m){

     rep(i,0,m){
          int u , v;
          cin >> u >> v;
          graph[u].push_back(v); // directed graph
     }

     rep(i,1,n+1) if(!vis[i]) topsort(i);
     
     while(!ans.empty()){
          if(ans.size() > 1) cout << ans.top() << ' '; 
          else  cout << ans.top() << '\n'; 
          ans.pop();
     }

     CLEAR();
}

int32_t main()
{
     IO();
     int t = 1; 
   //  cin >> t; 

     while(cin >> n >> m){
          if(!n and !m) break;
          solve(n , m);
     }
     return 0;
}

