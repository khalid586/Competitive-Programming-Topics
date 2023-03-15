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
        // freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

void solve(int t){
     vector<string> combinations = {"012","021","102","120","201","210"};

     int a[3] , b[3] , c[3] , cst = 0 , mn = INT_MAX; 
     a[0] = t;
     rep(i,1,3) cin >> a[i]; rep(i,0,3) cin >> b[i]; rep(i,0,3) cin >> c[i];
     
     string res ;
     vector<pair<int,string>> ans;
     string ch [] = {"B","G", "C"};
     for(string x:combinations){
          cst = 0;
          rep(i,0,3) if(i == x[0] - '0') continue; else cst += a[i];
          rep(i,0,3) if(i == x[1] - '0') continue; else cst += b[i];
          rep(i,0,3) if(i == x[2] - '0') continue; else cst += c[i];

          res += ch[x[0] - '0']; res += ch[x[1] - '0']; res += ch[x[2]- '0'];   
          ans.push_back({cst,res}); res.clear();
     }      

     sort(ans.begin(),ans.end());
     
     cout << ans[0].second << ' ' << ans[0].first << '\n'; 
}

int32_t main()
{
     IO();
     int t = 2 , a; 
   //  cin >> t; 
   
     while(cin >> a){
          solve(a);
     }

     return 0;
}

