#include <iostream>
#include <cmath>
#include <vector>

double func(double x) {
    return sin(x)*(x*x);
}

void extrems(double a, double b) {
    const double PRECISION_STEP_SIZE = 0.1;
    // const double INTERVAL = (b - a);
    std::vector<double> extrem_points;

    bool is_up = false;
    bool is_down = false;
    double p = func(a);
    for (double i = a; i < b; i += PRECISION_STEP_SIZE) {
        if (p < func(i)) {
            is_up = true;
            if (is_down) extrem_points.push_back(i-PRECISION_STEP_SIZE/2);
            is_down = false;
        }
        else if (p > func(i)) {
            is_down = true;
            if (is_up) extrem_points.push_back(i-PRECISION_STEP_SIZE/2);
            is_up = false;
        }
        p = func(i);
    }

    // для форматированного вывода
    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    std::cout << "Точки экстремума функции sin(x)*x^2 на интервале [" << a << ", " << b << "]:" << std::endl;
    for (int i = 0; i < extrem_points.size(); i++) std::cout << extrem_points[i] << "  " << std::endl;
    std::cout << std::endl;

    // вернуть вывод как был

    return;
}

double find_integral_value(int precision, double a, double b) {
    double squire = 0.0;

    double x = a;
    double width = (abs(b - a))/precision;

    for (int i = 0; i < precision; i++) {
        squire += width*func(x);
        x += width;
    }

    return squire;
}

double find_root(double precision, double a, double b) {
    double c = (a + b)/2;
    while ((abs(b-a) > precision) && (func(c) != 0)) {
        if (func(a)*func(c) < 0) {
            b = c;
            c = (a+b)/2;
        } else {
            a = c;
            c = (a+b)/2;
        }
    }
    return (a+b)/2;
}


int main() {
     std::cout << find_integral_value(1024, 3.0, 15.0) << std::endl; // precision - 1024+

     std::cout << find_root(0.001, 1.0, 5.0) << std::endl << std::endl; // precision - 0.001

    extrems(3.0, 15.0);

    return 0;
}