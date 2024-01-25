#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	// chuyen thanh chu thuong
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	// xoa khoang trang o dau
	s.erase(0, s.find_first_not_of(" "));
	// xoa khoang trang o cuoi
	s.erase(s.find_last_not_of(" ") + 1);
	// ghi hoa cac ky tu dau cua moi tu
	s.at(0) = toupper(s.at(0));
	for (int i = 0; i != s.size(); i++)
		if (s.at(i) == ' ' && s.at(i + 1) != ' ')
			s.at(i + 1) = toupper(s.at(i + 1));
	cout << s;
	system("pause");
	return 0;
}