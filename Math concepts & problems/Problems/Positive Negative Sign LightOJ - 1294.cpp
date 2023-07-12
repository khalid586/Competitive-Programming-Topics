#include <bits/stdc++.h>
using namespace std;

#define int long long int


#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}
const int N = 1e6 + 1;

void solve(int t){
     int n,m;
     cin >> n >> m;

     /*
          brute force approach 
          using for loop and assign + - sign
          according to the problem's ask then 
          sum it up.
     */

     // n = 12 m = 3
     // -1 - 2 - 3 + 4 + 5 + 6 - 7 - 8 - 9 + 10 + 11 + 12
     // (4-1) + (5-2) + (6-3) + (10-7) + (11 - 8) + (12 - 9)
     // 6 pairs and each of them have 3 as sum . ans = 3 * 6

     int pairs = n / 2;
     int sum_of_each_pair = m;
     int ans = sum_of_each_pair * pairs;
     cout << "Case " << t << ": " <<  ans << "\n";
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




