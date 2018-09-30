#include <bits/stdc++.h>
using namespace std;

const int N = 1000;

int rad[N];

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	for (int i = 0; i < N; i++) rad[i] = 1;
	for (int i = 2; i < N; i++) {
		if (rad[i] == 1) for (int j = i; j < N; j += i) {
			rad[j] *= i;
		}
	}
	int resp = 0;
	for (int c = 0; c < N; c++) {
		for (int a = 0; a < c; a++) {
			int b = c - a;
			if (a >= b) break;
			if (gcd(a, b) == 1 && gcd(a, c) == 1 && gcd(b, c) == 1 && rad[a] * rad[b] * rad[c] < c) {
				resp += 1;
				cout << c << endl;
				break;
			}
		}
	}
	cout << resp << endl;
}

