'''
The Return of The King
URI Online Judge | 1808
https://www.urionlinejudge.com.br/judge/en/problems/view/1808
'''
from sys import stdin


def average_grades(s):
    aux = 0.0
    i = 0
    n = 0
    
    while i < len(s):
        if s[i] == '1' and i+1 < len(s) and s[i+1] == '0':
            aux += 10
            i += 2
            n += 1
        else:
            aux += int(s[i])
            i += 1
            n += 1
    return '%.2f' % round(aux/n, 2)

for x in stdin:
    x  = x[:-1]
    if not x:
        break
    print(average_grades(x))
