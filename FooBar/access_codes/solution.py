def answer(x):
	dict = {}
	numCodes = 0
	for word in x:
		#print dict.get(word)
		#print (word[::-1])
		#if(dict.get(word) == None and dict.get(word[::-1]) == None):
		print ''.join(reversed(word))
		if(dict.get(word) == None and dict.get(''.join(reversed(word))) == None):
			dict[word] = True
			numCodes += 1
	return numCodes

if __name__ == '__main__':
	#list = map(str, raw_input().split())
	list = ["x", "y", "xy", "yy", "", "yx"]
	#["foo", "bar", "oof", "bar"];
	print list
	print answer(list)
