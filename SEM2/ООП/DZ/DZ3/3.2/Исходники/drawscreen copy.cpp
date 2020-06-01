#include "drawscreen.h"

DrawScreen::DrawScreen(QWidget *parent) : QWidget(parent)
{
   setFixedSize(QSize(500, 500));
   r = 5;
   k = 1.1;
   symbol = "O";
}

void DrawScreen::setK(float k) {
    this->k = k;
}

void DrawScreen::setSymbol(QString symbol) {
    this->symbol = symbol;
}

void DrawScreen::scale()
{
    r = r*k;
    if (r < 200) return;
    else r = r/k;
}

void DrawScreen::paintEvent(QPaintEvent *event) {
    scale();

    QPainter* painter = new QPainter(this);

    if (symbol == "С") test = new Symbol_S(painter, r);
    if (symbol == "Ф") test = new Symbol_F(painter, r);
    if (symbol == "O") test = new Symbol_O(painter, r);
    test->draw();
    painter->end();

    qDebug() << "update..";
}
