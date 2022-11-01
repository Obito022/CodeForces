/*
  * author : Obito022
  * date   : 11.1.22
  * link   : https://codeforces.com/problemset/problem/467/A
3
1 2
2 3
3 4
*/
#include <iostream>
using namespace std;

int main() {
  int n, count=0;;
  cin >> n;
  while (n--) {
    int p, q;
    cin >> p >> q;
    int comp = q - p;
    if (comp >= 2)
      count++;
  }
  cout << count << endl;
  return 0;
}
