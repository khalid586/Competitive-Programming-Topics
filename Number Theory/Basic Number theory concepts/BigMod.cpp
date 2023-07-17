#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define endl '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))

void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
// #define int long long int 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

int BigMod(int B, int P , int M){
     if(!P) return 1;
     if(P % 2){
          int a = B % M;
          int b = BigMod(B,P-1,M);

          return (a * b) % M;
     }
     else{
          int a = BigMod(B,P/2,M);
          return (a * a) % M;
     }
}
int32_t main()
{
     IO();
     int B,P,M;
   
     while(cin >> B >> P >> M){
          cout  << BigMod(B,P,M);
          cout << '\n';
     }

     return 0;
}

