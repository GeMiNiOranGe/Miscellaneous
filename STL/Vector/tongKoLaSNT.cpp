//xuat tong cua nhung so ko la SNT trong 1 so, vd: 67 xuat ra tong la 6
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool kiemTraSNT(int n);

int main() {
	int n, x;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		//if (kiemTraSNT(v[i]))
		if (kiemTraSNT(v[i])) {
			int tong = 0;
			for (; v[i] > 0;) {
				int r = v[i] % 10;
				if (!kiemTraSNT(r)) {
					tong += r;	// r ko la SNT thi cong vao tong
				}
				v[i] /= 10;
			}
			cout << tong << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
	system("pause");
	return 0;
}

bool kiemTraSNT(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
