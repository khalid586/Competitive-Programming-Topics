//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}

const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void solve(int t){
     int n;
     cin >> n;

     int x,y;
     cin >> x >> y;

     vector<int> a(n);

     rep(i,0,n)
          cin >> a[i];

     sort(a.begin(),a.end());

     int ans = 0;

     rep(i,0,n){
          int low  = lower_bound(a.begin()+i+1,a.end(),x-a[i]) - a.begin();
          int high = upper_bound(a.begin()+i+1,a.end(),y-a[i]) - a.begin();


          int ele = high - low;

          ans += ele;
     }

     cout << "Case " << t << ": " << ans << '\n';
}

int32_t main()
{
     FastIO();

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

