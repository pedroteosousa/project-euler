#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 1000000000ll;

ll rev(ll a) {
	ll t = 0;
	while (a) {
		t *= 10;
		t += (a % 10);
		a /= 10;
	}
	return t;
}

ll isp(ll a) {
	return a == rev(a);
}

map<ll, int> m;

int main() {
	for (ll i = 2; i * i <= N; i++)
		for (ll j = 2; j * j * j <= N; j++) {
			ll a = i * i + j * j * j;
			if (isp(a))
				m[a]++;
		}
	ll resp = 0;
	for (auto a : m)
		if (a.second == 4) resp += a.first;
	cout << resp << endl;
}

