'''
Bingo!
URI Online Judge | 1136
https://www.urionlinejudge.com.br/judge/en/problems/view/1136
'''
def call_every_number(n, b, l):
    s = set()
    for i in range(b):
        for j in range(i+1, b):
            s.add(abs(l[i] - l[j]))

    for i in range(1, n+1):
        if not i in s:
            return 'N'
    return 'Y'

while True:
    n, b = map(int, input().split())
    if n == 0 and b == 0:
        break
    l = [int(x) for x in input().split()]
    print(call_every_number(n, b, l))
