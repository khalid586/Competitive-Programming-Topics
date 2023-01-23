#include<bits/stdc++.h>
using namespace std;
 
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
 
void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
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
void update(int at , int L , int R , int pos , int u)
{
	if(L == R){
		minimum[at] = u; return;
	}
	int mid = (L + R) / 2;
	if(pos <= mid) update(at * 2 , L , mid , pos , u);
	else		   update(at * 2 + 1 , mid + 1 , R , pos , u);
 
	minimum[at] = min ( minimum[at * 2] , minimum[at * 2 + 1]);
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
		int type; cin >> type;
		switch(type){
			case 1: int pos , u; cin >> pos >> u; update(1,1,n,pos,u); break;
			default: int l , r; cin >> l >> r; cout << query(1,1,n,l,r) << endl;
		}
	}
	return 0;
}