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
     set<int> ans;
     int n,m;
     cin >> n >> m;

     n -= m ;

     for (int i = 1; i * i <= n; ++i)
     {
          if(n % i == 0){
               if(i > m) ans.insert(i);
               if(n/i > m) ans.insert(n/i);
          }
     }
     
     cout << "Case " << t << ": " ;
     if(!ans.size()){ cout << "impossible\n"; return;}

     for(auto x:ans){ cout << x << ' ';}
     cout << "\n";
     
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




