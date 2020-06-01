#ifndef DRAWSCREEN_H
#define DRAWSCREEN_H

#include <QWidget>
#include <QString>
#include <QPainter>
#include <QDebug>

#include "figure.h"


class DrawScreen : public QWidget
{
    Q_OBJECT
public:
    explicit DrawScreen(QWidget *parent = nullptr);
    void setK(float k);
    void setSymbol(QString symbol);
    void scale();

    Figure* test;
    float r; // font width
    float k; // coefficient
    QString symbol;


protected:
    void paintEvent(QPaintEvent *event); // override();

signals:

};

#endif // DRAWSCREEN_H
