/*
  * author: obit022
  * date: 11.2.2022
  * link: https://codeforces.com/problemset/problem/136/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int arr[n];
  for (int i = 1; i < n + 1; i++) {
    int p;
    cin >> p;
    arr[p-1] = i;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << '\n';
  }
  return 0;
}
