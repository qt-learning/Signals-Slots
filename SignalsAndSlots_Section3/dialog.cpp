#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    m_timer = new QTimer(this);
    QObject::connect(m_timer, &QTimer::timeout, this, &Dialog::onTimeout);
    m_timer->start(1000);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onTimeout()
{
    m_counter ++;
    ui->lcdNumber->display(m_counter);
}
