/**
  * author : obit022
  * created : 11.21.2022
  * link : https://codeforces.com/problemset/problem/158/A
**/


#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, count=0;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    arr[i] = a;
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] >= arr[k-1] && arr[i] > 0) 
      count++;
  }
  cout << count << endl;

  return 0;
}

