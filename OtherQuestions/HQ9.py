#http://codeforces.com/problemset/problem/133/A

if __name__ == '__main__':
	w = raw_input()
	if w.count('H') >= 1 or w.count('Q') >= 1 or w.count('9') >= 1:
		print "YES"
	else:
		print "NO"
