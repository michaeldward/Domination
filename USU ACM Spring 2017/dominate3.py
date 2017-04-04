w, r = map(float, raw_input().split(' '))

total = 0
for i in range(0, int(w)):
	week = map(int, raw_input().split(' '))
	wkdays = 0
	hrs = 0.0
	for j in range(0, 5):
		wkdays = wkdays + week[j]
	if (wkdays > 40):
		hrs = 40 + ((wkdays - 40) * 1.5)
	else:
		hrs = hrs + wkdays
	hrs = hrs + (1.5 *(week[5]))
	hrs = hrs + (1.5 *(week[6]))
	xx = hrs * r * 100
	xx = round(xx)
	xx = xx / 100
	total = total + xx

print "%.2f" % total