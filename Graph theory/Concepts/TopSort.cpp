#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)

const int N = 100007;
std::vector<int> graph[N];
bool vis[N];

stack<int> ans;

void dfs(int source){
     vis[source] = 1;
     
     for(auto child:graph[source]){
          if(!vis[child]) dfs(child);
     }
     ans.push(source); // when all the childs of a node have been visited then we will push it into the stack
}

void solve(int t){
     int node,edge; cin >> node >> edge;

     rep(i,0,m){
          int u , v;
          cin >> u >> v;
          graph[u].push_back(v); // directed graph
     }

     rep(i,1,node+1) 
          if(!vis[i]) 
               dfs(i);
     
     while(!ans.empty()){
          cout << ans.top() << ' '; ans.pop();
     }
     cout << '\n';
}

int32_t main()
{     
     int t = 1; 
   //  cin >> t; 

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}

