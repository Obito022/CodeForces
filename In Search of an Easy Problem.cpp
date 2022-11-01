/*
  * author : obito022
  * date: 11.1.2022
  * link : https://codeforces.com/problemset/problem/1030/A
*/

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i;
  cin >> n;
  while (n--) {
    cin >> i;
    if (i == 1) {
      cout << "HARD" << endl;
      return 0;
    }
  }
  cout << "EASY" << endl;
  return 0;
}
