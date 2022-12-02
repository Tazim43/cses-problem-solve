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
 
char ar[8][8];
int res = 0;
vector<int> col(8, 0), diag1(64, 0), diag2(64, 0);
void search(int y) {
   if (y == 8) {
      res++;
      return;
   }
   for (int x = 0; x < 8; x++) {
      if (col[x] || diag1[x + y] || ar[x][y] == '*' || diag2[x - y + 8])continue;
      col[x] = diag1[x + y] = diag2[x - y + 8] = 1;
      search(y + 1);
      col[x] = diag1[x + y] = diag2[x - y + 8] = 0;
   }
 
}
 
int main() {
   FAST_IO;
   // start
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
         cin >> ar[i][j];
      }
   }
   search(0);
   cout << res << endl;
 
 
   return 0;
}
 
