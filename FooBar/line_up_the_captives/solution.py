from itertools import permutations 

def satisfyLeft(x, l):
	count = 0
	for idx, i in enumerate(l):
		if idx == 0:
			count = 1
		elif l[idx-1]<i:
			count += 1
		else:
			break
	if count == x:
	 	return True
	return False
		
def satisfyRight(y, l):
	count = 0
	flag = True
	prev = -1
	for idx in reversed(l):
		if flag:
			count = 1
			flag = False
			prev = idx
		elif prev < idx:
			count += 1
			prev = idx
		else:
			break
	if count == y:
	 	return True
	return False

def answer(x, y, n):
	# your code here
	lis = []
	for i in range(1,n+1):
		lis.append(i)
	allPossible = list(permutations(lis, len(lis)))
	count = 0
	for l in allPossible:
		if satisfyLeft(x,l) and satisfyRight(y,l):
			count += 1
	return count

if __name__ == '__main__':
	print answer(2,2,3)
	print answer(1,2,6)
