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
// #define int long long int
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
vector<int> ans;
int n,m;
int indeg[N] = {};
vector<int> g[N];
bool vis[N];


void solve(int t){
     map<int,int> count;
     map<int,vector<int>> pos;

     int n,sm;
     bool ok = 0;
     cin >> n >> sm;

     int a[n+1];
     rep(i,1,n+1){
          cin >> a[i];
          count[a[i]]++;
          pos[a[i]].push_back(i);
     }

     rep(i,1,n){
          int need = sm - a[i];
          --count[a[i]];
          
          if(count[need]){
               if(need == a[i]) cout << pos[a[i]][0] << ' ' << pos[a[i]][1] << '\n';
               else cout << pos[a[i]][0] << ' ' << pos[need][0] << '\n';
               
               ok = 1;
               break;
          }
     }
     if(!ok) cout << "IMPOSSIBLE\n";
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     int t = 1;
   //  cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

