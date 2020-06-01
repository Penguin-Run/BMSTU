#ifndef DEQUE_H
#define DEQUE_H

#include <QString>
#include <vector>

class Deque {
public:
    std::vector<double> doubles;
    std::vector<QString> strings;
    bool isDoubleAddedLast;

    void addElementBack(QString input);
    void addElementFront(QString input);
    void deleteElementBack();
    void deleteElementFront();
};

class DequeV2 : public Deque {
public:
    QString maxLengthString();
};

#endif // DEQUE_H