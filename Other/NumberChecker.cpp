#include <cmath>
#include <iostream>

class NumberChecker {
private:
public:
    static bool is_prime(int _number);
    static bool is_perfect(int _number);
    static bool is_palindrome(int _number);
    static bool is_square(int _number);
};

int main() {
    int _number;
    std::cout << "Nhap so: ";
    std::cin >> _number;

    std::cout << "1. " << (NumberChecker::is_prime(_number) ? "Dung" : "Khong") << " la so nguyen to" << std::endl;
    std::cout << "2. " << (NumberChecker::is_perfect(_number) ? "Dung" : "Khong") << " la so hoan hao" << std::endl;
    std::cout << "3. " << (NumberChecker::is_palindrome(_number) ? "Dung" : "Khong") << " la so doi xung (so doc xuoi nguoc deu duoc)" << std::endl;
    std::cout << "4. " << (NumberChecker::is_square(_number) ? "Dung" : "Khong") << " la so chinh phuong" << std::endl;
    return 0;
}

// kiem tra so nguyen to
bool NumberChecker::is_prime(int _number) {
    if (_number < 2)
        return false;
    if (_number == 2)
        return true;
    if (_number % 2 == 0)
        return false;
    for (int i = 3; i < _number - 1; i += 2)
        if (_number % i == 0)
            return false;
    return true;
}

// kiem tra so hoan hao
bool NumberChecker::is_perfect(int _number) {
    int sum = 1;
    for (int i = 2; i * i <= _number; i++)
        if (_number % i == 0)
            sum = (i * i != _number) ? sum + i + _number / i : sum + i;
    if (sum == _number && _number != 1)
        return true;
    return false;
}

// kiem tra doi xung (so doc xuoi nguoc deu duoc)
bool NumberChecker::is_palindrome(int _number) {
    int reversed = 0, original = _number;
    while (_number > 0) {
        reversed = reversed * 10 + _number % 10;
        _number /= 10;
    }
    return (reversed == original);
}

// kiem tra chinh phuong
bool NumberChecker::is_square(int _number) {
    int temp = sqrt(_number);
    return (temp * temp == _number);
}
