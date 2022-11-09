#include <iostream>

using namespace std;

// 10871번 X보다 작은 수
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, a;
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> a;
		if (a < x) cout << a << " ";
	}
}