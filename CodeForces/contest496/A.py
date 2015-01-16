def calculate(x, heights):
	if len(heights) == 3:
		return heights[2]-heights[0]
	m = heights[2]-heights[0]
	i = 1
	for idx,h in enumerate(heights):
		if idx == 0 or idx == 1:
			continue
		#elif idx == len(heights)-1:
		#	continue
		elif h - heights[idx-2] < m:
			m = h-heights[idx-2]
			i = idx-1
	del heights[i]
	d = heights[1]- heights[0]
	for idx,h in enumerate(heights):
		if idx == 0:
			continue
		elif h - heights[idx-1] > d:
			d = h-heights[idx-1]
	return d

if __name__ == '__main__':
	x = int(raw_input())
	heights = map(int, raw_input().split())
	print calculate(x, heights)
