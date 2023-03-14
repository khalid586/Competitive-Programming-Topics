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
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long int 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(){
     int x; cin >> x;
     x *= 567; x /= 9; x += 7492 ; x *= 235; x /= 47 ; x -= 498;
     x = abs(x);

     cout << (x % 100) / 10;
}
int32_t main()
{
     IO();
     int t; 
     cin >> t; 
   
     rep(i,0,t){
          solve();
          cout << '\n';
     }

     return 0;
}

