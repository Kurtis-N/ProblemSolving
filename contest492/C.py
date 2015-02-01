import os, sys

list = []

def calcAvg(l):
	avg = 0.0
	for li in list:
		avg += li[0]
	return avg/l

def incrementLowest(r):
	low = sys.maxint
	spot = -1
	for idx,li in enumerate(list):
		if(li[0] == r):
			continue
		if(li[1] < low):
			low = li[1]
			spot = idx
	if(spot != -1):
		list[spot][0] += 1
		return list[spot][1]
	else:
		return 0

def solve(n, r, avg):
#	for li in list:
#		print li	
	l = len(list)
	currAvg = calcAvg(l)
#	print avg
	if(currAvg >= avg):
		print "0"
		return
	numExams = 0
	while(currAvg < avg):
		numExams += incrementLowest(r)
		currAvg = calcAvg(l)
	print numExams

if __name__ == '__main__':
	n, r, avg = map(int, raw_input().split())
	for x in range(0, n):
		li = map(int, raw_input().split())
		list.append(li)
	solve(n, r, avg)
