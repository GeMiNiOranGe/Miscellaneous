#include <iostream>

using namespace std;

bool kiemTraSNT(int n);

int main() {
	int m, M, *p = new int[100];
	cin >> m >> M;
	for (int i = m; i <= M; i++) {
		if (kiemTraSNT(i)) {
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}
/*
bool kiemTraSNT(int n) {
	if (n < 2) return false;
	for (int i = 2; i < n - 1; i++)
		if (n % i == 0) return false;
	return true;
}*/

bool kiemTraSNT(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i < (n - 1); i += 2)
		if (n % i == 0) return false;
	return true;
}