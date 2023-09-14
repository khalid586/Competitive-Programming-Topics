#include <bits/stdc++.h>
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)
#define int long long int

void solve(int t){
     int n,x; cin >> n >> x;
     int a[n] , curr = 0,ans = 0;;

     set<int> totals;
     totals.insert(0);

     rep(i,0,n){
          cin >> a[i];
          curr += a[i];
          ans += totals.count(curr-x);
          totals.insert(curr);
     }

     cout << ans << '\n';

}

int32_t main()
{
   //  freopen("in.txt","r",stdin);
     int T = 1;
   //  cin >> T;

     rep(i,1,T+1){
          solve(i);
     }

     return 0;
}

