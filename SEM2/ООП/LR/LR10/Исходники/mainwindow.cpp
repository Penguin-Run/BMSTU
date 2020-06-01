#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "deque.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(addEl()));
    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(onLineEditEnd()));
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteEl()));
    connect(ui->printButton, SIGNAL(clicked()), this, SLOT(printEl()));
    connect(ui->lineEdit, SIGNAL(editingFinished()), this, SLOT(onLineEditEnd()));
    connect(ui->maxString, SIGNAL(clicked()), this, SLOT(maxStr()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

DequeV2 *deque = new DequeV2();

void MainWindow::addEl() {
    QString input = ui->lineEdit->text();
    if (ui->comboBox->currentText() == "begin") {
        deque->addElementFront(input);
    } else {
        deque->addElementBack(input);
    }
    printEl();
}

void MainWindow::deleteEl() {
    if (ui->comboBox->currentText() == "begin") {
        deque->deleteElementFront();
    } else {
        deque->deleteElementBack();
    }
    printEl();
}

void MainWindow::printEl() {
    ui->textEdit->setPlainText("");
    ui->textEdit->append("Printing Deque elements: ");
    for (int i = 0; i < (int)deque->doubles.size(); i++) {
        QString element = QString::fromStdString(std::to_string(deque->doubles[i]));
        ui->textEdit->append(element);
    }
    for (int i = 0; i < (int)deque->strings.size(); i++) {
        ui->textEdit->append(deque->strings[i]);
    }
}

void MainWindow::onLineEditEnd() {
    ui->lineEdit->setText("");
}

void MainWindow::maxStr() {
    QString maxStr = deque->maxLengthString();
    ui->textEdit->setPlainText(maxStr);
}