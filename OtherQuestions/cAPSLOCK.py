#http://codeforces.com/problemset/problem/131/A
def allCaps(word):
	for i in word:
		if i.islower():
			return False
	return True
	
def firstLetterRestUpper(word):
	if word[0].isupper():
		return False
	else:
		for i in word[1:]:
			if i.islower():
				return False
	return True

if __name__ == '__main__':
	word = raw_input()
	if allCaps(word):
		print word.lower()
	elif firstLetterRestUpper(word):
		print word[0].upper() + word[1:].lower()
	else:
		print word

