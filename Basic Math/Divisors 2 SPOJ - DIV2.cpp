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


const int N = 1e6 + 7;
const int MX = 1e6;

int divisors[N];
vector<bool> res(N,1);
vector<int> ans;
void check(){
     rep(i,1,N){
          for (int j = i; j < N; j+=i)
          {
               divisors[j]++;
          }
     }

     rep(i,1,N){
          for (int j = i; j < N; j+=i)
          {
              if(divisors[j] < 4 or (divisors[j] % divisors[i]))
               res[j] = 0;
          }
     }

     int cnt = 0;
     rep(i,1,N){
          if(res[i]){
               ++cnt;
               if(cnt % 108 == 0 and cnt > 0) 
                    ans.push_back(i);
          }
     }

}

void solve(int t){
     int n = ans.size() ;
     rep(i,0,n) cout << ans[i] << "\n";
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     check();

     int t = 1;
    // cin >> t;
     

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




