#http://codeforces.com/problemset/problem/116/A

if __name__ == '__main__':
	n = int(raw_input())
	cap = 0
	m = 0
	for i in range(n):
		a,b = map(int, raw_input().split())
		cap -= a
		cap += b
		m = max(m, cap)
	print m
