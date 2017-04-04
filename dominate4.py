n = int(raw_input())

for i in range(0, n):
	am = True
	j = raw_input()
	a = j[0] + j[1]
	b = j[2] + j[3]
	c = j[4] + j[5]
	aa = int(a)
	if aa > 12 and aa < 24:
		am = False
	if aa is 13:
		a = "01"
	elif aa is 14:
		a = "02"
	elif aa is 15:
		a = "03"
	elif aa is 16:
		a = "04"
	elif aa is 17:
		a = "05"
	elif aa is 18:
		a = "06"
	elif aa is 19:
		a = "07"
	elif aa is 20:
		a = "08"
	elif aa is 21:
		a = "09"
	elif aa is 22:
		a = "10"
	elif aa is 23:
		a = "11"
	elif aa is 24 or aa is 0:
		a = "12"
	output = a + ":" + b + ":" + c
	if am:
		output = output + " AM"
	else:
		output = output + " PM"
	print output



