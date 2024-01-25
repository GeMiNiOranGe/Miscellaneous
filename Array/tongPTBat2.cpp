//tim tong PTBat2 cua a, b, c co gia vi lon nhat va in PT do ra man hinh
#include  <iostream>
using namespace std;
struct PTBat2 {
	int a, b, c;
};
int main() {
	PTBat2 a[100];
	int n, tong[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].a >> a[i].b >> a[i].c;
		tong[i] = a[i].a + a[i].b + a[i].c;
	}
	int min = tong[0], vitri = 0;
	for (int i = 0; i < n; i++) {
		if (min > tong[i]) {
			min = tong[i];
			vitri = i; //tim vi tri tong nho nhat
		}
	}
	if (a[vitri].a == 1) {
		cout << "x^2" << "+" << a[vitri].b << "x+" << a[vitri].c << "=0";
	}
	else if (a[vitri].b == 0) {
		cout << a[vitri].a << "x^2" << "+" << a[vitri].c << "=0";
	}
	else if (a[vitri].c == 0) {
		cout << a[vitri].a << "x^2" << "+" << a[vitri].b << "x" << "=0";
	}
	//	cout << a[vitri].a << "x^2" << "+" << a[vitri].b << "x+" << a[vitri].c << "=0";
	system("pause");
	return 0;
}