#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int     ll;
typedef vector<ll>      vll ;
#define in(x)           cin>>x;
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define out(x)          cout<<x<<"\n";
#define out2(x)         cout<<x;
#define newline         cout<<"\n";
#define pb              push_back
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.rbegin(), v.rend())
#define rep(a,b)        for(ll i = a; i < b;++i)
#define repj(j,a,b)     for(ll j = a; j < b;++j)
#define rep2(a,b)       for(ll i = a; i <= b; ++i)
#define rep2j(j,a,b)    for(ll j = a; j <= b; ++j)
#define rep3(a,b)       for(ll i = a; i >= b;--i)
#define rep3j(j,a,b)    for(ll j = a; j >= b;--j)   
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define lld             long double
#define ull             unsigned long long 
#define all(s)          s.begin(),s.end()
#define endl            "\n"
#define lcm(a,b)        (a*b)/(__gcd(a,b))
#define lcm3(a,b,c)     (lcm(a,b)*c)/(__gcd(c,lcm(a,b)))
//----------------------------------------------------debugger-------------------------------------------------------------// |
void _print(ll t) {cerr << t <<",";}                                                                                                
void _print(int t) {cerr << t<<",";}
void _print(string t) {cerr << t<<",";}
void _print(char t) {cerr << t<<",";}
void _print(lld t) {cerr << t<<",";}
void _print(double t) {cerr << t<<",";}
void _print(ull t) {cerr << t<<",";}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//----------------------------------------------------debugger-------------------------------------------------------------//|
template<class T>
using indexed_set = tree<T,null_type,less<T>,rb_tree_tag,
tree_order_statistics_node_update>;
/*
*s.find_by_order returns the value stored at that position
s.order_of_key returns the position where the value is stored

Starting in the name of Allah(THE ALMIGHTY)
*/
void FastIO()
{
     khalid
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}
/*
bool cmp(string a,string b)
{
     return a.size()<b.size();
}
*/
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char graph[20][20];
int cnt=0;
int n,m; 
bool valid(int x,int y)
{
     if(x>=0 and x<m and y>=0 and y<n) return true;
     return false;
}
void dfs(int x,int y)
{
     if(graph[x][y]=='#') return;
     graph[x][y] = '#'; ++cnt;

     rep(0,4){
          if(valid(x+dx[i],y+dy[i])) dfs(x+dx[i],y+dy[i]);
     }
}
void  solve(int t)
{    
     pair<int,int> start;
     in(n>>m)
     rep(0,m) repj(j,0,n){
          in(graph[i][j])
          if(graph[i][j]=='@') start.first=i,start.second=j;
     }

     dfs(start.first,start.second);

     out("Case "<<t<<": "<<cnt)
}     
int main()
{
     FastIO(); 
     int t = 1;
     in(t) 
     rep2(1,t){
          cnt=0; solve(i);
     } 
     return 0;
}

