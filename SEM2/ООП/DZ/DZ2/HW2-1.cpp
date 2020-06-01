#include <iostream>
#include <cmath>

using namespace std;


int number_of_digits(int num) {
    int number_of_digits = 0;
    while (num != 0) {
        num = num / 10;
        number_of_digits++;
    }
    return number_of_digits;
}

bool is_automorph(int num) {
    int squire = num*num;
    // если последние цифры квадрата заданного числа совпадают с самим числом, то true
    return squire % (int) pow(10, number_of_digits(num)) == num;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (is_automorph(i+1)) cout << i+1 << " ";
    }
    return 0;
}