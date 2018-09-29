#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 13;

vector<int> digits;

int main() {
	char c;
	while (scanf(" %c", &c) != EOF) {
		if (c >= '0' && c <= '9')
			digits.push_back(c - '0');
	}
	ll resp = 0;
	for (int i = N-1; i < digits.size(); i++) {
		ll temp = 1ll;
		for (int j = 0; j < N; j++) {
			temp *= digits[i-j];
		}
		resp = max(resp, temp);
	}
	cout << resp << endl;
}

