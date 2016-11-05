'''
Paula's Mathematic Game
URI Online Judge | 1192
https://www.urionlinejudge.com.br/judge/en/problems/view/1192
'''

def obtained_number(s):
    a, b = int(s[0]), int(s[2])
    c = s[1]
    if a == b:
        return a * b
    if c.isupper():
        return b - a
    else:
        return a + b

t = int(input())
for _ in range(t):
    s = input()
    print(obtained_number(s))
