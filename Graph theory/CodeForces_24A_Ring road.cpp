#include <bits/stdc++.h>
using namespace std;

typedef long long             ll;
typedef vector<ll>            vll ;
typedef double                dd;
typedef greater<ll>           gt;
#define immortal_slave  int main()
#define in(x)           cin>>x;
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp              make_pair
#define out(x)          cout<<x<<"\n";
#define out2(x)         cout<<x;
#define newline         cout<<"\n";
#define pb              push_back
#define pf              push_front
#define pob             pop_back
#define pof             pop_front
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.begin(), v.end(),gt())
#define rep(a,b)        for(ll i = a; i < b;++i)
#define repj(j,a,b)     for(ll j = a; j < b;++j)
#define rep2(a,b)       for(ll i = a; i <= b; ++i)
#define rep2j(j,a,b)    for(ll j = a; j <= b; ++j)
#define rep3(a,b)       for(ll i = a; i >= b;--i)
#define rep3j(j,a,b)    for(ll j = a; j >= b;--j)
#define ss              stringstream
#define st              string
#define min3(a,b,c)     min( a,min( b, c))
#define min4(a,b,c,d)   min( d,min3( a, b, c))
#define max3(a,b,c)     max( a,max( b, c))
#define max4(a,b,c,d)   max( d,max3(a,b,c))
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define all(s)          s.begin(),s.end()
#define ull             unsigned long long
#define lld             long double
#define endl            "\n"
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

//Starting in the name of Allah(THE ALMIGHTY)

int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};

const int N  = 2e5+10;
const ll mod = 1e9+7;
const int M = 300;
int cost = 0;
bool vis[M];
vector<pair<int,int>> graph[M];

void dfs(int node, int par){
   vis[node] = 1;
   
   for(auto child:graph[node]){
     int dest = child.first;
     int cst = child.second;
     if(!vis[dest]){
         cost += cst ;
         dfs(dest,node);
     }
     
     else if(dest == 1 and (par > 1)){
        cost += cst;
     }
   }
}

/*
void bfs(){
   queue<int> q;
   q.push(1);
   vis[1] = 1;
   while(!q.empty()){
      int curr = q.front();
      q.pop(); out(curr)
      
      for(auto child:graph[curr]){
         int node = child.first.first;
         if(vis[node] == 0){
           vis[node] = 1;
            q.push(node);
            int cost = child.first.second;
            int dir  = child.second;
            
            penalty[dir] += cost;
         }
      }
   }
}
*/
void  solve()
{
  int n,sum=0; in(n)
  
  rep(0,n){
    int a,b,c;
    in(a >> b >> c)
    graph[a].pb({b,0});
    graph[b].pb({a,c});
    sum += c;
  }
  
  dfs(1,0); 
  
  int ans = min(cost,sum - cost);
 // out(penalty[0] << penalty[1])
 out(ans)
}


immortal_slave
{ 
     khalid    
     ll t=1;
   // in(t)
     while(t--){
          solve();
     }
     return 0;
}
 