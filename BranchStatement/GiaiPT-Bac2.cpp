#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	if (a != 0) {
		d = b * b - 4 * a*c;
		if (d < 0) {
			cout << "VN";
		}
		else if (d == 0) {
			float x = -b / (2 * a);
			printf("%.4f\n", x);
		}
		else if (d > 0) {
			float x1 = (-b + sqrt(d)) / (2 * a);
			float x2 = (-b - sqrt(d)) / (2 * a);
			printf("%.4f\n", x1);
			printf("%.4f\n", x2);
		}
	}
	else {
		if (b == 0) {
			if (c == 0) {
				cout << "VSN";
			}
			else {
				cout << "VN";
			}
		}
		else {
			printf("%.4f\n", -(float)c / b);
		}
	}
	system("pause");
	return 0;
}