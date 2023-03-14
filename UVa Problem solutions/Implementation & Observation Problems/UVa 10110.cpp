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

int32_t main()
{
     IO();
     int t; 
    // cin >> t; 
   
     while(cin >> t){
          if(!t) break;
          int x = sqrt(t);
          cout << (x * x == t? "yes":"no") << '\n';
     }

     return 0;
}

