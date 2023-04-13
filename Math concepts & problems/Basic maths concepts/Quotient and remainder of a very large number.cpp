#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

int32_t main()
{

     string a; 
     int b , res = 0;
     cin >> a >> b;

     std::vector<int> div;

     rep(i,0,a.size()){
          int d = (res * 10 + (a[i] - '0'))/b;
          if(d) div.push_back(d);
          res = (res * 10 + (a[i] - '0')) % b;
     }

     for(auto x:div) cout << x ; cout << endl; // Quoitient
     cout << res << '\n'; // Remainder

     return 0;
}




