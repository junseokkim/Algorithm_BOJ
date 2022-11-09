#include <iostream>

using namespace std;

// 1157번 단어에서 가장 많은 알파벳 출력

int main() {
	int a[26] = { 0, };
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] < 97) {
			a[word[i] - 65]++;
		}
		else {
			a[word[i] - 97]++;
		}
	}
	int max = 0;
	int max_idx;
	for (int i = 0; i < 26; i++) {
		if (max < a[i]) {
			max = a[i];
			max_idx = i;
		}
	}
	int ck = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] == max) ck++;
	}
	if (ck == 1) {
		cout << (char)(65 + max_idx);
	}
	else cout << '?';

}