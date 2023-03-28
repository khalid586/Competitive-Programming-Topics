#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
 #define int long long int
#define all(x) x.begin(),x.end()

const int N = 2e5 + 7;

void solve(int t){
    int n,m,k; cin >> n >> m >> k;

    int client[n] ,apartment[m];

    rep(i,0,n) cin >> client[i];
    rep(i,0,m) cin >> apartment[i];

    sort(client,client+n); sort(apartment,apartment+m);

    int cnt = 0 , i = 0 , j = 0;
    while(i < n and j < m){
        if(abs(client[i] - apartment[j]) <= k){ ++cnt ; ++i; ++j;}
        else if(apartment[j] - client[i] > k) ++i;
        else ++j;
    }
    cout << cnt << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

