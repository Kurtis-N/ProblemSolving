#http://codeforces.com/problemset/problem/160/A

if __name__ == '__main__':
	n = int(raw_input())
	l = map(int, raw_input().split())
	l.sort()
	s1 = 0
	s2 = 0
	count = 0
	while(True):
		if s1 > s2:
			break
		s1 += l[-1]
		del l[-1]
		s2 = sum(l)
		count += 1
	print count 
