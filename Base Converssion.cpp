/**
    * author: obito022
    * created: 2.25.2023   9:15pm
    * link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
**/

#include <iostream>
using namespace std;

// A decimal integer can be converted to binary by dividing it by 2.
//Take the quotient, and keep dividing it by 2, until you reach zero.
// Each time you perform this division, take note of the remainder. 
// Now reverse the remainders list, and you get the number in binary form

void DecimalToBinary(int n) {
  if (n == 0) {
    return;
  } else {
    DecimalToBinary(n/2);
    cout << n % 2;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    DecimalToBinary(n);
    cout << endl;
  }

  return 0;
}
