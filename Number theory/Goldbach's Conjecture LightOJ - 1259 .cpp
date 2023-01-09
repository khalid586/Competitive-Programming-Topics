#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

int N = 1e7 + 7;
set<int> divs;
vector<bool> check(N,1);

void sieve(){
     for (int i = 2; i * i <= N; ++i)
     {
          for (int j = i * i; j <= N; j+=i)
          {
               check[j] = 0;
          }
     }
}

void solve(int t){
     int n , ans = 0;
     cin >> n;

     rep(i,2,n/2 + 1){
          if(check[i]){
               if(check[n-i]) 
                    ++ans;
          }
     }
     cout << "Case " << t << ": " << ans << endl;
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     sieve();
     int t = 1;

     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




