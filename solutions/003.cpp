#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n = 600851475143;
	for (ll i = 2; i * i < n; i++)
		while (n % i == 0) n /= i;
	cout << n << endl;
}

