#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main(){
   int t;
   cin>>t;
   while(t--){
      ll x,y;
      cin>>x>>y;
      if(x>=y){
         if(x%2)cout<<(x-1)*(x-1)+1+y-1<<endl;
         else cout<<x*x-y+1<<endl;
      }
      else{
         if(y%2)cout<<(y-1)*(y-1)+1+(y*2-1-x)<<endl;
         else cout<<(y*y-(y*2-2))+x-1<<endl;
      }
 
 
 
   } 
 
 
   return 0;
}
