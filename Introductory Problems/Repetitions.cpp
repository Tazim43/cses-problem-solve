#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
   string s;
   cin>>s;
   int sum=1;
   int max =1;
   for(int i=0; i<s.length()-1; i++){
      if(s[i]==s[i+1]){
         sum++;
         if(sum>max)max=sum;
      }
      else sum=1;
   }
   
   cout<<max<<endl;
 
 
 
   return 0;
}
