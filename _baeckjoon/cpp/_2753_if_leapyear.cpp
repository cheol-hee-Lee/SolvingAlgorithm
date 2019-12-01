#include <iostream>
#include <string>

using namespace std;

int main() {
	int year;
	int isLeap;

	cin >> year;

	// 범위
	if (year <= 0 || year >= 40001) {
		return -1;
	}

	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) {
		isLeap = 1;
	}
	else {
		isLeap = 0;
	}

	cout << isLeap << endl;

	return 0;
}
