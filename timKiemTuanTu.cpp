#include <iostream>
#include <stdint.h>
#include <string>
#include <cmath>

using namespace std;

const int soLuongPhanTuToiDa = 100;
int temp = -1, tempCount, valueMin = INT32_MAX;

class CSequentialSearch {
public:
	void sequentialSearch1();
	void sequentialSearch2();
	void sequentialSearch3();
	void sequentialSearch4();
	void sequentialSearch5();

	void nhapBietPhanTu();
	void nhapBietPhanTuCoDoLech();
	void nhapKhongBietPhanTu();
private:
	int mang[soLuongPhanTuToiDa], soLuongPhanTu, soCanTim, doLech;
};

int main() {
	CSequentialSearch baiTapUpcoder;
	baiTapUpcoder.nhapBietPhanTuCoDoLech();
	baiTapUpcoder.sequentialSearch5();
	return 0;
}

void CSequentialSearch::sequentialSearch1() {
	for (int i = 0; i < soLuongPhanTu; i++) {
		if (mang[i] == soCanTim) {
			temp = i;
		}
	}
	cout << temp;
}
void CSequentialSearch::sequentialSearch2() {
	for (int i = 0; i < soLuongPhanTu; i++) {
		if (mang[i] == soCanTim) {
			cout << i << " ";
			tempCount++;
		}
	}
	if (tempCount == 0) {
		cout << temp;
	}
}
void CSequentialSearch::sequentialSearch3() {
	for (int i = 0; i < soLuongPhanTu; i++) {
		if (mang[i] <= soCanTim && soCanTim - mang[i] < valueMin) {
			valueMin = soCanTim - mang[i];
			temp = i;
		}
	}
	cout << temp;
}
void CSequentialSearch::sequentialSearch4() {
	string strTemp = "-1";
	for (int i = 0; i < soLuongPhanTu; i++) {
		if (mang[i] <= soCanTim  ) {
			if (soCanTim - mang[i] < valueMin) {
				valueMin = soCanTim - mang[i];
				strTemp = to_string(i);
			}
			else if (soCanTim - mang[i] == valueMin) {
				strTemp += " " + to_string(i);
			}
		}
	}
	cout << strTemp;
}
void CSequentialSearch::sequentialSearch5() {
	for (int i = 0; i < soLuongPhanTu; i++) {
		if (abs(soCanTim - mang[i]) <= doLech) {
			doLech = abs(soCanTim - mang[i]) - 1;
			temp = i;
		}
	}
	cout << temp;
}

void CSequentialSearch::nhapBietPhanTu() {
	cin >> soLuongPhanTu >> soCanTim;
	for (int i = 0; i < soLuongPhanTu; i++) {
		cin >> mang[i];
	}
}
void CSequentialSearch::nhapBietPhanTuCoDoLech() {
	cin >> soLuongPhanTu >> soCanTim >> doLech;
	for (int i = 0; i < soLuongPhanTu; i++) {
		cin >> mang[i];
	}
}
void CSequentialSearch::nhapKhongBietPhanTu() {
	cin >> soCanTim;
	for (soLuongPhanTu = 0; cin >> mang[soLuongPhanTu]; soLuongPhanTu++) {
	}
}
