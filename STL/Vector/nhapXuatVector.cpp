#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int x;
	for (; cin >> x;) {
		v.push_back(x);
	}

	//xuat vector giong nhu mang
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	//xuat vector su dung iterator - con tro
	vector<int>::iterator it;

	//it se duyet tu begin den end, "!=" tuong duong "<" vi duyet tu dau den cuoi
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//xuat nguoc vector bang cach duyet nguoc chi so
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
	cout << endl;

	//duyet nguoc dung iterator tu v.end den v.begin
	for (it = v.end() - 1; it >= v.begin(); it--) {
		cout << *it << " ";
	}
	cout << endl;

	//    xuat nguoc vector su dung reverse_iterator - con tro
	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit < v.rend(); rit++) {
		cout << *rit << " ";
	}
	system("pause");
	return 0;
}
