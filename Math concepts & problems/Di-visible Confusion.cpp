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
     int a[n + 1];
     rep(i,1,n + 1) cin >> a[i];

     bool OK = 1;
     rep(i,1,n + 1){
          bool ok = 0;
          for (int j = i + 1; j >= 2; --j)
          {
               if(a[i] % j){
                    ok = 1; break;
               }
          }
          if(!ok){
               OK = 0;
               break;
          }
     }

     cout << (OK?"YES\n":"NO\n");
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




