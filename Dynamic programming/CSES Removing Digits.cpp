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

const int MOD = 1e9+7;
const int N = 1e6 + 3;
vector<int> dp(N,INT_MAX);
int n;

void solve(int t){
     rep(i,1,10) dp[i] = 1;
     cin >> n;

     rep(i,10,n+1){
          stringstream p;
          string s;

          p << i; p >> s;
          for(auto ch:s){
               if(ch == '0') continue;
               int ans = dp[i - (ch-'0')]+1;
               dp[i] = min(dp[i],ans);
          }
     }

     cout << dp[n] << '\n';
     
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

