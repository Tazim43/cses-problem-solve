#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 
   ll n;
   cin>>n;
   ll sum = 0;
   for(int i=5; i<=n; i*=5){
      sum+=floor(1.00*n/i);
   }
   cout<<sum<<endl;
 
 
   return 0;
}
