#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 1e5 + 7;
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
vector<int> cost(N,INT_MAX);

void solve(int t){
     int n,k;
     cin >> n >> k;

     int arr[n];
     rep(i,0,n) cin >> arr[i];

     cost[0] = 0;
     rep(i,1,n){
          for(int j = i-1 ; j >= max(0ll,i-k) ; j--){
               cost[i] = min(cost[i] , cost[j] + abs(arr[i] - arr[j])); 
          }
     }
     
     cout << cost[n-1] << '\n';
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




