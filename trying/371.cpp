#include <bits/stdc++.h>
using namespace std;

const int Z = 100;
const int G = 500;
const int N = 200;

const long double p = 0.001;

long double dp[N][Z][G][2];
long double pp[N];

int main() {
	dp[0][0][0][0] = 1.0;
	for (int n = 1; n < N; n++) {
		for (int z = 0; z < Z; z++)
			for (int g = 0; g < G; g++)
				for (int f = 0; f < 2; f++) {
					if (z > 0) dp[n][z][g][f] += dp[n-1][z-1][g][f] * p;
					if (f > 0) dp[n][z][g][f] += dp[n-1][z][g][f-1] * p;
					if (g > 0) dp[n][z][g][f] += dp[n-1][z][g-1][f] * ((long double)(2 * G - 2 * g) / (long double)(2 * G));
					dp[n][z][g][f] += dp[n-1][z][g][f] * ((long double)(g) / (long double)(2 * G));
					pp[n] += dp[n][z][g][f];
				}
	}

	long double resp = 0.0;
	long double sum = 1.0;
	long double test = 0.0;
	for (int i = 1; i < N; i++) {
		//printf("pp[%d] = %Lf\n", i, pp[i]);
		pp[i] = sum * (1.0 - pp[i]);
		test += pp[i];
		sum -= pp[i];
		printf("pp[%d] = %Lf\n", i, pp[i]);
		resp += (long double)i * pp[i];
	}
	cout << test << endl;
	cout << sum << endl;
	printf("%.8Lf\n", resp);
}

