#include <iostream>
#include <string>

using namespace std;

// 2675�� ���ڿ� �ݺ�
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		string a;
		cin >> m >> a;
		for (int j = 0; j < a.length(); j++) {
			for (int k = 0; k < m; k++) {
				cout << a[j];
			}
		}
		cout << endl;
	}
	return 0;
}