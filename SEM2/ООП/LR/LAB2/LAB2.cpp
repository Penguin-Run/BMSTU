#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x; double a;
    cout << "Введите x:" << endl;
    cin >> x;

    const float z = 3.14; // z - некая постоянная
    a = x * ( cos(z) + exp(-(x+3)) );

    cout << "Полученный результат: " << a << endl;

    return 0;
}
