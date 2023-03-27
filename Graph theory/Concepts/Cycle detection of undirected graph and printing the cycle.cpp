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
const int N = 2e5 + 7;
vector<int> g[N];
vector<int> ans;
bool vis[N];
bool found = 0;
int strt,ed;
int par[N] = {};

void dfs(int curr,int prev){

//   cout << curr << ' ' << prev << '\n';
     if(found) return;
     vis[curr] = 1;
     par[curr] = prev;

     for(auto child:g[curr]){
          if(!vis[child]) dfs(child,curr);
          else if(vis[child] and child != prev and !found) {
               strt = curr;
               ed = child;
               found = 1; 
               return;
          }
     }
}

void solve(int t){
    int n,m; cin >> n >> m;

    rep(i,0,m){
     int u,v; cin >> u >> v;
     g[u].push_back(v); g[v].push_back(u);
    }

     rep(i,1,n+1){
          if(!vis[i]){
               ans.clear();
               dfs(i,0);
          }

          if(found){
               while(strt != ed){
                    ans.push_back(strt); strt = par[strt];
               }

               ans.push_back(ed);
               cout << "Path size = " << ans.size()+1 << '\n';
               
               cout << "Cycle Path is --> " ;
               for(auto x:ans) 
                    cout << x  << ' '; 
               cout << ans[0] << '\n';

               break;
          }
     }

    if(!found) cout << "No cycle\n";
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
