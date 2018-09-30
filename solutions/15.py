N = 20

dp = {}

def solve(n, m):
	if min(n, m) == 0:
		return 1
	if (n, m) in dp:
		return dp[(n, m)]
	dp[(n, m)] = solve(n, m-1) + solve(n-1, m)
	return dp[(n, m)]

print(solve(N, N))
