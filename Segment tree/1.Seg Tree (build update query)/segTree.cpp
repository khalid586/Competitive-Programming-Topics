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
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
 #define int long long 

#define all(x) x.begin(),x.end()

const int N = 2e5 + 7;
int num[N];
int sum[4*N];

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
void update(int at,int L,int R,int pos,int u)
{
     if(L == R){
          sum[at] = u;
          return;
     }

     int mid = (L + R) / 2;

     if(pos <= mid) update(at * 2 , L , mid, pos, u);
     else           update(at * 2 + 1 , mid + 1, R , pos , u);

     sum[at] = sum[at * 2] + sum[at * 2 + 1];
}

int query(int at , int L , int R , int l , int r)
{
     if(r < L || R < l)   return 0;
     if(l <= L && R <= r) return sum[at];

     int mid = (L + R) / 2;
     int x = query(at * 2 , L , mid , l , r);
     int y = query(at * 2 + 1 , mid + 1 , R , l , r);
     
     return x + y;
}

void solve(int t){
     int n,q; cin >> n >> q;
     rep(i,1,n+1) cin >> num[i];

     build(1,1,n);
     rep(i,0,q){
          int type;
          cin >> type;
          if(type == 1){
               int k,u; cin >> k >> u;
               update(1,1,n,k,u);
          }
          else{
               int l,r; cin >> l >> r;
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