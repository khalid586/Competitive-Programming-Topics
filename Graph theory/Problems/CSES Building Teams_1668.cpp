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
vector<int> g[N];
bool ok = 1;
int color[N];
bool vis[N];

void dfs(int par,int clr){
     if(!ok) return;
     vis[par] = 1;
     color[par] = clr;

     for(auto child:g[par]){
          if(!vis[child]) dfs(child,clr ^ 1);
          else if(color[child] == color[par]) {ok = 0; break;}
     }
}

void solve(int t){
     int n,m;
     cin >> n >> m;

     rep(i,0,m){ int u,v; cin >> u >> v; g[u].push_back(v); g[v].push_back(u);}

     rep(i,1,n+1) if(!vis[i]) dfs(i,0);

     if(!ok) { cout << "IMPOSSIBLE\n"; return;}

     rep(i,1,n+1) cout << color[i] + 1 << ' '; cout << '\n';
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

