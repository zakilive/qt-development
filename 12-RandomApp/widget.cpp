#include "widget.h"
#include <QVBoxLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(200,200);
    QVBoxLayout *vbox = new QVBoxLayout(this);
    lcd = new QLCDNumber();
    lcd->setStyleSheet("background-color:yellow");

    QPushButton *btn = new QPushButton();
    btn->setText("Random generator ");
    btn->setFont(QFont("Times", 14));
    btn->setStyleSheet("background-color:green");
    connect(btn, signal(clicked()), this, SLOT(randGenerator()));

    vbox->addWidget(lcd);
    vbox->addWidget(btn);
}

Widget::~Widget()
{
}

void Widget::randGenerator(){
    int randnumber = rand ();
    lcd -> display(randnumber);
}


