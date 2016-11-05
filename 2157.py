'''
Mirror Sequence
URI Online Judge | 2157
https://www.urionlinejudge.com.br/judge/en/problems/view/2157
'''
def minor_sequence(a, b):
	s_aux = ''
	for i in range(a, b+1):
		s_aux += str(i)
	return s_aux + s_aux[::-1]

t = int(input())
for x in range(t):
	a, b = map(int, input().split())
	print(minor_sequence(a, b))
