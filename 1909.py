'''
Help Kiko
URI Online Judge | 1909
https://www.urionlinejudge.com.br/judge/en/problems/view/1909
'''
def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)

def lcm(a, b):
    return a * b // gcd(a, b)

def lowest_bounce_time_for_another_ball(t, l):
    #The other ball bounce time
    bounce_time = 0
    #Aux variable stands for 'saving' the lcm of all numbers
    aux = 1
    #Create a boolean list for marking the the bouncing time of all the balls
    balls_time = [False] * (int(1e5) + 1)
    #Getting lcm of all numbers
    for x in l:
        balls_time[x] = True
        aux = lcm(aux, x)

    if aux <= t:
        for x in range(2, t+1):
            if not t % x and not balls_time[x] and lcm(aux, x) == t:
                bounce_time = x
                break
        if bounce_time == 0:
            return 'impossivel'
        return str(bounce_time)
    else:
        return 'impossivel'
    
while True:
    t = int(input().split()[1])
    if t == 0:
        break
    l = [int(x) for x in input().split()]
    print(lowest_bounce_time_for_another_ball(t, l)) 
