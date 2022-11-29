#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main(){
   ll n;
   cin>>n;
   bool check = false;
   if(n==1)cout<<1<<endl;
   if(n==4)cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
   else if(n<5)cout<<"NO SOLUTION"<<endl;
   else {
      for(int i=1; i<=n; i+=2){
      cout<<i<<" ";
   }
   for(int i=2; i<=n; i+=2)cout<<i<<" ";
   cout<<endl;
   }
   
 
 
   return 0;
}
