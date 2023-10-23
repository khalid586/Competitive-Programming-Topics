//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

void solve(int t){
     string s;
     cin >> s;

     int n = s.size();

     rep(i,1,n){
          if(s[i] == s[i-1]){
               while(1){
                    s[i] = (s[i]-'a' + 1) % 26 + 'a';

                    if(i+1 >= n) break;
                    else if(s[i+1] != s[i]) break;
               }
          } 

     }

     cout << s << '\n';
}

int32_t main()
{
     FastIO();
     int T = 1;
   //  cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

