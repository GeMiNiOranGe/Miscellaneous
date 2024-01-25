#include <iostream>
using namespace std;
int main() {
	int d, m, y;
	cin >> d >> m >> y;
	if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1900) {
		cout << "NO";
	}
	else {
		int maxday;
		switch (m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			maxday = 31;
			break;
		case 4: case 6: case 9: case 11:
			maxday = 30;
			break;
		default:
			maxday = 28;
			if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
				maxday = 29;
			}
			break;
		}
		if (d <= maxday) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}