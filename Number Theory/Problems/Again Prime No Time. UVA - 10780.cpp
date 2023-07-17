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

const int N = 1e5 + 7;
int spf[N];
vector<int> ans[N];
void SPF(){

     rep(i,1,N) spf[i] = i;

     for(int i = 2; i * i <= N ; i++)
          for(int j = i * i ; j <= N ; j+=i)
               spf[j] = min(spf[j] , i);
}
int divOfN [N] , divOfM [N] ;
void solve(int t){
     int n,m,mn = 1e18;
     cin >> m >> n;

     rep(i,0,N) divOfN[i] = 0 , divOfM[i] = 0;

     rep(i,2,n+1){
          for(auto x:ans[i]){
               ++divOfN[x];
          } 
     }

     for(auto x:ans[m]){
          ++divOfM[x];
     }
     
     cout << "Case " << t << ":" << "\n";
     rep(i,2,m + 1){
          if(divOfM[i] > divOfN[i]){
               cout << "Impossible to divide\n";
               return;
          }
          if(divOfM[i]) mn = min(mn,divOfN[i] / divOfM[i]);
     }

     cout << mn << "\n";
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);
     SPF();

     rep(i,2,N){
          int n = i;
          while(n > 1){
               ans[i].push_back(spf[n]);
               n /= spf[n]; 
          }
     }

     int t = 1;

     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




