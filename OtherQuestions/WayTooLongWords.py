#http://codeforces.com/problemset/problem/71/A

if __name__ == '__main__':
	tc = int(raw_input())
	l = []
	for i in range(tc):
		word = raw_input()
		l.append(word)
	for word in l:
		if len(word) > 10:
			s = word[0]+str(len(word)-2)+word[len(word)-1]
			print s
		else:
			print word
