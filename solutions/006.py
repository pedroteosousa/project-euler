N = 100

def squares_sum(n):
	return (n * (n + 1) * (2 * n + 1)) / 6

def sum_squared(n):
	return ((n * (n + 1)) / 2) ** 2

print(sum_squared(N) - squares_sum(N)) 
