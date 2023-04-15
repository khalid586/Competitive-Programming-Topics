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


const int N = 28;
vector<int> g[N];
bool vis[N];

void dfs(int par){
     vis[par] = 1;
     for(auto child:g[par])
          if(!vis[child]) dfs(child);
}

void solve(int t){
     char a;
     cin >> a;
     cin.ignore();

     int n = a - 'A' + 1 , ans = 0;
     string s;

     while(getline(cin , s) and s != ""){
          g[(s[0] - 'A') + 1].push_back((s[1] - 'A') + 1);
          g[(s[1] - 'A') + 1].push_back((s[0] - 'A') + 1);
     }

     rep(i,1,n+1){
          if(!vis[i]){ ++ans;dfs(i);}
     }

     cout << ans << '\n';

     rep(i,0,N) g[i].clear() , vis[i] = 0;
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
          
          if(i != t) cout << "\n";
     } 
   
   return 0;
}

