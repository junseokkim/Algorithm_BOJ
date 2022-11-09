#include <iostream>
#include <math.h>

using namespace std;

// 1929번 소수 구하기 --> 에라토스테네스의 체와 endl 대신 '\n' 이용(안쓰면 시간 초과)

int main() {
	int M, N;
	int rt;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		rt = sqrt(i);
		if (rt == 1 && i != 1) {	//2,3인 경우
			cout << i << '\n';
			continue;
		}
		if (i % 2) {	//홀수일 경우
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