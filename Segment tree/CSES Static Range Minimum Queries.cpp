#include<bits/stdc++.h>
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
 
const int N = 2e5 + 7;
const int M = 4 * N + 7;
int a[N];
int minimum[M];
 
void build(int at , int L , int R)
{
	if(L == R)
	{
		minimum[at] = a[L];
		return ;
	}
 
	int mid = (L + R) / 2;
	build(at * 2, L , mid);
	build(at * 2 + 1 , mid + 1 , R);
 
	minimum[at] = min(minimum[at * 2] , minimum[at * 2 + 1]);
}
 
int query(int at , int L , int R , int l , int r)
{
	if(L > r   or  R < l)	return INT_MAX;
	if(L >= l and R <= r) 	return minimum[at];
 
	int mid  = (L + R) / 2;
	int left  = query(at * 2 , L , mid , l , r);
	int right = query(at * 2 + 1 , mid + 1 , R , l , r);
 
	return min(left,right);
}
 
int main()
{
	IO();
	int n , q; 
 	cin >> n >> q;
 
 	rep(i,1,n+1) cin >> a[i];
	build(1,1,n);
 
	rep(i,0,q){
		int l , r;
		cin >> l >> r;
		int ans = query(1,1,n,l,r);
		cout << ans << endl;
	}
	return 0;
}