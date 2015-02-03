#http://codeforces.com/problemset/problem/231/A

if __name__ == '__main__':
	x = int(raw_input())
	c = 0
	for i in range(x):
		l = map(int, raw_input().split())
		if l.count(1) >= 2:
			c += 1
	print c
