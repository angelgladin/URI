'''
Distance Between Two Points
URI Online Judge | 1400
https://www.urionlinejudge.com.br/judge/en/problems/view/1400
'''
from math import sqrt, pow


def distance_between_two_points(x1, y1, x2, y2):
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

print('%.4f' % distance_between_two_points(x1, y1, x2, y2))
