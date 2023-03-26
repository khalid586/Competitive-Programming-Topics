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

const int N = 2e5 + 7;
 #define int long long int
#define all(x) x.begin(),x.end()
#define INF 1e8

int lvl[N];
vector<int> g[N];
int source[N];
int n,m;

void bfs(int par,int prev){
     queue<int> q;
     source[par] = prev;
     q.push(par);

     lvl[par] = 0;
     while(!q.empty()){
          int curr = q.front(); q.pop();

          for(auto child:g[curr]){ 
              if(lvl[child] == INF) {
                    q.push(child);
                    source[child] = curr; 
                    lvl[child] = lvl[curr] + 1;
               }
          }
     }
}

void solve(int t){

    cin >> n >> m;

    rep(i,0,m){
          int u,v; cin >> u >> v;
          g[u].push_back(v); g[v].push_back(u);
    }

    bfs(1,0);
    vector<int> ans;

    if(lvl[n] == INF) {cout << "IMPOSSIBLE\n"; return; }

    int curr = n;

    while(curr > 0){
          ans.push_back(curr);
          curr = source[curr];
    }

    reverse(ans.begin(),ans.end());

     cout << ans.size() << '\n';
     for(auto x:ans) cout << x << ' '; 
     
     cout << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     int t = 1;
   //  cin >> t;

     rep(i,1,N) lvl[i] = INF;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

