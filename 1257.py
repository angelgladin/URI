'''
Array Hash
URI Online Judge | 1257
https://www.urionlinejudge.com.br/judge/en/problems/view/1257
'''
def array_hash(ls):
	cl = 0
	tot = 0
	for l in ls:
		for i in range(len(l)):
			tot += (ord(l[i]) - 65) + cl + i
		cl += 1
	return tot

t = int(input())
for i in range(t):
	l = int(input())
	ls = []
	for j in range(l):
		ls.append(input())
	print(array_hash(ls))
	ls = []
