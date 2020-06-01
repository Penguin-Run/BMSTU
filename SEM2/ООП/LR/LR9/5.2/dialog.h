#ifndef DIALOG_H
#define DIALOG_H

#include <QLineEdit>
#include <QTextEdit>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    QLineEdit *line;
    QTextEdit *text;
    bool isLower;
    QString textInLine;

private slots:
    void revertTextCase();
    void onLineEditEnd();

};
#endif // DIALOG_H