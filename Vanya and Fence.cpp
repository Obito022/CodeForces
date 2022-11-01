/*
  * author : Obito022
  * date   : 11.1.2022
  * link   : https://codeforces.com/problemset/problem/677/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, h, W=0;
  cin >> n >> h;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (a <= h) 
      W++;
    else
      W += 2;
  }
  cout << W <<  endl;
  return 0;
}
