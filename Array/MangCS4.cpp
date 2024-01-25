#include <iostream>
using namespace std;
int main() {
	int a[100][100], b[10000], d, c, n = 0;
	cin >> d >> c;
	//	nhap ma tran a
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			b[n++] = a[i][j];
		}
	}
	// sap xep mang b
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	// nhap ma tran a zic zac
	int k = 0;
	for (int i = 0; i < d; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < c; j++) {
				a[i][j] = b[k++];
			}
		}
		else {
			for (int j = c - 1; j >= 0; j--) {
				a[i][j] = b[k++];
			}
		}
	}
	//	xuat ma tran a
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}