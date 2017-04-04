# Enter your code here. Read input from STDIN. Print output to STDOUT

cc = []
aa = {}
ii = []

c = int(raw_input())

for i in range(0, c):
	current = raw_input()
	cc.append(current)

a = int(raw_input())

for i in range(0, a):
	dude, allegiance = raw_input().split(", ")
	aa[dude] = allegiance

j = int(raw_input())

for i in range(0, j):
	current = raw_input()
	ii.append(current)

cnt = 0

for i in cc:
	if not aa.has_key(i):
		cnt = cnt + 1
		
print "There are", cnt, "factions playing the game of thrones"
for i in ii:
	x = i
	while x in aa:
		x = aa[x]
	print x