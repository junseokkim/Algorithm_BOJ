#include <iostream>

using namespace std;

// 1330번 두 수 비교하기
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b) cout << ">";
	else if (a == b) cout << "==";
	else cout << "<";

	return 0;
}
