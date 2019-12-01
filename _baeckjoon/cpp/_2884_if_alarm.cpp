#include <iostream>
#include <string>

using namespace std;

int main() {
	// declaration
	int H;
	int M;
	int alarmH;
	int alarmM;

	// input
	cin >> H >> M;

	// scope
	if (H < 0 || H > 23 || M < 0 || M > 59) {
		return -1;
	}

	// algorithm
	if (M >= 45) {
		alarmH = H;
		alarmM = M - 45;
	}
	if (M < 45) {
		if (H == 0) {
			alarmH = (H - 1) + 24;
		}
		else {
			alarmH = H - 1;
		}
		alarmM = (M - 45) + 60;
	}

	// output
	cout << alarmH << " " << alarmM;

	return 0;
}
