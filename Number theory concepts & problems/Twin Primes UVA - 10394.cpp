#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

int N = 2e7 + 7;
vector<pair<int,int>> ans;
vector<bool> check(N,1);

void sieve(){
     for (int i = 2; i * i <= N; ++i)
     {
          for (int j = i * i; j <= N; j+=i)
          {
               check[j] = 0;
          }
     }

     rep(i,5,N) if(check[i] and check[i-2]) ans.push_back({i-2,i});
}

void solve(int t){
     int n;
     while(cin >> n){
          cout << "(" << ans[n].first << ", "<< ans[n].second << ")\n";
     }

}

int32_t main()
{
     FastIO();
     ans.push_back({0,0});
     sieve();

     int t = 1;
     
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




