#http://codeforces.com/problemset/problem/282/A

if __name__ == '__main__':
	n = int(raw_input())
	x = 0
	for i in range(n):
		l = raw_input()
		x += l.count("++")
		x -= l.count("--")
	print x
