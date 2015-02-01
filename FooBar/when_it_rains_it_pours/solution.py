def answer(heights):
	if len(heights) == 1:
		return 0
	num = 0
	m = max(heights)
	mIndex = heights.index(m)
	currMax = 0
	for h in range(0, mIndex):
		if h == 0:
			currMax = heights[h]
		elif heights[h] > currMax:
			currMax = heights[h]
		else:
			num += currMax-heights[h]
	currMax = 0
	count = 0
	for h in reversed(heights):
		if count == len(heights)-mIndex-1:
			break
		elif h > currMax:
			currMax = h
		else:
			num += currMax-h
		count += 1
	return num

if __name__ == '__main__':
	heights = [1, 4, 2, 5, 1, 2, 3]
	print answer(heights)
	heights1 = [1, 2, 3, 2, 1]
	print answer(heights1)
