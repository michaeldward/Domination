wl = int(raw_input())

ns = int(raw_input())

snacks = {}

for i in range(0, ns):
	snack, weight = raw_input().split(' ')
	weight = int(weight)
	snacks[snack] = weight
snacksreverse = {}
for i in snacks:
	snacksreverse[snacks[i]] = i
ni = int(raw_input())
for i in range(0, ni):
	snack = raw_input()
	weight = snacks[snack]
	nw = wl - weight
	if nw in snacksreverse:
		print snacksreverse[nw]
	else:
		print "There is no matching snack Joe"