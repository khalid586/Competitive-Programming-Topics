#include <bits/stdc++.h>
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)
#define int long long int

void solve(int t){
     int n,x; cin >> n >> x;

     int a[n];
     rep(i,0,n) cin >> a[i];

     int ans = 0 , curr = 0;
     map<int,int> m; 
     m[0] = 1;

     rep(i,0,n){
          curr += a[i];
          ans += m[curr - x];
          m[curr]++;
     }

     cout << ans << '\n';

}

int32_t main()
{

     int T = 1;
   //  cin >> T;

     rep(i,1,T+1){
          solve(i);
     }

     return 0;
}

