/**
  * author  : obito022 
  * created : Fri Feb  2 22:50:13 +06 2024
  * link    : https://github.com/Obito022/CodeForces
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  cin >> x;

  int i = 5, cnt = 0;
  while (x > 0) {
    if (i <= x) {
      x -= i;
      cnt++;
    } else {
      i--;
    }
  }

  cout << cnt << endl;

  return 0;
}
