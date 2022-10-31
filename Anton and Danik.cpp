/*
  * author : Obito022
  * date: 10.30.2022
  * link: https://codeforces.com/problemset/problem/734/A
*/
 
#include <iostream>
using namespace std;
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n, a=0, d=0; cin >> n;
  string s; cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') a++;
    if (s[i] == 'D') d++;
  }
  if (a > d) cout << "Anton" << endl;
  if (a < d) cout << "Danik" << endl;
  if (a == d) cout << "Friendship" << endl;
 
  return 0;
}
