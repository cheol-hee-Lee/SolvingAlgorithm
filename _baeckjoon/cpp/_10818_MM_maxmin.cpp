#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int max, min;
	int a;

	for (int i = 0; i < T; i++) {
		cin >> a;
		if (i == 0) {
			max = min = a;
		}
		max = (a > max) ? a : max;
		min = (a < min) ? a : min;
	}


	cout << min << " " << max;
}
