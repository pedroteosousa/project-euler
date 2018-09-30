#include <bits/stdc++.h>
using namespace std;

const int S = 1e8;
const int N = S+2;

bool is_prime[N];
bool r[N];

int main() {
	for (int i = 1; i < N; i++) {
		r[i] = true;
		if (i > 1) is_prime[i] = true;
	}
	for (int i = 2; i < N; i++) {
		for (int j = 2 * i; j < N; j += i) {
			is_prime[j] = false;
		}
	}
	for (int i = 1; i * i <= N; i++) {
		for (int j = i; j < N-1; j += i) {
			r[j] &= is_prime[i + j/i];
		}
	}
	long long resp = 0;
	for (int i = 1; i < N-1; i++) resp += (r[i] ? i : 0);
	cout << resp << endl;
}

