#http://codeforces.com/problemset/problem/119/A
from fractions import gcd
if __name__ == '__main__':
	a,b,n = map(int, raw_input().split())
	turn = True
	while n >= 0:
		if turn:
			n -= gcd(a, n)
		else:
			n -= gcd(b, n)
		turn = not turn
	if turn:
		print 0
	else:
		print 1
