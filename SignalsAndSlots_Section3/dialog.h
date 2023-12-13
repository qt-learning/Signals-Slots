#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void onTimeout();

private:
    Ui::Dialog *ui;
    QTimer *m_timer;
    int m_counter = 0;
};
#endif // DIALOG_H
