#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)

void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}

int dx[] = {1,-1,0,0,1,-1,1,-1};
int dy[] = {0,0,1,-1,1,-1,-1,1};
vector<string> g;
bool vis[50][50] = {};
int n , m , cnt = 0;

bool isValid(int X,int Y){
    return (X < 0 || X >= n || Y < 0 || Y >= m )? 0:1;
}

void dfs(int x,int y){
    if(vis[x][y] ) return;
    vis[x][y] = 1;
    ++cnt; 

  //  cout << cnt << '\n';

    rep(i,0,8){
        if(isValid(x+dx[i],y+dy[i])){
          if(g[x+dx[i]][y+dy[i]] == '1') 
            dfs(x+dx[i],y+dy[i]);
        }
    }
}

int32_t main()
{
    std::ios::sync_with_stdio(false);cin.tie(NULL); 
    IO();

    int t = 1; char s[30];
    scanf("%d\n",&t);


    rep(q,1,t+1){
            g.clear(); 
            int mx = 0;
            while(gets(s)){
                if(!s[0]) {break;}
                g.push_back(s);
            }

            n = g.size();
            m = g[0].size();

            rep(i,0,n) 
                rep(j,0,m) 
                    if(!vis[i][j] and g[i][j] == '1') {
                        cnt = 0;
                        dfs(i,j);
                        mx = max(mx,cnt);
                    }

            cout << mx << '\n';
            
            rep(i,0,50) rep(j,0,50) vis[i][j] = 0;

        if(q != t) cout << '\n';
    }
    
   return 0;
}

