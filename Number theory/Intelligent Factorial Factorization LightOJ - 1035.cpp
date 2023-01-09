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

const int N = 105;
int spf[N];
vector<int> ans[N];
void SPF(){

     rep(i,1,N) spf[i] = i;

     for(int i = 2; i * i <= N ; i++)
          for(int j = i * i ; j <= N ; j+=i)
               spf[j] = min(spf[j] , i);
}

void solve(int t){
     int n ;
     cin >> n;
     int divOfN [n + 1] = {};

     for(int i = 2 ; i <= n ; i++){
          for(auto x:ans[i])
               ++divOfN[x]; 
     }

     int cnt = 0;
     for(int x:divOfN){
          if(x) ++cnt;
     }

     cout << "Case " << t << ": " << n << " = ";

     rep(i,2,n+1){
          if(divOfN[i]){
               cout << i << " (" << divOfN[i] << ") ";
               --cnt;

               if(cnt) {cout << "* ";}
               else    {cout << "\n"; break;}
          }
          
     }
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




