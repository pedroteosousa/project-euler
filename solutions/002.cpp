#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 4e6;

int main() {
	ll resp = 2, a = 2, b = 8;
	while (b <= N) {
		resp += b;
		swap(a, b);
		b = 4 * a + b;
	}
	printf("%lld\n", resp);
}

