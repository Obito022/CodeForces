/*
  * author : Obito022
  * date: 10.25.2022
  * link: https://codeforces.com/problemset/problem/935/A
*/

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; cin.ignore();
  int count = 0;
  for (int i = 1; i < n; i++) {
    if ((n - i) % i == 0) {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}
