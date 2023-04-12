#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'

void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
// #define int long long int
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
vector<int> ans;
int n,m;
int indeg[N] = {};
vector<int> g[N];
bool vis[N];

void bfs(){
     queue<int> q;
     rep(i,1,n+1) if(indeg[i] == 0){ q.push(i); vis[i] = 1;}

     while(!q.empty()){
          int parent = q.front();
          ans.push_back(parent); q.pop();

          for(auto child:g[parent]){
               indeg[child]--;

               if(!indeg[child] and !vis[child]){
                    vis[child] = 1; q.push(child);
               }
          }
     }
}

void solve(int t){
     cin >> n >> m;

     rep(i,0,m){
          int u,v; cin >> u >> v;
          g[u].push_back(v);
          indeg[v]++;
     }     

     bfs();

     if(ans.size() == n){ for(auto x:ans) cout << x << ' ';}
     else cout << "IMPOSSIBLE\n";
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

