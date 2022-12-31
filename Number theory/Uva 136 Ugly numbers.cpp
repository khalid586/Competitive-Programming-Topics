#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 107;
const int MX = 1e6;
std::vector<int> graph[N];
vector<int> lvl(N, -1);

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

#define int long long int
set<int> res;

void bfs(){
     set<int> q;
     q.insert(2);
     q.insert(3);
     q.insert(5);

     rep(i,0,2000){
          int curr = *q.begin();
          q.erase(q.begin());

          q.insert(curr * 2);
          q.insert(curr * 3);
          q.insert(curr * 5);

          res.insert(curr * 2);
          res.insert(curr * 3);
          res.insert(curr * 5);

        //  for(auto x:q) cout << x << ' '; cout << endl;
     }

}

void solve(int t){
     res.insert(1);
     res.insert(2);
     res.insert(3);
     res.insert(5);

     bfs();

     vector<int> ans;
     for(auto x:res) ans.push_back(x);

     cout << "The 1500'th ugly number is "<< ans[1499] << ".\n";
}

int32_t main()
{
     FastIO();

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




