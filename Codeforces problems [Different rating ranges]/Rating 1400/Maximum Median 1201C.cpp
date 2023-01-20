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
const int N = 1e6 + 1;

void solve(int t){
     int n,k;
     cin >> n >> k;

     int a[n] , ans = 0;
     rep(i,0,n) cin >> a[i];
     sort(a,a+n);

     ans = a[n/2];
     int i = 0;
     for(i = n/2 ; i < n ; i++){

          if(k >= (i - n/2) * (a[i] - a[i-1])){
               ans = a[i]; k -= ((i - n/2) * (a[i] - a[i-1]));
          }
          else{
               break;
          }
     }
     ans += (k/(i - n/2));
     cout << ans << "\n";
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




