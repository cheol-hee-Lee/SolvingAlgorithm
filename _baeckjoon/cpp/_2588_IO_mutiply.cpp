#include <iostream>

using namespace std;

int main() {
	int a, b;
	int arrA[3];
	int arrB[3];
	int answer[4];

	cin >> a >> b;

	if (a <= 99 || a >= 1000 || b <= 99 || b >= 1000) {
		return -1;
	}

	arrA[0] = a / 100;
	arrA[1] = (a - arrA[0] * 100) / 10;
	arrA[2] = a - arrA[0] * 100 - arrA[1] * 10;

	arrB[0] = b / 100;
	arrB[1] = (b - arrB[0] * 100) / 10;
	arrB[2] = b - arrB[0] * 100 - arrB[1] * 10;

	answer[0] = a * arrB[2];
	answer[1] = a * arrB[1];
	answer[2] = a * arrB[0];
	answer[3] = answer[0] + answer[1] * 10 + answer[2] * 100;


	cout << answer[0] << endl;
	cout << answer[1] << endl;
	cout << answer[2] << endl;
	cout << answer[3] << endl;

	return 0;
}
