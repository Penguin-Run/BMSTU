#ifndef FIGURE_H
#define FIGURE_H
#include <QPainter>

class Figure
{
public:
    Figure(QPainter* painter, int r);
    virtual void draw();

    QPainter* painter;

protected:
    int x;
    int y;
    int r;

};

class Symbol_S : public Figure {
    public:
    Symbol_S(QPainter* painter, int r);
    void draw();
};

class Symbol_F : public Figure {
    public:
    Symbol_F(QPainter* painter, int r);
    void draw();
};

class Symbol_O : public Figure {
    public:
    Symbol_O(QPainter* painter, int r);
    void draw();
};

#endif // FIGURE_H
