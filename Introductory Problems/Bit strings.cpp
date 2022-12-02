#include<bits/stdc++.h>
using namespace std;
 
int main(){
   long long mod = 1000000007;
   long long int n;
   cin>>n;
   long long int sum=2;
   for(int i=1; i<n; i++){
      sum = (2*sum)%mod;
   }
   cout<<sum<<endl;
 
   return 0;
}
