#http://codeforces.com/problemset/problem/158/A

if __name__ == '__main__':
	n, k = map(int, raw_input().split())
	l = map(int, raw_input().split())
	c = 0
	m = l[k-1]
	for idx, val in enumerate(l):
		if val < m or val == 0:
			break
		c += 1
	print c
