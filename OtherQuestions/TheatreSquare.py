#http://codeforces.com/problemset/problem/1/A

if __name__ == '__main__':
	n,m,a = map(int, raw_input().split())
	rows = n/a
	if n%a != 0:
		rows +=1
	cols = m/a
	if m%a != 0:
		cols +=1
	print rows*cols
