from math import factorial as f

N = 100

resp = 0
for c in str(f(N)):
	resp += int(c)
print(resp)
