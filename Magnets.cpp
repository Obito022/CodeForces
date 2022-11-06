/*
  * author  : obito022
  * created : 11.6.2022
  * link    : https://codeforces.com/problemset/problem/344/A
*/
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  int n, count=0;
  cin >> n;
  string arr[n]; 
  for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 1; i <= n; i++) {
    if (arr[i-1] != arr[i])
      count++;
  }
  cout << count << endl;
  return 0;
}
