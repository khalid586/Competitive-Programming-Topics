#include <bits/stdc++.h>
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

const int MOD = 1e9+7;
const int N = 1001;
int score [N][N]; 
char grid[N][N];
int n ;

bool isValid(int p,int q){
     return (p < 0 or p >= n or q < 0 or q >= n? 0:1) ;
}

int dx[] = {0,1};
int dy[] = {1,0};
int vis[N][N];

void bfs(){
     queue<pair<int,int>> q;
     q.push({0,0});

     if(grid[0][0] == '.') score[0][0] = 1;

     while(!q.empty()){
          int x = q.front().first , y = q.front().second;
          q.pop(); 

          rep(i,0,2){
               int X = x + dx[i]; int Y = y + dy[i];
          
               if(isValid(X,Y)){
                         if(!vis[X][Y]){q.push({X,Y}); vis[X][Y] = 1;}
                         
                         if(grid[X][Y] == '.'){
                              score[X][Y] += score[x][y] ;
                              score[X][Y] %= MOD;
                         }
               }
          }
     }
}

void solve(){
     cin >> n;
     rep(i,0,n) rep(j,0,n) cin >> grid[i][j];
     
     bfs();

     cout << score[n-1][n-1] << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     solve();

     return 0;
}

