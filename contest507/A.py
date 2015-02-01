if __name__ == '__main__':
	n,k = map(int, raw_input().split())
	list = map(int, raw_input().split())
	count = 0	
	idices = []
	while k > 0 and list:	
		#get lowest
		low = list[0]
		i = 0
		#print list
		for idx,val in enumerate(list):
			if val == -1:
				continue
			if val < low:
				low = val
				i = idx
		if low == -1:
			break
		#print "low,i",low, i
		if k - low >= 0:
		 	idices.append(i+1)
		 	list[i] = -1
		 	count += 1
		 	k = k-low
		else:
		 	break
	print count	
	if idices:
		print idices
