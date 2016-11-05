'''
Square Root of 10
URI Online Judge | 2161
https://www.urionlinejudge.com.br/judge/en/problems/view/2161
'''
def square_root_of_ten(n):
	f = 3.00
	if n == 0:
		return f
	return f + square_root_of_ten_aux(n)

def square_root_of_ten_aux(n):
	if n == 0:
		return 0
	d = 6 + square_root_of_ten_aux(n-1)
	return (1/d)

a = int(input())
print('%.10f' %square_root_of_ten(a))
