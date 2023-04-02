#include <bits/stdc++.h>
using namespace std;

// #define int long long int
const int N = 100000007;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}


vector<bool> prime(N,1);
vector<int> ans;
void sieve(){
     int cnt = 0;
     for (int i = 2; i * i < N; ++i)
     {
          if(prime[i]){
               
               for (int j = i * i; j < N; j += i)prime[j] = 0;
               
          }     
     }

     rep(i,2,N) if(prime[i]){ ++ cnt; if(cnt % 100 == 1) ans.push_back(i);}
}

void solve(int t){
     for(auto x:ans)
     cout << x << "\n"; 
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     
     sieve();
     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




