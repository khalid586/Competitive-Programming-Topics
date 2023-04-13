#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define endl '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))

void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
        // freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(int t){
     int n,m; cin >> n >> m;

     rep(i,0,n) cin >> m;
     int ans = 1;

     rep(i,1,n+1) ans *= i;
     cout << "Case " << t << ": " << ans << '\n';
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

