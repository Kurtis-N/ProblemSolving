def formatAnswer(x, y, z):
	ans = ""
	if(x < 10):
		ans += "0"+str(x)+"/"
	else:
		ans += str(x)+"/"
	if(y < 10):
		ans += "0"+str(y)+"/"
	else:
		ans += str(y)+"/"
	if(z < 10):
		ans += "0"+str(z)
	else:
		ans += str(z)
	return ans

def answer(x, y, z):
	#month/day/year - wtf
	#we can assume at least one valid representation of a date can be constructed from the cards
	list = [x, y, z]
	list.sort()
		
	#all the same value return any order, readme says there will always be a possible date construction so these values will have to be less than 13
	if(x == y and y == z):
		return formatAnswer(x, y, z)
	
	#if two lowest numbers are the same
	if(list[0] == list[1]):
		#and less than 13
		if(list[0] < 13 and list[2] < 13):
			return "Ambiguous"
		if(list[0] < 13):
			return formatAnswer(list[0], list[1], list[2])
		return formatAnswer(list[2], list[1], list[0])
	
	#if two highest numbers are the same
	if(list[1] == list[2]):
		#and less than 13
		if(list[2] < 13):
			return "Ambiguous"
		return formatAnswer(list[0], list[1], list[2])
	
	#if all different values, only need to check first two
	if(list[0] < 13 and list[1] < 13):
		return "Ambiguous."
	return formatAnswer(list[0], list[1], list[2])



if __name__ == '__main__':
	x = input()
	y = input()
	z = input()
	print answer(x, y, z)
