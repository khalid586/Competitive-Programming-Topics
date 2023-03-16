#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"
int ans;
const int N = 30006;
std::vector<pair<int,int>> graph[N];
bool visited[N];
int dist[N];

void bfs(int start){
     queue<pair<int,int>> q;
     q.push({start,0});
     visited[start] = 1;

     while(!q.empty()){
          int currNode = q.front().first;
          int currDist = q.front().second;
          visited[currNode] = 1;
          q.pop();

          for(auto [childnode,childDist]:graph[currNode]){
               if(!visited[childnode])
               {
                    q.push({childnode,childDist + currDist});
                    if(currDist + childDist> ans) 
                    {     
                         ans = currDist + childDist;
                    }
                    dist[childnode] = childDist + currDist;
               }
          }
     }
}

void solve(int t){
     ans = 0;
     int n;
     cin >> n;

     rep(i,0,n-1){
          int u,v,wt;
          cin >> u >> v >> wt;
          graph[u].push_back({v,wt});
          graph[v].push_back({u,wt});
     }
     

     bfs(0);
     int start;
     rep(i,0,n){
          if(dist[i] == ans){
               start = i; break;
          }
     }
     ans = 0;
     rep(i,0,n) visited[i] = 0; 
     bfs(start);
     
     cout << "Case " << t << ": " << ans << "\n";
}

int32_t main()
{
     

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          rep(j,0,N) visited[j] = 0 , graph[j].clear() ,dist[j] = 0;
          solve(i);
     }
     return 0;
}

