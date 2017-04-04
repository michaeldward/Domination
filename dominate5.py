x = raw_input()
end = ""
i = 0
j = 0
x = x + "1"
while (i < len(x) - 1):
	i = i + 1
	if (x[i] == x[j]):
		continue
	else:
		end = end + str(i - j)
		end = end + x[j]
		j = i
if (len(end) < len(x)):
	print "YES", end
else:
	print "NO"
