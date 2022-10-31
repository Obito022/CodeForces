/*
  * author : Obito022
  * date: 10.30.2022
  * link: https://codeforces.com/problemset/problem/41/A
*/
 
#include <iostream>
using namespace std;
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s, t, str;
  cin >> s >> t;
  for (int i = s.size()-1; i >=0; i--) {
    str += s[i];
  }
  if (str == t) cout << "YES" << endl;
  else cout << "NO" << endl;
 
  return 0;
}
