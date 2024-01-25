#include <iostream>	// cho cout, cin và fixed
#include <cmath>
#include <iomanip>	// cho xuat so thap phan cua cout
//#include <stdio.h>	// cho xuat cua printf

using namespace std;

struct soPhuc {
	float a, b;
};

istream & operator>>(istream & is, soPhuc & sp);
void xuatSoPhuc(soPhuc sp);
float moDun(soPhuc a);
soPhuc tinhTong(soPhuc sp1, soPhuc sp2);
soPhuc tinhHieu(soPhuc sp1, soPhuc sp2);

int main() {
	soPhuc a, *p = new soPhuc[100];
	int n = 0;
	for (; cin >> a; n++) {
		p[n] = a;
	}
	for (int i = 0; i < n; i++) {
		xuatSoPhuc(p[i]);
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << fixed << setprecision(2) << moDun(p[i]) << " ";
		//		printf("%.2f ", moDun(p[i]));
	}
	cout << endl;
	soPhuc tong;
	tong.a = 0;
	tong.b = 0;
	for (int i = 0; i < n; i++) {
		tong = tinhTong(tong, p[i]);
	}
	xuatSoPhuc(tong);

	delete[] p;
	system("pause");
	return 0;
}

istream & operator>>(istream & is, soPhuc & sp) {
	is >> sp.a >> sp.b;
	return is;
}

void xuatSoPhuc(soPhuc sp) {
	if (sp.a == 0) {
		cout << fixed << setprecision(0) << "{" << sp.b << "i} ";
	}
	else {
		if (sp.b == 0) {
			cout << fixed << setprecision(0) << "{" << sp.a << "} ";
		}
		else if (sp.b == 1) {
			cout << fixed << setprecision(0) << "{" << sp.a << "+i} ";
		}
		else if (sp.b == -1) {
			cout << fixed << setprecision(0) << "{" << sp.a << "-i} ";
		}
		else if (sp.b < -1) {
			cout << fixed << setprecision(0) << "{" << sp.a << sp.b << "i} ";
		}
		else {
			cout << fixed << setprecision(0) << "{" << sp.a << "+" << sp.b << "i} ";
		}
	}
}

float moDun(soPhuc a) {
	float s = sqrt(pow(a.a, 2) + pow(a.b, 2));
	return s;
}

soPhuc tinhTong(soPhuc sp1, soPhuc sp2) {
	soPhuc sp;
	sp.a = sp1.a + sp2.a;
	sp.b = sp1.b + sp2.b;
	return sp;
}

soPhuc tinhHieu(soPhuc sp1, soPhuc sp2) {
	soPhuc sp;
	sp.a = sp1.a - sp2.a;
	sp.b = sp1.b - sp2.b;
	return sp;
}
