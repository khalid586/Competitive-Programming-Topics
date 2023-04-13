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


const int N = 5e5 + 500;
const int MX = 1e6;

pair<int,int> solve(int n){
     pair<int,int> ans;;
     for(int i = 1 ; i * i <= n; i++)     
          if(n % i == 0 and ( (i*(n/i)/__gcd(i,n/i)) == n)) ans = {i , n/i};

     return ans;
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          int n;
          cin >> n;
          pair<int,int> result;
          result = solve(n);
          cout << result.first << " " << result.second << "\n";
     }
     return 0;
}




