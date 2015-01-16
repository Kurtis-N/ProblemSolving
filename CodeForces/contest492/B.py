import fileinput

list = []

def solve(n, l):
#	if(not(0 in list)):
#		list.insert(0, 0)
#	if(not(l in list)):
#		list.extend(l)
	if(len(list) == 1):
		print max(list[0]-0.0, l-list[0])
		return
	list.sort()
	maxV = 0.0
	for idx, val in enumerate(list):
		#print idx, " ", val
		if(idx == 0):
			maxV = val-0.0
		else:
			if((val - list[idx-1])/2.0 > maxV):
				maxV = (val - list[idx-1])/2.0
	if(l - list[-1] > maxV):
	   maxV = l - list[-1]
	print str(maxV)

if __name__ == '__main__':
	n, l = map(int, raw_input().split())
	list = map(int, raw_input().split())
	solve(n, l)
