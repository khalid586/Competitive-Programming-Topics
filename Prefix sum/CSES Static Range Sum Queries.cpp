#include <bits/stdc++.h>
using namespace std;
 
#define rep(i,a,b) for(int i = a; i < b; i++)

void  solve()
{
     int n,k;
     cin >> n >> k;
     vector<int> v(n+1); 
     
     rep(i,1,n+1)
          cin >> v[i];
 
 
     vector<int> ans(n+1);
     ans[1] = v[1];
     
     rep(i,2,n+1){
          ans[i]=ans[i-1]+v[i];
     }
     
     rep(i,0,k){
          int  st,end;
          cin >> st >> end;
     
          cout << ans[end]-ans[st-1] << '\n';
     }
   
}
 
 
int main()
{
     solve();
     return 0;
}