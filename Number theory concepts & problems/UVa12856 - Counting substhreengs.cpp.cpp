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
 
void solve(string s){
     int ans = 0 ,curr = 0;
     int cnt[3] = {}; cnt[0] = 1;


     for(auto c:s){
          if(!isdigit(c)){
               cnt[0] = 1;
               cnt[1] = 0; cnt[2] = 0;
               curr = 0;

               continue;
          }

          curr = (curr + c - '0') % 3;
          ans += cnt[curr];
          cnt[curr]++;
     }

     cout << ans << '\n';
}

int32_t main()
{
     IO();
     int t = 1; 
   //  cin >> t; 

     string s;
   
     while(cin >> s){ 
          solve(s);
     }

     return 0;
}

