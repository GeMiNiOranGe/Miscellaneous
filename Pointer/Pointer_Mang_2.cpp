#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	// cap phat o nho toan bo con tro
	int **p = new int*[n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
	// tao ma tran don vi
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				p[i][j] = 1;
			}
			else {
				p[i][j] = 0;
			}
		}
	}
	// xuat ma tran don vi
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	// xoa o nho da cap phat cho con tro
	for (int i = 0; i < n; i++) {
		delete[] p[i];
	}
	delete[] p;

	system("pause");
	return 0;
}
