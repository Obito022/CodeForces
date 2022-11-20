/**
  * author : obito022
  * created : 11.20.2022
  * link: https://codeforces.com/problemset/problem/71/A
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
  string str;
  cin >> str;
  if (str.size() <= 10) 
    cout << str << '\n';
  else
    cout << str[0] << str.size()-2 << str[str.size()-1] << '\n';
  }

  return 0;
}
