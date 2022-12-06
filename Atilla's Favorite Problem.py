"""
  * author : obito022
  * link : https://codeforces.com/problemset/problem/1760/B
  * created : 12.6.2022
"""
from sys import stdin 
from collections import OrderedDict

def readint():
  return int(stdin.readline())
def readstr():
  return stdin.readline()

alpha = "abcdefghijklmnopqrstuvwxyz"
for _ in range(readint()):
  n = readint()
  s = readstr()
  s = "".join(OrderedDict.fromkeys(s))
  x = []
  for i in range(len(s)):
    a = alpha.find(s[i]) + 1
    x.append(a)
  print(max(x))
