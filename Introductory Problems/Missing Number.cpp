#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 
   ll n;
   cin>>n;
   ll arr[n-1];
   for(ll i=0; i<n-1; i++){
      cin>>arr[i];
   }
   sort(arr, arr+(n-1));
   ll num =1;
   for(ll i=0; i<n-1; i++){
      if(num==arr[i])num++;
      else{
         break;
      }
      
   }
   cout<<num<<endl;
 
   return 0;
}
