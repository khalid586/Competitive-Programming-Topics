#include <bits/stdc++.h>
using namespace std;

const long long  m =  1000010;

void FastIO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

std::vector<long long int>  primes;
vector<bool> siv(m,1);
void sieve()
{

    for (long long i=2; i * i <= m; i++){
          if(siv[i])
            for (long long j=i*i; j <= m; j+=i)
                siv[j]=0;
    }

    for (int i=2; i<m; i++)
        if(siv[i])  primes.push_back(i);
}
int main(){

     long long int n = 156,sum=1,s,k,i;
     sieve();
        

        // finding the number of divisors of N
     for(i=0;i<m && primes[i]*primes[i]<=n;i++)
     {
            if(n%primes[i]==0)
            {
                k=0;
                while(n%primes[i]==0)
                {
                    n/=primes[i];
                    k++;
                    if(n==0 || n==1)
                        break;

                }
                sum*=k+1;
            }
            cout << primes[i] << "\n";
     }

     cout << "n = " << n << "\n";
        /* If the number N is divided by a prime number than the
        sum has to be multiped by (1+1) where first 1 is the count of
        that prime number, N is divisible by and second 1 is the plus one
        of the formula. */

        if(n!=1)
            sum*=2;

       cout << sum - 1 << "\n";
}