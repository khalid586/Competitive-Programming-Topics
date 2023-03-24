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


const int N = 105;
vector<int> g[N];
int indeg[N];
bool vis[N];
vector<int> ans;

void bfs(queue<int> q){
     while(!q.empty()){
          int curr = q.front();
          q.pop();

          ans.push_back(curr);
          for(auto child:g[curr]){
               indeg[child]--;
               if(indeg[child] == 0 and !vis[child]){
                    vis[child] = 1;
                    q.push(child);
               }
          }
     }

}
void CLEAR(){
     ans.clear();
     rep(i,0,N) indeg[i] = 0 , g[i].clear() , vis[i] = 0;
}

void solve(int t){
     int u,v,n,m;
     while(cin >> n >> m){
          if(!n and !m) break;
          rep(i,0,m){
               cin >> u >> v;
               g[u].push_back(v);
               indeg[v]++;
          }

          queue<int> q;
          rep(i,1,n+1) if(!indeg[i]){ q.push(i); vis[i] = 1;}
          bfs(q);


          if(ans.size() == n) for(auto x:ans) cout << x << ' '; 
          else                cout << "Cycle detected"; cout << '\n';
          CLEAR();
     }
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
    // cin >> t;
     
     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




