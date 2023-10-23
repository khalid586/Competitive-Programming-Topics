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

bool check(string s){
     int n = s.size();
     rep(i,0,n/2){
          if(s[i] != s[n-1-i]) return 0;
     }

     return 1;
}

void solve(int t){
     string s;
     cin >> s;

     map<char,int> cnt;
     set<char> ans;
     int n = s.size();

     rep(i,0,n) cnt[s[i]]++;

     rep(i,65,91){
          char a = i/10 + '0';
          char b = i%10 + '0';

          if(a == b){
               if(cnt[a] > 1) 
                    ans.insert(i);
          }
          else{
               if(cnt[a] and cnt[b])
                    ans.insert(i);
          }
     }

     for(auto x:ans) cout << x ; cout << '\n';
}

int32_t main()
{
     FastIO();
     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

