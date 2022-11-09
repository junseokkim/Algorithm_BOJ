#include <iostream>

using namespace std;

// 2439번 별찍기2
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			cout << ' ';
		}
		for (int k = 0; k < n-i+1; k++) {
			cout << '*';
		}
		cout << '\n';
	}
}