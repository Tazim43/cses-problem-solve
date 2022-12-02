/* Author: Tazim(The_crawler) */
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long int
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define prow(n) for(auto i:n)cout<<i<<" ";cout<<"\n";
#define pcol(n) for(auto i:n)cout<<i<<"\n";
#define yes printf("YES\n");
#define no printf("NO\n");
#define Yes printf("Yes\n");
#define No printf("No\n");
#define nl "\n"
#define INF 2147483647
#define INFLL 9223372036854775807 
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
 
string s;
vector<string> ans;
int char_count[26];
 
void seach(string curr) {
   if (curr.size() == s.size()) {
      ans.push_back(curr);
   }
   for (int i = 0; i < 26; i++) {
      if (char_count[i] > 0) {
         char_count[i]--;
         seach(curr + (char)('a' + i));
         char_count[i]++;
      }
   }
}
 
int main() {
   FAST_IO;
   // start
   cin >> s;
   for (unsigned int i = 0; i < s.size(); i++) {
      int a = s[i] - 'a';
      char_count[a]++;
   }
   seach("");
   cout << ans.size() << nl;
   pcol(ans)
 
      return 0;
}
