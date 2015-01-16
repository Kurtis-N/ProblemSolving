def calculateRows(x):
	if(x == 1):
		print "1"
	else:
		currNum = 1
		totalNum = 1
		rowNum = 1
		while(totalNum <= x):
			rowNum += 1
			currNum += rowNum
			totalNum += currNum
		print rowNum-1

if __name__ == '__main__':
	x = input()
	calculateRows(x)
