#include <iostream>
#include <vector>
#include <algorithm>	//cho lenh sort
#include <cmath>

using namespace std;

bool kiemTraSCP(int n);

int main() {
	vector<int> v;
	int x;
	for (; cin >> x;) {
		v.push_back(x);
	}
//	sap xep tang dan vector
	sort(v.begin(), v.end());

//	cach 1: xoa SCP = cach duyet tung phan tu -> kiem tra -> xoa
/*	for (int i = 0; i < v.size(); i++) {
		if (kiemTraSCP(v[i])) {
			v.erase(v.begin() + i);
		}
	}
	//xuat so chan
	vector<int>::iterator it;
	for (it = v.begin(); it < v.end(); it++) {
		if (*it % 2 == 0) {
			cout << *it << " ";
		}
	}
	cout << endl;*/
//	cach 2: xoa SCP = lenh remove_if
	vector<int>::iterator rif;
	rif = remove_if(v.begin(), v.end(), kiemTraSCP);
	//xuat so chan
	vector<int>::iterator it;
	//vi lenh remove_if xuat ko lam thay doi thu tu cua cac phan tu con lai, ko thay doi kich thuoc cua mang
	//nen la xuat den rif
	for (it = v.begin(); it < rif; it++) {
		if (*it % 2 == 0) {
			cout << *it << " ";
		}
	}
	system("pause");
	return 0;
}

bool kiemTraSCP(int n) {
	int a = sqrt(n);
	return (a*a == n);
}
