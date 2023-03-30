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
const int MOD = 1e9+7;

void solve(int t){
     int n; cin >> n;

     int dp[n+1] = {}; dp[0] = 1;
     rep(i,1,n+1){
          for (int j = 1; j <= min(i,6); ++j)
          {
               dp[i] += dp[i-j]; dp[i] %= MOD;
          }
     }

     cout << dp[n] << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

