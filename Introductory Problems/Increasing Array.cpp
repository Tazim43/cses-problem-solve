#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main(){
   ll n;
   cin>>n;
   ll v[n];
   for(ll i=0; i<n; i++){
      cin>>v[i];
   }
   ll sum=0;
   int max = v[0];
   for(ll i=0; i<n-1; i++){
      if(max<v[i])max=v[i];
      if(max>v[i+1]){
         sum+=(max-v[i+1]);
      }
   }
 
   cout<<sum<<endl;
   
 
 
   return 0;
}
