N = 10000

sieve = [0] * N
resp = 0

def test(n):
	global resp
	if n < N and sieve[n] < N and n != sieve[n] and n == sieve[sieve[n]]:
		resp += n

for i in range(1, N):
	for j in range(2 * i, N, i):
		sieve[j] += i
	test(i)

print(resp)
