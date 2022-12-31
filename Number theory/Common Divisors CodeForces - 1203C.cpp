#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 107;
const int MX = 1e6;
std::vector<int> graph[N];
vector<int> lvl(N, -1);

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

#define int long long

void solve(int t){
     int n , cnt = 0;
     cin >> n;

     int a[n] , gc = 0;
     rep(i,0,n) {cin >> a[i]; gc = __gcd(gc,a[i]);}

     for(int i = 1 ; i * i <= gc ; i++){
          if(!(gc % i)){ 
               ++cnt;
               if(i != (gc/i)) ++cnt;
          }

     }

     cout << cnt << endl;
}

int32_t main()
{
     FastIO();

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




