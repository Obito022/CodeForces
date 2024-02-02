/**
  * author  : obito022 
  * created : Fri Feb  2 18:37:01 +06 2024
  * link    : https://codeforces.com/problemset/problem/155/A
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a) cin >> i; 

  int high, low, count = 0;
  high = low = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > high) {
      count++;
      high = a[i];
    }
    if (a[i] < low) {
      count++;
      low = a[i];
    }
  }

  cout << count << endl;

  return 0;
}
