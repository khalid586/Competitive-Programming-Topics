#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define int long long int
#define all(x) x.begin(),x.end()

const int N = 2e5 + 7;

void solve(){
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
     
     solve();
   
     return 0;
}

