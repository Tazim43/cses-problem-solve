/* Author: Tazim(The_crawler) */
#include<bits/stdc++.h>
#define ll long long int
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define prow(n) for(auto i:n)cout<<i<<" ";cout<<endl;
#define pcol(n) for(auto i:n)cout<<i<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define debug(x) cout<<#x<<" = ";_print(x); cout<<endl; /// Debug function
using namespace std; ///****
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return (a.second < b.second); }
template<class T> void _print(T x) { cout << x; }
template<class T> void _print(vector<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T> void _print(set<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T, class V> void _print(pair<T, V>x) { cout << "{" << x.first << "," << x.second << "} "; }
template<class T, class V> void _print(map<T, V>x) { cout << "[ ";for (auto i : x)_print(i);cout << "]"; }
template<class T> void _print(multiset<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
/* Hack my code. It's Easy to Read */
 
 
 
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   // start
   ll n;
   ll MOD = 1e9 + 7;
   cin >> n;
   vector<ll> dp(n + 6);
   dp[0] = 1;
   dp[1] = 1 + dp[0];
   dp[2] = 1 + dp[1] + dp[0];
   dp[3] = 1 + dp[0] + dp[1] + dp[2];
   dp[4] = 1 + dp[0] + dp[1] + dp[2] + dp[3];
   dp[5] = 1 + dp[0] + dp[1] + dp[2] + dp[3] + dp[4];
   for (ll i = 6; i < n; i++) {
      dp[i] = (dp[i - 1] % MOD + dp[i - 2] % MOD + dp[i - 3] % MOD + dp[i - 4] % MOD + dp[i - 5] % MOD + dp[i - 6] % MOD) % MOD;
   }
   cout << dp[n - 1] % MOD << endl;
 
 
 
   return 0;
}
