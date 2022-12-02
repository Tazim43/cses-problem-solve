#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main(){
   ll t;
   cin>>t;
   while(t--){
      ll a, b;
      cin>>a>>b;
      if(a==0 && b==0)cout<<"YES"<<endl;
      else if(a==0 || b==0)cout<<"NO"<<endl;
      else if(ceil(max(a,b)/2) > min(a,b))cout<<"NO"<<endl;
      else if((a+b)%3)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
   }
 
 
   return 0;
}
