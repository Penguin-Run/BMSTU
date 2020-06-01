#include "mainwindow.h"

#include <QApplication>
#include <QSplitter>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

/*
    MainWindow w;
    w.show();
*/
    QSplitter * splitter = new QSplitter(Qt::Vertical);

    MainWindow *window1 = new MainWindow();
    MainWindow *window2 = new MainWindow();

    splitter->addWidget(window1);
    splitter->addWidget(window2);
    splitter->show();

    return a.exec();
}
