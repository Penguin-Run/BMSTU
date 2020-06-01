#include "figure.h"

Figure::Figure(QPainter* painter, int r)
{
    this->painter = painter;
    this->r = r;
}

void Figure::draw() {
    this->painter->setPen(Qt::blue);
    this->painter->setFont(QFont("Arial", r));
}

Symbol_S::Symbol_S(QPainter* painter, int r) : Figure(painter, r) {

}

Symbol_F::Symbol_F(QPainter* painter, int r) : Figure(painter, r) {

}

Symbol_O::Symbol_O(QPainter* painter, int r) : Figure(painter, r) {

}

void Symbol_S::draw()
{
    Figure::draw();
    this->painter->drawText(200, 300, "C");
}


void Symbol_F::draw()
{
    Figure::draw();
    this->painter->drawText(200, 300, "Ф");
}

void Symbol_O::draw()
{
    Figure::draw();
    this->painter->drawText(200, 300, "О");
}
