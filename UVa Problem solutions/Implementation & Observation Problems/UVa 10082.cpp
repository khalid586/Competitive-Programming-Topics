#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define endl '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))

void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long 

#define all(x) x.begin(),x.end()
const int N = 1e7 + 9;

char ch [] = {'`','1','2','3','4','5','6','7','8',
     '9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']'
     ,'\\','A','S','D','F','G','H','J' ,'K','L',';','\'','Z','X','C','V'
     ,'B','N','M',',','.','/'
     };

char solve(char x){

     if(x == '\n') return '\n';
     rep(i,0,sizeof(ch)/sizeof(ch[0])) if(ch[i] == x){ return ch[i-1];}  
     return ' '; 
}

int32_t main()
{
     IO();
     int t = 1; 
    // cin >> t; 

     char s; 
     while(scanf("%c",&s) != EOF){
          cout << solve(s); 
          
     }

     return 0;
}

