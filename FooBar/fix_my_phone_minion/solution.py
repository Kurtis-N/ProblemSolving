dict = {}
def knightMoves(x):
	if x == 1:
		return [6, 8]
	elif x == 2:
		return [7, 9]
	elif x == 3:
		return [4, 8]
	elif x == 4:
		return [3, 9, 0]
	elif x == 5:
		return []
	elif x == 6:
		return [1, 7, 0]
	elif x == 7:
		return [2, 6]
	elif x == 8:
		return [1, 3]
	elif x == 9:
		return [2, 4]
	else:
		return [4, 6]
	
def recurse(x, y, z, count):
	if count == z:
		#print x,y,z,count
		if x == y:
			return 1
		else:
			return 0
	if dict.get(str(x)+" "+str(y)+" "+str(z)+" "+str(count)) != None:
		return dict.get(str(x)+" "+str(y)+" "+str(z)+" "+str(count))
	list = knightMoves(x)
	moves = 0
	for l in list:
		moves += recurse(l, y, z, count+1)
	dict[str(x)+" "+str(y)+" "+str(z)+" "+str(count)] = moves
	return moves

def answer(x, y, z):
	#your code here
	if x == 5 or y == 5:
		return 0
	return recurse(x, y, z, 1)

if __name__ == '__main__':
	print answer(6,2,5)
	print answer(1,5,100)
	print answer(6,2,5)
