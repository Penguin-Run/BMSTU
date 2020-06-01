#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QTimer>


#include "drawscreen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

    DrawScreen* drawScreen;
    QLineEdit* symbol;
    QLineEdit* coefficient;

    QTimer* timer;

protected:
    QPushButton* btn;

public slots:
    void changeScale();
    void startScaling();
    void symbolSet();
    void kSet();



};
#endif // WINDOW_H
