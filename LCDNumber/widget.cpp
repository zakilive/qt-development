#include "widget.h"
#include<QHBoxLayout>
#include<QTime>
#include<QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setWindowTitle("QLcdNumber");
    resize(300,300);

    QHBoxLayout *hbox = new QHBoxLayout(this);
    lcd= new QLCDNumber();
    lcd->setStyleSheet("background-color:red");

    hbox->addWidget(lcd);
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);
    showTime();

}

Widget::~Widget()
{
}

void Widget::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second()%2)==0)
        text[2]=' ';
    lcd->display(text);
}

