'''
Different Digits
URI Online Judge | 1285
https://www.urionlinejudge.com.br/judge/en/problems/view/1285
'''
from sys import stdin


def lucky_numbers(a, b):
    c = 0
    for i in range(a, b+1):
        sn = str(i)
        s = {int(x) for x in sn}
        if len(sn) == len(s):
            c += 1
    return c

for x in stdin:
    a, b = map(int, x.split())
    print(str(lucky_numbers(a, b)))
