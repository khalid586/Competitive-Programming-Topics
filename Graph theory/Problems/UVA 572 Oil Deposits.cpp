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


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
    khalid
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
       // freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}
int dx[]={1,-1,0,0,1,-1,-1,1};
int dy[]={0,0,1,-1,1,1,-1,-1};

char graph[105][105]={}; 
int n,m;

bool valid(int x, int y )
{
    return (x<0|| x>=n || y<0 || y>=m )? false : true;
}

void dfs(int x,int y)
{
    if(graph[x][y]=='*') return;

    graph[x][y]='*';

    rep(0,8) 
        if(valid(x+dx[i],y+dy[i])) dfs((x+dx[i]),(y+dy[i]));
}

void solve()
{
    int cnt=0;
    rep(0,n) repj(j,0,m) in(graph[i][j])
    rep(0,n)
        repj(j,0,m)
            if(graph[i][j]=='@'){
                ++cnt; dfs(i,j);
            }

    out(cnt)
}

immortal_slave
{
    FastIO();

    ll t=1;
 //   in(t)

    while(1){
        cin >> n >> m;
        if(!n and !m) break;    
        solve();
    }
        

     return 0;

}