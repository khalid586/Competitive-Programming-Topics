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


void solve(int n){
    int a[n]; rep(i,0,n) cin >> a[i];

     rep(i,0,n-5)
        rep(j,i+1,n-4)
            rep(k,j+1,n-3)
                rep(l,k+1,n-2)
                    rep(m,l+1,n-1)
                        rep(p,m+1,n)
                            cout << a[i] << ' ' << a[j] << ' ' << a[k] << ' ' << a[l] << ' ' << a[m] << ' ' << a[p] << '\n';
}

int32_t main()
{
    std::ios::sync_with_stdio(false);cin.tie(NULL); 
    IO();
    int n = 1;
    bool f = 1;

    while(1){
        cin >> n;
        if(!n) break;

        if(!f) cout << '\n';
        f = 0;

        solve(n);
    }
    
   return 0;
}

