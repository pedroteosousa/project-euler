N = 1000

for a in range(N):
	for b in range(a+1, N-a+1):
		c = N - a - b
		if c > b and a * a + b * b == c * c:
			print(a, b, c)
			print(a * b * c)
			exit()
