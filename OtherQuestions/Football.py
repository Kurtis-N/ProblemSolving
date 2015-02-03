#http://codeforces.com/problemset/problem/96/A

if __name__ == '__main__':
	l = raw_input()
	z = 0
	o = 0
	found = False
	for idx,val in enumerate(l):
		if val == '0':
			z += 1
			o = 0
		else:
			o += 1
			z = 0
		if z == 7 or o == 7:
			print "YES"
			found = True
			break
	if not found:
		print "NO"
