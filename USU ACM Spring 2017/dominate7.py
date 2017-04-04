n, k = map(int, raw_input().split(' '))

kk = map(int, raw_input().split(' '))

count = 0
if (k > 0):
	for x in kk:
		for y in kk:
			if (x - y) == k:
				count = count + 1
else:
	for x in kk:
		count = count + kk.count(x) - 1
print count
