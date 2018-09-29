#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 100;
const ll MAX = 1000000000;

vector<ll> primes, valid;
bool v[N+1];

int main() {
	v[1] = true;
	for (ll i = 2; i <= N; i++) {
		if (v[i] == 0) {
			primes.push_back(i);
			for (ll j = i; j <= N; j += i)
				v[j] = true;
		}
	}
	valid.push_back(1ll);
	for (ll p : primes) {
		for (int i = 0; i < valid.size(); i++) {
			ll t = valid[i] * p;
			if (t <= MAX)
				valid.push_back(t);
		}
	}
	printf("%d\n", (int)valid.size());
}

