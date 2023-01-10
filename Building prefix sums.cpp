#include <iostream>
#include <vector>
using namespace std;

void findPrefixSums(vector<int>& a) {
  int n = a.size();
  vector<int> prefixSums(n + 1, 0);
  for (int i = 0; i < n; i++) 
    prefixSums[i + 1] = prefixSums[i] + a[i];
  
  for (int i = 0; i < n+1; i++) 
    cout << prefixSums[i] << ' ';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr[i] = a;
  }
  findPrefixSums(arr);
  cout << '\n';

  return 0;  
}
