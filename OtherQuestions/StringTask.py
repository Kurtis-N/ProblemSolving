#http://codeforces.com/problemset/problem/118/A

if __name__ == '__main__':
	word = raw_input()
	vowels = ('a','e','i','o','u','y','A','E','I','O','U','Y')
	s = ""
	for l in word:
		if not(l in vowels):
			s += '.'+l.lower()
	print s
		
