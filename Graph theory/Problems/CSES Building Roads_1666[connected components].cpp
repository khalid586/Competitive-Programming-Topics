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
#define int long long int
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
int n,m;
vector<int> g[N];
vector<vector<int>> answer;
bool vis[N];
vector<int> curr;


void dfs(int par){
     vis[par] = 1;
     curr.push_back(par);

     for(auto child:g[par])
          if(!vis[child]) dfs(child);
}

void solve(int t){
    cin >> n >> m;

     rep(i,0,m){
          int u,v;
          cin >> u >> v;
          g[u].push_back(v); g[v].push_back(u);
     }

     rep(i,1,n+1){
          if(!vis[i]) { 
               curr.clear(); dfs(i);// for(auto x:curr) cout << x << ' '; cout << '\n';
               answer.push_back(curr);
          }
          
     }

     n = answer.size();
     cout << n-1 << '\n';

     if(answer.size()){
          rep(i,1,n)
               cout << answer[i][0] << ' ' << answer[i-1][0] << '\n';
     }

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

