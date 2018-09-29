#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e6+1;

bool p[N];

int main() {
	ll sum = 0;
	for (int i = 2; i < N; i++) {
		if (p[i] == false) {
			sum += i;
			for (int j = 2 * i; j < N; j += i)
				p[j] = true;
		}
	}
	cout << sum << endl;
}

