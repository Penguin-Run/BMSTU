#include "window.h"
#include "ui_window.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>

Window::Window(QWidget *parent)
{
    this->setWindowTitle("Symbols scaling");

    drawScreen = new DrawScreen(this);
    btn = new QPushButton("Start");
    symbol = new QLineEdit("O");
    coefficient = new QLineEdit("1.1");

    QVBoxLayout* controlLayout = new QVBoxLayout();
    controlLayout->addWidget(btn);
    controlLayout->addWidget(symbol);
    controlLayout->addWidget(coefficient);

    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    mainLayout->addWidget(drawScreen);
    mainLayout->addLayout(controlLayout);

    connect(btn, SIGNAL(clicked()), this, SLOT(startScaling()));
    connect(symbol, SIGNAL(editingFinished()), this, SLOT(symbolSet()));
    connect(coefficient, SIGNAL(editingFinished()), this, SLOT(kSet()));

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(changeScale()));

}

Window::~Window()
{

}

void Window::changeScale() {
    drawScreen->scale();
    drawScreen->update();
}

void Window::startScaling() {
    drawScreen->r = 5;

    timer->start(500);

}

void Window::symbolSet() {
    QString s = symbol->text();
    drawScreen->setSymbol(s);
}

void Window::kSet() {
    QString s = coefficient->text();
    bool isFloat = false;
    float k = s.toFloat(&isFloat);
    if (isFloat) drawScreen->setK(k);
}

