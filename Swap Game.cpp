/**
  * author : obito022
  * created : 11.22.2022
  * link : https://codeforces.com/problemset/problem/1747/C
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      arr[i] = a;
    }
    int j = arr[0];
    sort(arr, arr+n);
    if (arr[0] == j)
      cout << "Bob" << '\n';
    else
      cout << "Alice" << '\n';
  }

  return 0;
}
