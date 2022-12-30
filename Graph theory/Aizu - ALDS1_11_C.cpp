#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 107;
const int MX = 1e6;
std::vector<int> graph[N];
vector<int> lvl(N,MX);

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

void bfs(){
     queue<int> q;
     q.push(1);
     lvl[1] = 0;


     while(!q.empty()){
          int u = q.front();
          int currLvl = lvl[u];
          q.pop();

          for(auto v:graph[u]){
               if(lvl[v] > lvl[u]){
                    q.push(v);
                    lvl[v] = currLvl + 1;   
               } 
               
          }
     }
}
void solve(int t){
     int n;
     cin >> n;

     rep(i,0,n){
          int u;
          cin >> u;
          int m;
          cin >> m;

          rep(j,0,m){
               int v;
               cin >> v;
               graph[u].push_back(v);
          }
     }
     bfs();

     rep(i,1,n+1){
          if(lvl[i] == MX) lvl[i] = -1;
          cout << i << ' ' << lvl[i] << endl;
     }
}

int32_t main()
{
     FastIO();

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




