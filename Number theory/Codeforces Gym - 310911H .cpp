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

#define int double

int lcm(int a, int b){
     int ans = (a * b)/ __gcd((long long)a,(long long)b);
     return ans;
}

void solve(int t){
     int n,m,l,r;
     cin >> n >> m >> l >> r;

     int common = lcm(n,m);

     long long ans = floor(r/common) - ceil(l/common) + 1;
     // if(l % common == 0) ++ ans;

     cout <<  ans << "\n";
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




