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

const int N = 1e6 + 7;
int spf[N];
int lpf[N];
int dpf[N];
int tpf[N];
int divsum[N];
int divs[N];
vector<int> primes;


void SPF(){
     rep(i,1,N) spf[i] = i;

     for (int i = 2; i * i < N; ++i)
     {
          for (int j = i * i; j < N; j += i)
          {
               spf[j] = min(spf[j],i);
          }
     }

     rep(i,2,N) if(spf[i] == i) primes.push_back(i);
}

void LPF(){
     lpf[1] = 1;
     rep(i,2,N){
          map<int,int> factors;
          int n = i , mx = 0 , sm = 1 , prev = 1;
          while(n > 1){
               factors[spf[n]]++;
               mx = max(mx , spf[n]);
               n /= spf[n];
          }

          for(auto x: factors){
               int p = x.first , e = x.second;
               int divisorSum = 0;
               for(int i = 0 ; i <= e ; i++) divisorSum += (int)(pow(p,i));
               sm *= divisorSum;
          }

          divsum[i] = sm;
          for(auto x:factors) tpf[i] += x.second;
          dpf[i] = factors.size();
          lpf[i] = mx;
     }
     
}
void DIVS(){
     rep(j,2,N){
          int n = j , div = 1;
          for(int i = 0 ; i < N and primes[i] * primes[i] <= n ; i++){
               if(!(n % primes[i])){
                         int k = 0 ;
                         while(!(n % primes[i])){
                              n /= primes[i]; ++k;
                         }
                         div *= (k+1);
               }
          }
          if(n != 1) div *= 2;
          divs[j] = div;
     }
     
}

void solve(int t){
     int n;
     cin >> n;

     rep(i,0,n){
          int a;
          cin >> a;
          cout << spf[a] << ' ' << lpf[a] << ' ' << dpf[a] << ' ' << tpf[a] << ' ' << divs[a] << ' ' << divsum[a] << '\n';
     }    
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);
     
     SPF();
     LPF();
     DIVS();

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




