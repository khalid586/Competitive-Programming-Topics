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

void solve(int t){
     string ans , s , even , odd; cin >> s;

     for(auto x:s){
          (x - '0') % 2 ? odd += x: even += x;
     }     

     for (int i = 0 , j = 0; i < odd.size() or j < even.size();)
     {
          if(i == odd.size()) ans += even[j++];
          else  if(j == even.size()) ans += odd[i++];

          else if(odd[i] < even[j]) ans += odd[i++];
          else                      ans += even[j++];
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

