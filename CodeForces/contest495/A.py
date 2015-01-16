def solve(x):
	if x == 0:
		return 2
	if x == 1:
		return 7
	if x == 2:
		return 2
	if x == 3:
		return 3
	if x == 4:
		return 3
	if x == 5:
		return 4
	if x == 6:
		return 2
	if x == 7:
		return 5
	if x == 8:
		return 1
	else:
		return 2

if __name__ == '__main__':
	x = int(raw_input())
	y = 0
	if x > 10:
		y = (solve(x%10) * solve(x/10%10))
	else:
		y = (2 * solve(x%10))
	print y
