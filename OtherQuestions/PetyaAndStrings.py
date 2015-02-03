#http://codeforces.com/problemset/problem/112/A

if __name__ == '__main__':
	w1 = raw_input().lower()
	w2 = raw_input().lower()
	if w1 < w2:
		print "-1"
	elif w1 > w2:
		print "1"
	else:
		print "0"
