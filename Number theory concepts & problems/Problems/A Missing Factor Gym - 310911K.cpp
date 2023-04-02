#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}



void solve(int t){
     int  n , ans = 1;
     cin >> n;

     int largest = (int) sqrt(n);
     for (int i = 2; i * i <= largest; ++i)
     {
          while(largest % i == 0){
               ans = i;
               largest/=i;
          }    
     }

     ans = max(ans,largest);
     cout << ans << "\n";
}

int32_t main()
{
     FastIO();
     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




