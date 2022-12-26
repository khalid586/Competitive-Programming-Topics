#include <bits/stdc++.h>
using namespace std;

typedef long long             ll;
typedef deque<ll>             dq ;
typedef list<ll>              li;
typedef vector<string>        vst ;
typedef vector<ll>            vll ;
typedef deque<ll>::iterator   dita;
typedef double                dd;
typedef greater<ll>           gt;
typedef list<ll>::iterator    liita;
typedef vector<ll>::iterator  vecita;
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
#define lcm(a,b)        (a*b)/__gcd(a,b)
#define all(x)          x.begin(),x.end()
//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
    khalid
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

const int N  = 2e5+5;
const ll mod = 1e9+7;

vector<int> graph[N];
int vis[N];
ll one=0,zero=0;
void dfs(int p,int color)
{
    if(vis[p]!=-1) return;

    vis[p]=color; 

    if(color) one++; else zero++;

    for(auto x:graph[p])  dfs(x,1-color);
}

void solve()
{ 
    int n; in(n) 
    rep(0,n-1)
    {
        ll a,b;    in(a>>b)
        graph[a].pb(b); graph[b].pb(a); 
    }

    rep2(1,n)
          if(vis[i]==-1) dfs(i,0);

    ll ans = one * zero - (n-1);
    out(ans)
    
}

immortal_slave
{
    FastIO(); 

    ll t=1;
    //in(t)

    memset(vis,-1,sizeof(vis));
    

    while(t--){
        solve();
    }
        
    return 0;

}