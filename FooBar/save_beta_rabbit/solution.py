dict = {}
def recurse(food, grid, x, y):
	#update food
	#food -= grid[x][y]
	if food < 0:
		return 2147483648
	#at the end
	if x == (len(grid)-1) and y == (len(grid)-1):
		return food
	#check if been here before
	elif dict.get(str(x)+" "+str(y)+" "+str(food)) != None:
		return dict.get(str(x)+" "+str(y)+" "+str(food))
	#cant move right
	elif x == len(grid)-1:
		return recurse(food-grid[x][y+1], grid, x, y+1)
	#cant move down
	elif y == len(grid)-1:
		return recurse(food-grid[x+1][y], grid, x+1, y)
	else:
		val = min(recurse(food-grid[x+1][y], grid, x+1, y), recurse(food-grid[x][y+1], grid, x, y+1))
		dict[str(x)+" "+str(y)+" "+str(food)] = val;
		return val

def answer(food, grid):
	#your code here
	#base cases
	ans = recurse(food, grid, 0, 0)
	if ans == 2147483648:
		return -1
	return ans
		

if __name__ == '__main__':
	#print answer(7, [[0, 2, 5], [1, 1, 3], [2, 1, 1]])
	#print answer(0, [[0, 2, 5], [1, 1, 3], [2, 1, 1]])
	print answer(12, [[0, 2, 5], [1, 1, 3], [2, 1, 1]])
	print answer(12, [[0, 2, 5], [1, 1, 3], [2, 1, 1]])
