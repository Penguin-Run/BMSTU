#include <iostream>
using namespace std;


class A {
public:
    int mas[20];


    A(int *mas) {
        for (int i = 0; i < 20; i++) {
            this->mas[i] = *(mas);
            mas += 1;
        }
    }

    virtual void Obr() = 0;

    void Print() {
        Obr();
        cout << "Object's array elements: ";
        for (int i = 0; i < 20; i++)
            cout << mas[i] << " ";
        cout << endl;
    }
};

class B : public A {
public:
    B(int *mas) : A(mas) {}

    void Obr() override {
        for (int i = 0; i < 20; i++) {
            if (mas[i] < 0) mas[i] = 0;
        }
    }
};

class C : public A {
public:
    C(int *mas) : A(mas) {}

    void Obr() override {
        for (int i = 0; i < 20; i++) {
            if (mas[i] % 2 == 0) mas[i] = 0;
        }
    }
};

int main() {
    int mas[20] = {1, 2, -3, -4, 5};
    for (int i = 5; i < 20; i++) mas[i] = 1;

    B b(mas);
    C c(mas);

    b.Print();
    c.Print();

    return 0;
}