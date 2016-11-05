'''
Sum of Two Squares
URI Online Judge | 1558
https://www.urionlinejudge.com.br/judge/en/problems/view/1558
'''
from sys import stdin


def number_by_sum_of_two_integer_squares():
    LIMIT = 10000
    l = []
    l_bool = [False] * (LIMIT+1)
    c, a = 0, 0

    while a < LIMIT:
        a = c * c
        l.append(a)
        c += 1

    for i in range(len(l)):
        for j in range(i, len(l)):
            s = l[i] + l[j]
            if s <= LIMIT:
                l_bool[s] = True
    return l_bool

l_bool = number_by_sum_of_two_integer_squares()

for x in stdin:
    n = int(x)
    print('YES' if n >= 0 and l_bool[n] == True else 'NO')
