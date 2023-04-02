#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
// #define int long long int
#define all(x) x.begin(),x.end()

const int N = 1e6 + 7;
int divs[N];
 
void solve(){
     int n , ans = 1; cin >> n;
     int a[n];
     rep(i,0,n)cin >> a[i];

     rep(i,0,n){
          for (int j = 1; j*j <= a[i]; ++j)
          {
               if(a[i] % j == 0){
                    divs[j]++; 
                    if(divs[j] > 1)
                         ans = max(ans,j);
                    
                    if(j != a[i]/j){ 
                         divs[a[i]/j]++;

                         if(divs[a[i]/j]>1) 
                              ans = max(ans,a[i]/j);
                    }
               }
          }
     }
 
     cout << ans << '\n';
}

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

     IO();

     solve();
   
   return 0;
}

