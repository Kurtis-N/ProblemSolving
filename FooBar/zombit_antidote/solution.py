def removeOverlaps(x, list):
#	print "x: ", x
#	print "list: ", list
	toReturn = []
	for l in list:
		flag = True
		print "l: ", l
		if(x[0] == l[1] or l[0] == x[1]):
			print "adding: ", l
			toReturn.append(l)
			continue
		if(x[0] == l[0] or x[1] == l[1]):
			print "here"
			flag = False
		if(x[0] >= l[0] and x[0] < l[1]):
			print "here1"
			flag = False
		if(x[1] > l[0] and x[1] <= l[1]):
			print "here2"
			flag = False
		if(l[0] >= x[0] and l[0] < x[1]):
			print "here3"
			flag = False
		if(l[1] > x[0] and l[1] <= x[1]):
			print "here4"
			flag = False
		if(flag):
		 	print "adding: ", l
			toReturn.append(l)
	return toReturn

def shortestAppt(list):
	print "list: ", list
	low = list[0]
	for l in list:
		if(l[1] < low[1]):
			low = l
	return low

def answer(meetings):
	if(len(meetings) == 1):
		return 1
	meetings.sort()
	numMeetings = 0
	prev = -1
	list = meetings
	print "starting.."
	while(list):
		min = shortestAppt(list)
		print "min: ", min
		list = removeOverlaps(min, list)
		print "new list: ", list
		numMeetings += 1
		print list
	return numMeetings
	 
if __name__ == '__main__':
	q = [[0, 1], [1, 2], [2, 3], [3, 5], [4, 5], [0, 1]]
	p = [[0, 1000000], [42, 43], [0, 1000000], [42, 43]]
	c = [[0, 1000000]]
#	print p
#	print answer(q)
#	print q
#	print answer(p)
	print answer(c)
