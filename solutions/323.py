N = 32
T = 10000

resp = 0.0
for i in range(T):
	resp += (1.0 - ((1.0 - (0.5 ** i)) ** N))
print("%.10f" % resp)
