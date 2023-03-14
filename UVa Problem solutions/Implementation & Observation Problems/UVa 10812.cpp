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
// #define int long long int 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(){
     int s,d; cin >> s >> d;

     if(s % 2 != d % 2 or (s < d)) cout << "impossible";
     else cout << s/2 + d/2 + s % 2<< ' ' <<  s/2 - d/2;

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

