#include "deque.h"


void Deque::addElementBack(QString input) {
    bool isDouble = false;
    double element = input.toDouble(&isDouble);
    if (isDouble) {
        doubles.push_back(element);
        isDoubleAddedLast = true;
    } else {
        strings.push_back(input);
        isDoubleAddedLast = false;
    }
}

void Deque::addElementFront(QString input) {
    bool isDouble = false;
    input.toDouble(&isDouble);
    if (isDouble) {
        doubles.insert(doubles.begin(), input.toDouble());
        isDoubleAddedLast = true;
    } else {
        strings.insert(strings.begin(), input);
        isDoubleAddedLast = false;
    }
}


void Deque::deleteElementBack() {
    if ((doubles.size() == 0) && (strings.size() == 0)) return;

    if (isDoubleAddedLast) {
        if (doubles.size() != 0) doubles.pop_back();
        else isDoubleAddedLast = !isDoubleAddedLast;
    } else {
        if (strings.size() != 0) strings.pop_back();
        else isDoubleAddedLast = !isDoubleAddedLast;
    }
}

void Deque::deleteElementFront() {
    if ((doubles.size() == 0) && (strings.size() == 0)) return;

    if (isDoubleAddedLast) {
        if (doubles.size() != 0) doubles.erase(doubles.begin());
        else isDoubleAddedLast = !isDoubleAddedLast;
    } else {
        if (strings.size() != 0) strings.erase(strings.begin());
        else isDoubleAddedLast = !isDoubleAddedLast;
    }
}

QString DequeV2::maxLengthString() {
    QString maxStr = "";
    for (int i = 0; i < (int)strings.size(); i++) {
        if (strings[i] > maxStr) maxStr = strings[i];
    }
    if (strings.size() == 0) maxStr = "No strings are added";
    return maxStr;
}