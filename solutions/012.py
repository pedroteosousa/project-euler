C = 500
N = 500000

sieve = [0] * N

def test(a, b):
	if sieve[a] * sieve[b] > C:
		print(a * b)
		exit()

for i in range(1, N):
	for j in range(i, N, i):
		sieve[j] += 1
	if i % 2:
		test(i, (i + 1) // 2)
	else:
		test(i // 2, i + 1)
