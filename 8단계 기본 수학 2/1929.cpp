#include <iostream>
#include <math.h>

using namespace std;

// 1929�� �Ҽ� ���ϱ� --> �����佺�׳׽��� ü�� endl ��� '\n' �̿�(�Ⱦ��� �ð� �ʰ�)

int main() {
	int M, N;
	int rt;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		rt = sqrt(i);
		if (rt == 1 && i != 1) {	//2,3�� ���
			cout << i << '\n';
			continue;
		}
		if (i % 2) {	//Ȧ���� ���
			for (int j = 2; j <= rt; j++) {
				if (!(i % j))
					break;
				if (j == rt) {
					cout << i << '\n';
				}
			}
		}
	}
}