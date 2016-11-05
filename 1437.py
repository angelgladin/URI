'''
Turn Left!
URI 1437
https://www.urionlinejudge.com.br/judge/en/problems/view/1437
'''

def end_position(s):
    pos = 0
    for c in s:
        if c == 'D':
            pos += 1
        elif c == 'E':
            pos -= 1

    pos = pos % 4
    if pos == 0:
        return 'N'
    elif pos == 1:
        return 'L'
    elif pos == 2:
        return 'S'
    else:
        return 'O'

while True:
    n = int(input())
    if n == 0:
        break
    s = input()
    print(end_position(s))
