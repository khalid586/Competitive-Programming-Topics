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
const int N = 1e6 + 1;
vector<string> all;

bool cmp(string a, string b){
     return (a.size() == b.size())? a < b : a.size() < b.size(); 
}

void solve(int t){
     int n;
     cin >> n;
     string s;
     cin >> s;
     

     for(auto x:all){
          if(s.find(x) == string::npos){
               cout << x << '\n'; return;
          }
     }
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     rep(i,0,26){ string curr ; curr += ('a' + i) ; all.push_back(curr);}
     rep(i,0,26){
          rep(j,0,26){
               string curr ;
                         curr += ('a' + i) ; curr +=('a' + j); 
                         all.push_back(curr);
          }
     }


     rep(i,0,26){
          rep(j,0,26){
               rep(k,0,26){
                         string curr ;
                         curr += ('a' + i) ; curr +=('a' + j); 
                         curr += ('a' + k) ; 
                         all.push_back(curr);
               }
          }
     }
     sort(all.begin(), all.end(),cmp);

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




