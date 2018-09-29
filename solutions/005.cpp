#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 20;

bool p[N+1];
int am[N];
vector< pair<int, int> > primes;

int main() {
	for (int i = 2; i <= N; i++) {
		if (p[i] == false) {
			primes.push_back({i, i});
			for (int j = 2 * i; j <= N; j += i)
				p[j] = true;
		}
	}
	for (int i = 4; i <= N; i++) {
		for (int j = 0; j < primes.size(); j++) {
			int z = i;
			if (z % primes[j].second == 0) {
				z /= primes[j].second;
				while (z % primes[j].first == 0) {
					z /= primes[j].first;
					primes[j].second *= primes[j].first;
				}
			}
		}
	}
	ll resp = 1;
	for (int j = 0; j < primes.size(); j++) {
		resp *= primes[j].second;
	}
	cout << resp << endl;
}

