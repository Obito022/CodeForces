/*
  * autor : obito022
  * date : 11.1.2022
  * link : https://codeforces.com/problemset/problem/443/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, str="", S="";
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    if (!(s[i] == '{' || s[i] == ',' || s[i] == ' ' || s[i] == '}'))
      str += s[i];
  }
  sort(str.begin(), str.end());
  int a, b;
  for (a = 0; a < str.size(); a++) {
    for (b = 0; b < str.size(); b++) 
      if (str[a] == str[b])
        break;
    if (a == b)
      S += str[a];
  }
  cout << S.size() << endl;

  return 0;
}
