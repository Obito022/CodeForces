/**
      author  :   obito022
      link    :   https://atcoder.jp/contests/dp/tasks/dp_b
      date    :   Thu Oct 12 16:06:14 +06 2023
**/

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k; cin >> n >> k;
  vector<int> h(n); for (auto &i : h) cin >> i;

  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  for (int x = 2; x < n; x++) {
    int cost = INF;
    for (int y = 1; y <= k; y++) {
      if (x - y >= 0) {
        cost = min(cost, dp[x - y] + abs(h[x] - h[x - y]));
      }
    }
    dp[x] = cost;
  }

  cout << dp[n - 1] << endl;

  return 0;
}
