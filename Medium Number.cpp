/** 
  * author : obito022
  * crated :  11.25.2022
  * link : https://codeforces.com/contest/1760/problem/A
**/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int arr[3];
    int a, b, c;
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr+3);
    cout << arr[1] << endl;
  }

  return 0;
}
