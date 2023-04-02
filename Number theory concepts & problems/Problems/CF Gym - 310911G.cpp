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
const int N = 1e6 + 1;


void solve(int t){
     int n;
     cin >> n;
     vector<int> v(N,0),ans(N,0);

     rep(i,0,n){ 
          int a; 
          cin >> a; 
          v[a]++; 
     }

     rep(i,1,N){
          for(int j = i ; j < N ; j += i)
               ans[i] += v[j];
     }

     rep(i,1,N) cout << ans[i] << "\n";
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




