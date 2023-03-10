#include <iostream>
#include <vector>
#include <algorithm>	// thu vien dung cho sort, set_union, set_intersection

using namespace std;

vector<int> nhapVector(int soLuongPhanTu);
ostream & operator<<(ostream & os, vector<int> vec);

int main() {
	/*	khai bao vector, can than viec co cap phat vector hay khong rat quan trong.
	neu cap phat thi se khong xai duoc cac lenh nhu push_back, pop_back, size,...
	chi co the xai: ten_vector[i]
	KHONG cap phat thi vector chua co phan tu la vector rong nen co the dung push_back, pop_back,...
	KHONG cap phat muon truy cap tung phan tu thi ta dung ham at(phan_tu_muon_truy_cap) */

	int n1, n2;

	//	vec1 va vec2 cho nhap xuat
	vector<int> vec1, vec2;

	//	nhap 2 vector
	cout << "<Vector 1>" << endl;
	cout << "nhap so luong phan tu: ";
	cin >> n1;
	cout << "nhap vector: ";
	vec1 = nhapVector(n1);

	cout << "<Vector 2>" << endl;
	cout << "nhap so luong phan tu: ";
	cin >> n2;
	cout << "nhap vector: ";
	vec2 = nhapVector(n2);

	//	sap xep 2 vector vua nhap duoc, chieu tang dan
	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	//	xuat 2 vector ra man hinh
	cout << endl << "xuat vector 1: " << vec1;
	cout << endl << "xuat vector 2: " << vec2;
	cout << endl;

	//	vec3 va vec4 cung tham gia xu ly phep hoi va phep giao
	vector<int> vec3(n1 + n2), vec4(n1 + n2);

	//	khai bao iterator de dung trong set_union va set_intersection
	vector<int>::iterator it;

	//	phep hoi cua 2 vector, phep hoi la tap hop tat ca cac phan tu thuoc vector 1 hoac vector 2
	cout << endl << "phep hoi cua 2 vector gom cac phan tu la: ";
	it = set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
	vec3.resize(it - vec3.begin());
	cout << vec3;

	//	phep giao cua 2 vector, phep giao la tap hop tat ca cac phan tu thuoc vector 1 va vector 2
	cout << endl << "phep giao cua 2 vector gom cac phan tu la: ";
	it = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec4.begin());
	vec4.resize(it - vec4.begin());
	cout << vec4;

	cout << endl;
	return 0;
}

//	nhap vector
vector<int> nhapVector(int soLuongPhanTu) {
	vector<int> vec;
	for (int i = 0; i < soLuongPhanTu; i++) {
		int tempNum;
		cin >> tempNum;
		vec.push_back(tempNum);
	}
	return vec;
}

//	toan tu xuat vector
ostream & operator<<(ostream & os, vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		os << vec[i] << " ";
	}
	return os;
}