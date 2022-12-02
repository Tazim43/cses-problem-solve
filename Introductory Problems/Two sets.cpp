#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
   ll n;
   cin>>n;
   ll sum = (n*(n+1))/2;
   vector<int> ans;
   vector<int> ans1;
   if(sum%2)cout<<"NO"<<endl;
   else {
      cout<<"YES"<<endl;
      sum/=2;
      ll a,b;
      for(ll i=n; i>=1; i--){
         
         if(i<=sum && sum){
            ans.push_back(i);
            sum-=i;
         }else{
            ans1.push_back(i);
         }
      }
      cout<<ans.size()<<endl;
      for(auto i=ans.begin(); i!=ans.end(); i++){
         cout<<*i<<" ";
      }
      cout<<endl;
      cout<<ans1.size()<<endl;
      for(auto i=ans1.begin(); i!=ans1.end(); i++){
         cout<<*i<<" ";
      }
      cout<<endl;
   }
 
 
   return 0;
}
