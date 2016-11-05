"""
1980
Shuffling
https://www.urionlinejudge.com.br/judge/en/problems/view/1980
"""
from sys import stdin
import math


def anagram(s):
    return math.factorial(len(s))

for x in stdin:
    s = x.split()[0]
    if len(s) == 0 or s == '0':
        break
    print(anagram(s))
