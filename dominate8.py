def find_max(xx):
	mx = 0
	mxval = ""
	for i in xx:
		if xx[i] > mx:
			mx = xx[i]
			mxval = i
	return mxval

n = int(raw_input())
ww = []

for i in range(0, n):
	m = int(raw_input())
	w = []
	for j in range(0, m):
		w.append(raw_input())
	ww.append(w)
#print ww
www = []
for i in ww:
	xx = {}
	for w in i:
		if w not in xx:
			xx[w] = i.count(w)
	www.append(xx)
#print www
z = []
for i in www:
	done = False
	while len(i) > 0 and not done:
		x = find_max(i)
		del i[x]
		for j in www:
			if x in j:
				del j[x]
				print "deleted:", x
				if x in i:
					del i[x]
				break
			else:
				z.append(x)
				done = True
				break
	if done is False:
		z.append(-1)
count = 0
for i in z:
	if i == -1:
		st = "Track " + str(count) + " has no unique words"
		print st
	else:
		st = "Track " + str(count) + "'s best word is " + i
		print st
	count = count + 1
