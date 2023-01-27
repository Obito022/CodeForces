/**
  * author: obito022
  * created: 1.27.2023
  * link: https://codeforces.com/contest/1790/problem/A
**/
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  string pi = "314159265358979323846264338327";
  while (t--) {
    string s;
    cin >> s;
    int count = 0;
    int n = s.size();
    for (int i = 0; i < pi.size(); i++) {
      if (pi[i] == s[i])
        count++;
      else break;
    }
    cout << count << "\n";
  }

  return 0;
}
