#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define endl '\n'
void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(int t){
     int n; cin >> n;
     int a[3][n+1];
     a[1][0] = 0 , a[2][0] = 0;

     rep(i,1,3) rep(j,1,n+1) cin >> a[i][j]; 
     rep(i,1,3) rep(j,1,n+1) a[i][j] += a[i][j-1];

     // rep(i,1,3){ 
     //      rep(j,1,n+1) cout << a[i][j] << ' '; 
     //      cout << '\n';

     // }
     int ans = a[2][n-1];

     rep(i,1,n+1){
          ans = min(ans,max(a[1][n] - a[1][i],a[2][i-1]));
     }

     cout << ans << '\n';
}

int32_t main()
{
     IO();
     int t = 1; 
     cin >> t; 
   
     rep(i,1,t+1){ 
          solve(i);
     }

     return 0;
}