#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); // Reduced 1200 ms time 
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}
 
 
 
void solve()
{
    multiset<int> tickets; // using vector will be give TLE 
    int n , m; cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        int num; cin >> num; tickets.insert(num);
    }

    for (int i = 0; i < m; ++i)
    {
        int num; cin >> num;

        auto index = tickets.upper_bound(num);

        if(index == tickets.begin()) cout << -1 << '\n';
        else{ --index; cout << *index << '\n'; tickets.erase(index);}
    }
}
 
 
int32_t main()
{
    FastIO();
     
    solve();

    return 0;
 
}
