def solve(a,b):
	ans = 0
	x = 1
	while(True):
		if(x >= a):
			break
		if(a%x == b):
			ans += 1
		x += 1
	return ans

if __name__ == '__main__':
	a,b = map(long, raw_input().split())
	if b >= a:
		print "infinity"
	else:
		print solve(a, b)
