#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ap_sum(ll n) {
	return (n * (n + 1)) / 2;
}

ll get_sum(ll mx, ll div) {
	return ap_sum(mx / div) * div;
}

const int N = 999;

int main() {
	printf("%lld\n", get_sum(N, 3) + get_sum(N, 5) - get_sum(N, 15));
    return 0;
}

