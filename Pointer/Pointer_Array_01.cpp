#include <iostream>

using namespace std;

void kiemTraDoiXung(int * a, int n);

int main() {
	/*	int a = 5, c[5] = { 0,1,2,3,4 };
	int *b = &a;
	cout << c << endl;			// tuong duong &c[0]
	cout << c + 1 << endl;		// tuong duong &c[1]
	cout << *(c + 1) << endl;	// tuong duong c[1]
	cout << &a << endl;			// vi tri o nho &a
	cout << a << endl;			// gia tri a
	cout << *b << endl;			// gia tri a
	cout << b << endl;			// vi tri o nho &a
	cout << &b << endl;*/		// vi tri o nho &b
	int n, *p;
	cin >> n;
	p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	kiemTraDoiXung(p, n);
	delete[] p;

	system("pause");
	return 0;
}

void kiemTraDoiXung(int * a, int n) {
	bool dx = true;
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - i - 1]) {
			if (dx) {
				dx = false;
				cout << "mang khong doi xung" << endl;
			}
			cout << a[i] << " " << a[n - i - 1] << endl;
		}
	}
	if (dx) {
		cout << "mang doi xung" << endl;
	}
}
