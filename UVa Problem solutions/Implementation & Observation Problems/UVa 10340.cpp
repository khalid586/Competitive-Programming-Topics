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
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(string s, string t){
     int m = s.size() , n = t.size();
     bool ok = 0; int pos = 0;

     rep(i,0,n){
          if(pos == m) break;
          if(t[i] == s[pos]) ++pos;
     }

     if(pos == m) ok = 1;
     cout << (ok ? "Yes":"No");
}

int32_t main()
{
     IO();
     string s , t; 
    // cin >> t; 
   
     while(cin >> s >> t){
          solve(s,t);
          cout << '\n';
     }

     return 0;
}

