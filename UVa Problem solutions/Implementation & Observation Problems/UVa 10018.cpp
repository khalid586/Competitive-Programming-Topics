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
     int n; cin >> n;
     stringstream p,q,r;

     rep(i,1,105){
          int opposite;
          string curr , rev , res;

          p << n ; p >> curr; rev = curr; reverse(rev.begin(),rev.end()); p.clear();
          q << rev; q >> opposite; q.clear();

          n += opposite;
          r << n ; r >> res;  r.clear();
          bool ok = 1;
          rep(j,0,res.size()/2) if(res[j] != res[res.size()-1-j]){  ok = 0;break;}

          if(ok) {
               cout << i << ' ' << res << '\n';
               return;
          }
     } 
}

int32_t main()
{
     IO();
     int t = 1; 
     cin >> t; 
   
     while(t--){
         solve(t) ;
     }

     return 0;
}

