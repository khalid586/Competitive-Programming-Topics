#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
 #define int long long int
#define all(x) x.begin(),x.end()

void solve() {
   int n; cin >> n;

   multiset<int> stack;

   rep(i,0,n){
          int x;
          cin >> x;

          auto idx = stack.upper_bound(x);
          if(idx != stack.end()) stack.erase(idx);

          stack.insert(x);
   }
   cout << stack.size() << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     solve();

     return 0;
}

