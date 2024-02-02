// https://codeforces.com/contest/1856/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T; cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &a : A) cin >> a;

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      if (A[i] > A[i + 1])  
        ans = max(ans, A[i]);
    }

    cout << ans << endl;
  }

  return 0;
}