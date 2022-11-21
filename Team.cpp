/**
  * author : obito022
  * created : 11.21.2022
  * link : https://codeforces.com/problemset/problem/231/A
**/
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, count=0;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) >= 2) 
      count++;
  }
  cout << count << "\n";

  return 0;
}
