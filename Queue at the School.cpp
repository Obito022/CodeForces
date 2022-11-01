/*
  * author: obito022
  * date: 11.1.2022
  * link: https://codeforces.com/problemset/problem/266/B
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, t;
  string s;
  cin >> n >> t >> s;
  while (t--) {
    for (int i = 1; i < n; i++) {
      if (s[i] == 'G' && s[i - 1] == 'B') {
        swap(s[i], s[i-1]);
        i++;
      }
    }
  }
  cout << s << endl;

  return 0;
}
