t = int(raw_input())

def scenario():
	n, c, m = map(int, raw_input().split(' '))
	totes = 0
	initial = n / c #5
	#print "initial:", initial
	free = initial / m #2
	#print "free:", free
	#leftover = initial % m #0
	#print "leftover:", leftover
	totes = initial + free #7
	#print "totes:", totes
	#xx = leftover + free #2
	#print "xx:", xx
	while (free >= m):
		#print "in loop---"
		free = free / m
		#print "free:", free
		#leftover = xx % m
		#print "leftover:", leftover
		totes = totes + free
		#print "totes:", totes
		#xx = leftover + free
		#print "xx:", xx
	print totes

for i in range(0, t):
	scenario()


