N = 1000000

col = {}
col[1] = 1

def solve(n):
	if n in col:
		return col[n]
	if n % 2:
		col[n] = solve(3 * n + 1) + 1
	else:
		col[n] = solve(n // 2) + 1
	return col[n]

for i in range(1, N+1):
	solve(i)

print(max(col, key=col.get))
