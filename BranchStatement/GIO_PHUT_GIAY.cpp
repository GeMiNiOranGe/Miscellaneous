#include <iostream>
using namespace std;
int main() {
	int h, m, s;
	cin >> h >> m >> s;
	if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		s++;
		if (s > 59) {
			s = 0;
			m++;
		}
		if (m > 59) {
			m = 0;
			h++;
		}
		if (h == 24) {
			h = 0;
		}
		cout << h << ":" << m << ":" << s << endl;
	}
	system("pause");
	return 0;
}