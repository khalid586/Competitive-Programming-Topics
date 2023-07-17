#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 1e7 + 7;
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

// Modified sieve used to determine smallest prime factor

int spf[N];
void SPF(){
     rep(i,1,N) spf[i] = i;

     for(int i = 2; i * i <= N ; i++)
          for(int j = i * i ; j <= N ; j+=i)
               spf[j] = min(spf[j] , i);
}
int lpf[10000000 + 7];
void solve(int t){
     int n;
     cin >> n;
     int num = n;

     vector<int> ans;
     while(n > 1){
          ans.push_back(spf[n]);
          n /= spf[n];
     }

     lpf[num] = ans[ans.size() - 1];
     
     cout << num << " : " ;
     for(auto x:ans) cout << x << ' ';
     cout << "\n"; 

     cout << "lpf of n is : " << lpf[num];
     
}

int32_t main()
{
     FastIO();
     SPF();
     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




