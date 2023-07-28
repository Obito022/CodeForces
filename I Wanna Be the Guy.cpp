#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& X, vector<int>& Y, int n, int p, int q) {
  vector<int> chosen(n, false);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      if ((i + 1) == X[j]) {
        chosen[i] = true;
        break;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < q; j++) {
      if ((i + 1) == Y[j]) {
        chosen[i] = true;
        break;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (chosen[i] == false) {
      cout << "Oh, my keyboard!" << '\n';
      return;
    }
  }

  cout << "I become the guy." << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int p; cin >> p;
  vector<int> X(p);
  for (auto &a : X) {
    cin >> a;
  }

  int q; cin >> q;
  vector<int> Y(q);
  for (auto &b : Y) {
    cin >> b;
  }

  solve(X, Y, n, p, q);
}
