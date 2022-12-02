#include<bits/stdc++.h>
#define ll long long int
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define prow(n) for(int i:n)cout<<i<<" ";
#define pcol(n) for(int i:n)cout<<i<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
 
using namespace std;
 
int main(){
   int n;
   cin>>n;
   map <int , int > mp;
   for(int i=0; i<n; i++){
      int a;
      cin>>a;
      mp[a]++;
   }
   cout<<mp.size()<<endl;
   
 
   return 0;
}
