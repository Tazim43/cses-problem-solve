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
 
int main() {
   int n, x;
   cin >> n >> x;
   int ar[n];
   for (int i = 0; i < n; i++)cin >> ar[i];
   sort(ar, ar + n);
   int ans = 0;
   int i = 0, j = n - 1;
   while (i <= j) {
      if (ar[i] + ar[j] <= x) {
         ans++;
         ++i;
         --j;
      }
      else {
         ans++;
         --j;
      }
   }
   cout << ans << endl;
 
 
   return 0;
}
