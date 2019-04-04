def sum(i):
	if i==0:
		return 0
	return i + sum(i-1)
i=int(input())
print(sum(i))