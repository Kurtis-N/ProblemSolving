def inc(y):
	ans = ""
	for i in y:
		if i == str(9):
			ans += "0"
		else:
			ans += str(int(i)+1)
	return ans

def shift(y):
	ans = ""
	ans = y[len(y)-1]
	ans += y[:-1]
	return ans
		
def answer(n,y):
	if len(y) == 1:
		return 0
	m = int(y)
	#for all possible increments - shift them all n times
	curr = y
	s = curr
	for x in range(0,n):
		s = shift(s)
		m = min(m, int(s))
	curr = inc(y)
	while(curr != y):
		m = min(m, int(curr))
		s = curr
		for x in range(0,n):
			s = shift(s)
			m = min(m, int(s))
		curr = inc(curr)
	if len(str(m)) != n:
		zeros = "0"*(n-len(str(m)))
		return zeros+str(m)
	return m

if __name__ == '__main__':
	n = int(raw_input())
	y = str(raw_input())
	print answer(n,y)
