#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

const int N = 1e6 + 500;
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

#define int long long

// Modified sieve used to determine smallest prime factor

vector<int> primes;
vector<bool> check(N,1);
void SPF(){

     for(int i = 2; i * i <= N ; i++){
          if(check[i]){
               for(int j = i * i ; j <= N ; j+=i)
                    check[j] = 0;
          }
     }

     rep(i,2,N) 
          if(check[i]) primes.push_back(i);
}
void solve(int t){

          int n,sum = 1;
          cin >> n;

          int cntOfTheprime = 0;

          for(int i = 0 ; primes[i] * primes[i] <= n & i < N ; i++){
                    cntOfTheprime = 0;
                    while(n % primes[i] == 0){
                         ++cntOfTheprime;
                         n /= primes[i];
                    }
                    sum *= cn+1;
          }
          
          if(n != 1) sum *= 2; // it means there is another divisor which will be multiplied by each of the other divisors
          cout << "Case " << t << ": "; 
          cout << sum -1 << "\n"; 
}

int32_t main()
{
     FastIO();
     SPF();
     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




