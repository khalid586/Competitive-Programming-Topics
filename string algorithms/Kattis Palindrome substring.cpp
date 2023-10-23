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
     vector<string> p;
     string s;

     while(cin >> s){
          p.push_back(s);
     }


     rep(i,0,p.size()){
          int n = p[i].size();
          set<string> ans;
          s = p[i];

          rep(i,0,n){
               string curr;
               curr += s[i];

               rep(j,i+1,n){
                    curr += s[j];

                    if(check(curr)) 
                         ans.insert(curr);
               }
          }

          for(auto x:ans) cout << x << '\n';
               
          if(i != p.size()-1) cout << '\n';
     }
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

