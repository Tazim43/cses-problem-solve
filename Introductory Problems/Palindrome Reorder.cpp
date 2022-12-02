#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
   string s;
   cin>>s;
   map <char , int> mp;
   for(int i=0; i<s.length(); i++){
      mp[s[i]]++;
   }
   int check = 0;
   
   vector<char> ba;
   // vector<char> ab;
   string mid = "";
 
   for(auto i:mp){
      if(check>1)break;
      if(i.second%2){
         check++;
         while(i.second--)mid.push_back(i.first);
      }
      else{
         for(int j=0; j<i.second/2; j++)ba.push_back(i.first);
         // for(int j=i.second/2; j<i.second; j++)ab.push_back(i.first);
      }
   }
   if(check>1)cout<<"NO SOLUTION"<<endl;
   else{
      for(int i=0; i<ba.size(); i++){
         cout<<ba[i];
      }
      cout<<mid;
      for(int i=ba.size()-1; i>=0; i--){
         cout<<ba[i];
      }
      cout<<endl;
   }
 
 
   return 0;
}
