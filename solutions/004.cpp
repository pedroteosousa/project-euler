#include <bits/stdc++.h>
using namespace std;

const int N = 1000;

bool is_palindrome(int v) {
	vector<int> g;
	while (v) {
		g.push_back(v % 10);
		v /= 10;
	}
	int n = g.size();
	for (int i = 0; i < n; i++) {
		if (g[i] != g[n - i - 1]) return false;
	}
	return true;
}

int main() {
	int resp = 0;
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < N; j++)
			if (is_palindrome(i * j))
				resp = max(resp, i * j);
	cout << resp << endl;
}

