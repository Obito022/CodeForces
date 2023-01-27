/**
  * author: obito022
  * link: https://codeforces.com/contest/1772/problem/A
**/
#include <iostream>
#include <sstream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    string s;
    cin >> s;
    stringstream ss;
    ss << s[0];
    ss >> a;
    stringstream ss1;
    ss1 << s[2];
    ss1 >> b;
    cout << a + b << endl;

  }
  return 0;
}
