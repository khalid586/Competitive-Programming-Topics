#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}


const int N = 5e5 + 500;
const int MX = 1e6;

void solve(int t){
     int n;
     cin >> n;

     int a[n] , gc = 0 , mx = 0;
     rep(i,0,n) {
          cin >> a[i];
          mx = max(mx,a[i]);
     }

     int diff = 0;
     rep(i,0,n){ 
          diff += mx - a[i];
          gc = __gcd(gc,mx - a[i]);
     }
     int res = diff / gc;

     cout << res << ' ' << gc << '\n';
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




