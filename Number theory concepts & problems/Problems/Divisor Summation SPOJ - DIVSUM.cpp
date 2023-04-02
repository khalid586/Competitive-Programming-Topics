#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 5e5 + 500;
const int MX = 1e6;

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}


int ans[N];
void compute(){
     for (int i = 1; i < N; ++i)
     {
          for (int j = 1; j*j <= i; ++j)
          {
               if(i % j == 0 and j != i){
                    ans[i] += j;

                    if( (j != (i/j)) and (i/j) != i) ans[i] += (i/j); 
               }
          }
     }
}

void solve(int t){
     int n ;
     cin >> n;
     cout << ans[n] << '\n';   
}

int32_t main()
{
     FastIO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);
     compute();

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




