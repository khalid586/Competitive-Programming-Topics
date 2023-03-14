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
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(string x){
     stringstream p;

     while(x.size() != 1){
          int res = 0;
          for(auto ch:x) res += (ch - '0');

          p << res;
          p >> x;

          p.clear();
     }

     cout << x ;
}

int32_t main()
{
     IO();
     string t ; 
    // cin >> t; 
   
     while(cin >> t){
          if(t == "0") break; 
          solve(t);
          cout << '\n';
     }

     return 0;
}

