/**
  * author : obito022
  * created : 12.01.2022 -> First of December 2022
  * link : https://codeforces.com/problemset/problem/1759/A
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str = "Yes";
  for (int i = 0; i < 17; i++) 
    str += "Yes";// I don't know why I wrote this shit. By pythong is better.
  int t;        // You can't just wrote "Yes" * 17 in python. In c++ it didn't work.
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    size_t found = str.find(s);
    if (found != string::npos)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }

  return 0;
}
