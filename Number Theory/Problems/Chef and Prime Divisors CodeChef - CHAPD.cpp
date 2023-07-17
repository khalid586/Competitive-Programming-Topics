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

void solve(int t){
     int a,b;
     cin >> a >> b;

     int gc = __gcd(a,b);

     while(b > 1 and gc > 1){
          b /= gc;
          gc = __gcd(a,b);
     }

     cout << (b > 1 ? "No\n":"Yes\n");
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;

     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




