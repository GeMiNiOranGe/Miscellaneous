/*Nhap:
Dong 1 : nhap vi tri can them va gia tri them (co gia tri <= 100)
Dong 2 : nhap vao 1 day so (day so co toi da 100 phan tu)
Xuat :
	Mang sau khi them
Luu y: mang duoc danh chi so bat dau tu 0
vd
input :
	2 5
	1 2 3 4
output :
	1 2 5 3 4*/
#include <iostream>
using namespace std;
int main() {
	int a[100], vitri, giatri, n = 0;
	cin >> vitri >> giatri;
	while (cin >> a[n]) {
		n++;
	}
	n++;
	//	co 2 cach viet for tai day
	//	for (int i = n - 1; i > vitri; i--) //cach 1
	for (int i = n; i >= vitri; i--) //cach 2
	{
		//		a[i] = a[i - 1]; //theo 1
		a[i + 1] = a[i]; //theo 2
	}
	a[vitri] = giatri;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	system("pause");
	return 0;
}