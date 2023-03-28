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

const int N = 10;
int n;
set<string> ans,final;
string res;
bool taken[N] = {};

void recur(){
     if(res.size() == n){
          ans.insert(res); return;
     }

     rep(i,0,n){
          if(!taken[i]){
               res.push_back(i); 
               taken[i] = 1;

               recur();

               taken[i] = 0;
               res.pop_back();
          }
     }
}

void solve() {
    string s; cin >> s;
    n = s.size();


    recur(); 
    

    for(auto x:ans){
          string curr;
          for(auto y:x) curr += s[y];

          final.insert(curr);
    }
//ans has all the permutations and final has all the distincts

    cout << final.size() << '\n';

    for(auto x:final){
          cout << x <<'\n';
    }

}

/*void solve() { // This solution also gives AC

   string s; cin >> s; sort(s.begin(),s.end());
   std::vector<string> ans;

   do{
          ans.push_back(s);
   }while(next_permutation(s.begin(),s.end()));
   
   cout << ans.size() << '\n';

   for(auto x:ans) cout << x << '\n';
   
}*/

int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     solve();

     return 0;
}

