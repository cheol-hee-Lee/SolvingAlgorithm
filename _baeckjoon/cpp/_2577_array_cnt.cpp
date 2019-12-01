#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int* input = new int[3];
	int res;
	int cnt[10] = { 0, };

	for (int i = 0; i < 3; i++) {
		cin >> input[i];
	}
	res = input[0] * input[1] * input[2];
	while (true) {
		cnt[res % 10]++;
		res /= 10;

		if (res == 0) {
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << '\n';
	}


}
