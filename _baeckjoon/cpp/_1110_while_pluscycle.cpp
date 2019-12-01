#include <iostream>
using namespace std;

int main() {
	int N;
	int cycle = 0;
	int a, b, c, d;
	cin >> N;
	if (N < 0 || N > 99) {
		return -1;
	}

	d = N;
	while (true) {
		a = d / 10;
		b = d % 10;
		c = a + b;
		d = b * 10 + c % 10;
		cycle++;

		if (N == d) {
			break;
		}
	}

	cout << cycle << '\n';


}
