#include<bits/stdc++.h>
using namespace std;
 
int main(){
   long long int n;
   cin>>n;
   for(long long int i=1; i<=n; i++){
      if(i<3){
         cout<<((i*i)*(i*i-1))/2<<endl;
      }
      else {
         cout<<(((i*i)*(i*i-1))/2)-(4*(i-1)*(i-2))<<endl;
      }
   }
 
   return 0;
}
