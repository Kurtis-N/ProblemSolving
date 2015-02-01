if __name__ == '__main__':
	dict = {}
	n,m = map(int, raw_input().split())
	for i in range(0,m):
		one,two = map(str, raw_input().split())
		if len(two) < len(one):
			dict[one] = two
		else:
		 	dict[one] = one
	s = ""
	sentence = map(str, raw_input().split())
	for word in sentence:
		s += dict.get(word)
		s += " "
	s = s[:-1]
	print s
