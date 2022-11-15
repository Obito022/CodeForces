/**
  *   author:  obito022
  *   created: 11.6.2022
  *   link: https://codeforces.com/problemset/problem/486/A
**/
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n, ans;
  scanf("%lld", &n);
  if (n % 2 == 0) 
    ans = n / 2;
  else 
    // -(n+1)/2 - formula
    ans = ((n + 1) / 2) * (-1);
  printf("%lld\n", ans);
  return 0;
}
