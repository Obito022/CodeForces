"""
  * author : obito022
  * created : 12.17.2022
  * link : https://codeforces.com/problemset/problem/200/B
"""
from sys import stdin

Sum = 0
n = int(stdin.readline())
for _ in range(n):
  arr = list(map(int, stdin.readline().split()))
  for i in range(len(arr)):
    Sum += arr[i]
print(Sum/n)
