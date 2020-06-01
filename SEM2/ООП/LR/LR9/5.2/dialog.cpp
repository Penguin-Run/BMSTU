#include "dialog.h"
#include "ui_dialog.h"
#include <QVBoxLayout>
#include <QPushButton>



Dialog::Dialog(QWidget *parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout();

    line = new QLineEdit();
    QPushButton *button = new QPushButton("Convert");
    text = new QTextEdit();

    mainLayout->addWidget(line);
    mainLayout->addWidget(button);
    mainLayout->addWidget(text);

    connect(button, SIGNAL(clicked()), this, SLOT(revertTextCase()));
    connect(line, SIGNAL(editingFinished()), this, SLOT(onLineEditEnd()));

    setLayout(mainLayout);

    isLower = false;
}

Dialog::~Dialog()
{

}

void Dialog::revertTextCase() {
    if (isLower) {
        text->append("Upper case string: " + textInLine.toUpper());
    } else {
        text->append("Lower case string: " + textInLine.toLower());
    }
    isLower = !isLower;
}

void Dialog::onLineEditEnd() {
    textInLine = line->text();
    text->append("input: " + line->text());
    line->setText("");
}