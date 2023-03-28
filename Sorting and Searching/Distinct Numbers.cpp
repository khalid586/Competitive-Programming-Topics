#include<iostream>
#include<algorithm>
#include<vector>
 
typedef long long ll;
using namespace std;
 
int main()
{
 
   ll n,move=1,diff;
   cin>>n;
   ll ar[n];
 
   for(ll i=0;i<n;i++)
   {
     cin>>ar[i];
   }
 
   sort(ar,ar+n);
 
   for(ll j=0;j<n-1;j++)
   {
      diff=ar[j+1]-ar[j];
       if(diff!=0)
    
       {
         move++;
       }
    
   }
   cout<<move<<"\n";
   return 0;
}