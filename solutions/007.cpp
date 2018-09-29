#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;

bool p[N];
vector<int> primes;

int main() {
	for (int i = 2; i < N; i++) {
		if (p[i] == false) {
			primes.push_back(i);
			for (int j = 2 * i; j < N; j += i)
				p[j] = true;
		}
	}
	cout << primes[10000] << endl;
}

