if __name__ == '__main__':
	n,x = map(int, raw_input().split())
	list = []
	for i in range(0, n):
		l = map(int, raw_input().split())
		list.append(l)
	list.sort()
	currTime = 1
	allocatedTime = 0
	for l in list:
		#print "currTime",currTime,"allocatedTime",allocatedTime
		if currTime == l[0]:
			allocatedTime += l[1]-l[0]+1
			currTime = l[1]+1
		else:
			diff = l[0] - currTime
			diff /= x
			currTime += diff*x
			allocatedTime += l[0]-currTime
			allocatedTime += l[1]-l[0]+1
			currTime = l[1]+1
	print allocatedTime
