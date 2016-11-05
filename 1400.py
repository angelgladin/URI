'''
Counting Game
URI Online Judge | 1400
https://www.urionlinejudge.com.br/judge/en/problems/view/1400
'''

def num_sequence(n):
    ascending = True
    aux = 0
    
    while True:    
        if aux == 1:
            ascending = True
        elif aux == n:
            ascending = False

        if ascending:
            aux += 1
        else:
            aux -= 1

        yield aux

def clap_time(n, m, k):
    p_id_generator = num_sequence(n)
    p_id = 0
    claps = 0

    i = 1
    while True:
        p_id = p_id_generator.__next__()
        
        if p_id == m:
            if i % 7 == 0 or '7' in str(i):
                claps += 1
            if claps == k:
                return i
        i += 1

    return -1

while True:
    n, m, k = map(int, input().split())
    if n == 0 and m == 0 and k == 0:
        break
    print(clap_time(n, m, k))
