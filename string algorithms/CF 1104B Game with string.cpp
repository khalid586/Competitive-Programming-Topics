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

     int n = s.size() , cnt = 0;
     stack<char> ans;

     rep(i,0,n){
          if(ans.empty()){
               ans.push(s[i]);
          }
          else {
               if(ans.top() != s[i])
                    ans.push(s[i]);
               else
                    ++cnt,
                    ans.pop();
          }
          
     }

     cout << (cnt % 2 ? "Yes\n":"No\n");
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

