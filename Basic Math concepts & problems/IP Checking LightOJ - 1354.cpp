#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}
const int N = 1e6 + 1;

void solve(int t){
     string s , s1;
     cin >> s >> s1;
    // cout << s << '\n';

     int a[4],pos = 0,b[4];
     int n = s.size();
     stringstream ss;
     string temp;

     rep(i,0,n){
          if(s[i] == '.' or i == n-1){
               if(i == n-1) temp += s[i];

               ss << temp;
               ss >> a[pos]; 

               ++pos;
               ss.clear(); temp.clear();
          }
          else{
               temp += s[i];
          }
          
     }

     n = s1.size() , pos = 0;
     rep(i,0,n){
          if(s1[i] == '.' or i == n-1){
               if(i == n-1) temp += s1[i];
               int x = 0;
               rep(j,0,8){
                    x += (temp[j]-'0') * (1 << (7 - j));
               } 

               b[pos] = x;
               ++pos;
               ss.clear(); temp.clear();
          }
          else{
               temp += s1[i];
          }
          
     }

     bool ok = 1;
     rep(i,0,4) if(a[i] != b[i]) ok = 0;

     cout << "Case " << t << ": " ;

     cout << (ok? "Yes\n":"No\n");

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




