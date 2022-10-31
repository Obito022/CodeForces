/*
  * author : Obito022
  * date: 10.30.2022
  * link: https://codeforces.com/contest/935/problem/B
*/

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, x=0, y=0, coin=0; cin >> n;
  string S; cin >> S;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    if (S[i] == 'U') 
      y++;
    else  
      x++;
    if (x == y && S[i] == S[i+1])
      coin++;
  }
  cout << coin << endl;

  return 0;
}
