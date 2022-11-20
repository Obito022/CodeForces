/**
  * author : obito022
  * created : 11.20.2022
  * link: https://codeforces.com/problemset/problem/4/A
**/
#include <iostream>
using namespace std;
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int w;
  cin >> w;
  if (w == 2) {
    cout << "NO" << endl;
  }
  else if (w % 2 == 0) {
      cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
 
  return 0;
}
