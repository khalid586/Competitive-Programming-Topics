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
     int n ; cin >> n;
     int a[n] , high = 0 , low = 0;

     rep(i,0,n) cin >> a[i];

     rep(i,1,n){
          if(a[i] > a[i-1]) ++high;
          else if(a[i] < a[i-1]) ++low;
     }

     cout << "Case " << t << ": ";
     cout << high << ' ' << low << '\n';
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

