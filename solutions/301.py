N = 30

f = [(1, 1)]

for i in range(N - 1):
	x, y = f[i]
	f.append((y, y + x))
	if (i + 2 == N):
		print(2*y + x)
