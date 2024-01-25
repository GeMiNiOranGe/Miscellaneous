#include <iostream>
using namespace std;
int main() {
	int soDong, soCot;
	cout << "nhap so dong: ";
	cin >> soDong;
	cout << endl << "nhap so cot: ";
	cin >> soCot;
	for (int i = 0; i < soDong; i++) {
		for (int j = 0; j < soCot; j++) {
			if ((i + j) % 2 == 0) {
				cout << "X";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}