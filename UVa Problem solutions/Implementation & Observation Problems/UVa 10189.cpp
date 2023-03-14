#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define endl '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))

void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;
int moveX[] = {0,1,-1,0,1,-1,-1,1};
int moveY[] = {1,0,0,-1,1,-1,1,-1};

void solve(int n, int m , int cs){
     char field[n][m];
     set<pair<int,int>> star;

     rep(i,0,n) rep(j,0,m){
          cin >> field[i][j];

          if(field[i][j] == '*') star.insert({i,j});
     }

     int res[n][m];
     rep(i,0,n) rep(j,0,m){
          res[i][j] = 0;
     }

     for(auto X:star){
          int x = X.first , y = X.second;

          rep(i,0,8){
               int currX = x + moveX[i] , currY = y + moveY[i];
               if(currX >= 0 and currY >= 0 and currX < n and currY < m)
                    res[currX][currY] ++;
          } 
     }

     cout << "Field #" << cs << ":\n";
     rep(i,0,n){ 
          rep(j,0,m){
               if(star.count({i,j})) cout << '*';
               else                  cout << res[i][j];
          }
          cout << '\n';
     }
}

int32_t main()
{
     IO();
     int s , t ,  cs = 1; 
    // cin >> t; 
   
     while(cin >> s >> t){
          if(!s and !t) break;
          if(cs > 1) cout << '\n';
          solve(s,t,cs); ++cs;
     }

     return 0;
}

