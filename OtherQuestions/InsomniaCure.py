#http://codeforces.com/problemset/problem/148/A

if __name__ == '__main__':
	k = int(raw_input())
	l = int(raw_input())
	m = int(raw_input())
	n = int(raw_input())
	d = int(raw_input())
	count = 0
	for i in range(d+1):
		if i == 0:
			continue
		if i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0:
			count += 1
	print count
