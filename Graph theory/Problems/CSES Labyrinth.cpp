#include <bits/stdc++.h>
using namespace std;

#define rep(a,b)           for(int i = a; i < b;++i)
#define repj(j,a,b)        for(int j = a; j < b;++j)

#define immortal_slave  int main()
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);


 
//Starting in the name of Allah(THE ALMIGHTY
 
int dx[]={0,0,-1,1}; // R L U D 
int dy[]={1,-1,0,0};
 
const int N  = 2000;
const int mod = 1e9+7;
 
int strtX,strtY,endX,endY,n,m;
string ans;
 
char graph[N][N];
void FastIO()
{
     khalid
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}
 
void track(){
   int x = endX,  y = endY;
   while(1){
      if(graph[x][y] ==  'A') break;

      ans += graph[x][y];
      
      switch(graph[x][y]){
        case 'R': --y; break;
        case 'L': ++y; break;
        case 'U': ++x; break;
        case 'D': --x; break;
      }
      
   }
}
bool isValid(int X,  int Y){
   return ((X>=0 and X < n and Y >= 0 and Y < m)?( (graph[X][Y] == '.' or graph[X][Y] == 'B')? 1:0):0);
}
 
void bfs(int startX,int startY){
  queue< pair<int,int> >q;
  bool startTracking = 0;
  q.push({startX,startY});
  while(!q.empty())
  {
    int x= q.front().first;
    int y= q.front().second;
    q.pop();
    
    rep(0,4)
    {
      if(isValid ( x+dx[i], y+dy[i] )) 
      {
        if( graph[x+dx[i]][y+dy[i]] == 'B') startTracking = 1;
        switch(i)
        {
          case 0 :  graph[x+dx[i]][y+dy[i]]= 'R'; break;
          case 1 :  graph[x+dx[i]][y+dy[i]]= 'L'; break;
          case 2 :  graph[x+dx[i]][y+dy[i]]= 'U'; break;
          case 3 :  graph[x+dx[i]][y+dy[i]]= 'D'; break;
                  
        }
        if(startTracking == 1) break;
        q.push({x+dx[i],y+dy[i]});
      }
      
    }
    if(startTracking == 1){
         track(); 
         break;
    }
  }
}
 
void  solve()
{
     cin >> n >> m;
     rep(0,n) repj(j,0,m) cin >> graph[i][j];
     rep(0,n) repj(j,0,m) {
        if(graph[i][j] == 'A')      strtX = i,  strtY = j;
        else if(graph[i][j] == 'B') endX  = i,  endY  = j;
     }
     
     bfs(strtX,strtY);
     
     if(ans.size()){
         reverse(ans.begin(),ans.end());
         cout << "YES\n" << ans.size() << endl;
         cout <<    ans     << endl;
     }
     else{
         cout << "NO\n";
     }
}
 
 
immortal_slave
{
    khalid    
    FastIO();
     int t=1; 
 
     while(t--){
          solve();
     }
 
 
     return 0;
 
}
 
