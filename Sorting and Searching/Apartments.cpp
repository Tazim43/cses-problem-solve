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
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, m, k;
   cin >> n >> m >> k;
   vector <int > v1(n);
   vector <int > v2(m);
   for (int i = 0; i < n; i++)cin >> v1[i];
   for (int i = 0; i < m; i++)cin >> v2[i];
   sort(v1.begin(), v1.end());
   sort(v2.begin(), v2.end());
   int ans = 0;
   for (int i = 0, j = 0; i < m; i++) {
      while (j < n && v1[j] < v2[i] - k)
      {
         ++j;
      }
      if (j < n && v2[i] >= v1[j] - k && v2[i] <= v1[j] + k) {
         ans++;
         ++j;
      }
 
   }
   cout << ans << endl;
 
}
 
