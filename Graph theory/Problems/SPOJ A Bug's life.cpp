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
// *s.find_by_order returns the value stored at that position
// s.order_of_key returns the position where the value is stored
//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}
// bool cmp(string a,string b)
// {
//      return a.size()<b.size();
// }

const int N = 2e3+9;
vector<int> graph[N];
int color[N];
bool vis[N];
bool ok = 1;

void dfs(int currNode, int parent){
     
     if(!ok) return;
     vis[currNode] = 1;
     color[currNode] = color[parent] ^ 1;

     for(auto child:graph[currNode]){
          if(!vis[child]) dfs(child,currNode);
          else if(color[child] == color[currNode]){
               ok = 0; return;
          }
     }
}
void CLEAR(){
     rep(0,N) vis[i] = 0 , color[i] = 0 , ok = 1 , graph[i].clear();
}
void  solve(int t)
{
     int n,m; in(n >> m)
     vector<pair<int,int>> vp;
     rep(0,m){
          int a,b;
          in(a >> b)
          graph[a].pb(b); graph[b].pb(a);
     }
     rep(1,n+1) if(!vis[i])dfs(i,0);

     cout << "Scenario #" << t << ":\n";

     if(!ok) out("Suspicious bugs found!")
     else    out("No suspicious bugs found!")

     CLEAR();
}
int main()
{
     FastIO();
     int t = 1;  
     in(t)
     rep2(1,t)  solve(i);

     return 0;
}

