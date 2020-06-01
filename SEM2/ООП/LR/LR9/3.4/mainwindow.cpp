#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onExitClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onExitClicked()
{
    // Спрашиваем, закрывать приложение или нет
    if( QMessageBox::question ( this, QString(), "Close app?", QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes )
    exit(0);
    else show();
};