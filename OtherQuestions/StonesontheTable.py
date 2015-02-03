#http://codeforces.com/problemset/problem/266/A

if __name__ == '__main__':
	x = raw_input()
	w = raw_input()
	prev = w[0]
	s = ""
	c = 0
	for idx, val in enumerate(w):
		if idx == 0:
			continue
		if val == prev:
			prev = val
			c += 1
		else:
			prev = val
	print c
