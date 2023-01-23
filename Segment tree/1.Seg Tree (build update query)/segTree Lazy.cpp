#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //   freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}

const int N = 2e5 + 7;
int num[N];
int sum[4*N] , lazy[4*N];

void build(int at , int L , int R)
{
     if(L == R){
          sum[at] = num[L];
          return;
     }

     int mid = (L + R) / 2;

     build(at * 2 , L , mid);
     build(at * 2 + 1, mid + 1 , R);

     sum[at] = sum[at * 2] + sum[at * 2 + 1];
}

int query(int at , int L , int R , int l , int r)
{
     if(lazy[at]){
          int pendingUpdate = lazy[at];
          lazy[at] = 0;
          sum[at] += pendingUpdate * (R - L + 1);

          if(L != R){
               lazy[2*at] += pendingUpdate;
               lazy[2*at+1] += pendingUpdate;
          }
     }

     if(r < L || R < l)   return 0;
     if(l <= L && R <= r) return sum[at];

     int mid = (L + R) / 2;
     int x = query(at * 2 , L , mid , l , r);
     int y = query(at * 2 + 1 , mid + 1 , R , l , r);
     
     return x + y;
}

void update(int at,int L,int R,int l, int r,int u)
{
     if(lazy[at]){
          int pendingUpdate = lazy[at];
          lazy[at] = 0;
          sum[at] += pendingUpdate * (R - L + 1);

          if(L != R){
               lazy[2*at] += pendingUpdate;
               lazy[2*at+1] += pendingUpdate;
          }
     }

     if(r < L || R < l)   return;

     if(L >= l and R <= r){
          int pendingUpdate = (r - l + 1) * u;
          sum[at] += pendingUpdate;

          if(l != r){
               lazy[2*at] += u;
               lazy[2*at+1] += u;
               return;
          }
     }

     int mid = (L + R) / 2;

     update(at * 2 , L , mid, l, r, u);
     update(at * 2 + 1 , mid + 1, R , l, r, u);

     sum[at] = sum[at * 2] + sum[at * 2 + 1];
}

void solve(int t){
     int n,q; cin >> n >> q;
     rep(i,1,n+1) cin >> num[i];

     build(1,1,n);
     rep(i,0,q){
          int type;
          cin >> type;
          if(type == 1){
               int l,r,u; 
               cin >> l >> r >> u;
               update(1,1,n,l,r,u);
          }
          else{
               int l,r; 
               cin >> l >> r;
               cout << query(1,1,n,l,r) << endl;
          }
     }

}

int32_t main()
{
     IO(); 
     int t = 1; 
    // cin >> t; 
   
     rep(i,1,t+1) solve(i);

     return 0;
}