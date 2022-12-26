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
#define rep(a,b)        for(int i = a; i < b;++i)
#define repj(j,a,b)     for(int j = a; j < b;++j)
#define rep2(a,b)       for(int i = a; i <= b; ++i)
#define rep2j(j,a,b)    for(int j = a; j <= b; ++j)
#define rep3(a,b)       for(int i = a; i >= b;--i)
#define rep3j(j,a,b)    for(int j = a; j >= b;--j)
#define ss              stringstream
#define st              string
 
 
//Starting in the name of Allah(THE ALMIGHTY)
void debugMode()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}
 
 
void  solve()
{
   ll n,k; in(n>>k) vll v(n+1); rep(1,n+1)in(v[i])
 
 
   vll ans(n+1);ans[1]=v[1];
 
   rep(2,n+1)
   {
        ans[i]=ans[i-1]+v[i];
   }
   
   rep(0,k)
   {
        ll st,end;in(st>>end)
 
        out(ans[end]-ans[st-1]);
   }
   
}
 
 
immortal_slave
{
 
    khalid
    debugMode();
 
    ll t=1;
 
    //in(t)
 
    while(t--)
        solve();
 
     return 0;
 
}