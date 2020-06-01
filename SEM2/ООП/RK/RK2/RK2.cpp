#include <iostream>
#include <vector>
using namespace std;

/*
Билет 2_19
Дана символьная строка, представляющая собой некоторое длинное целое число. Составить программу, которая вводит строку,
 организует из цифр строки однонаправленный список. Используя сформированный список, подсчитать сумму цифр
 введенного числа и количество повторений каждой цифры. Освободить память, отведенную под размещение элементов списка.
 */

typedef struct digit {
    int num;
    digit* next;
} digit;

int main() {
    // ввод строки
    cout << "Please, enter your number: ";
    string input;
    cin >> input;

    // подготовка списка
    digit* p; digit* q;
    digit* last = new digit; last->num = 'e'; last->next = NULL;
    p = last;

    for (int i = 0; i < input.size(); i++) {
        q = new digit;
        char dig = input[i];
        q->num = atoi(&dig);
        q->next = p;
        p = q;
        // cout << input[i];
    }
    digit* first = p;

    // объявляю и готовлю переменные для подсчета
    long sum = 0;
    int digitCount[10];
    for (int i = 0; i < 10; i++) digitCount[i] = 0;

    // иду по списку, начиная сначала

    q = first;
    while (q->next) {
        sum += q->num;
        digitCount[q->num]++;

        // удаление
        p = q;
        delete p;

        // переход к новому элементу
        q = q->next;
    }
    // удаление последнего элемента
    delete last;

    // затираем указатели
    first = NULL; last = NULL; p = NULL; q = NULL;

    cout << endl << "Digits sum: " << endl << sum << endl << endl;
    cout << "Digits count" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << ": " << digitCount[i] << " times" << endl;
    }

    return 0;
}