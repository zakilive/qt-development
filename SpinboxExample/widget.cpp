#include "widget.h"
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QLabel>
#include<QSpinBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QLabel *label = new QLabel();
    QLabel *label1 = new QLabel();


    label -> setText("Laptop Price");
    label -> setFont(QFont("Times", 15));

    label1 -> setText("EUR");
    label1 -> setFont(QFont("Times", 15));


    price = new QLineEdit();
    price -> setFont(QFont("Times", 15));

    total = new QLineEdit();
    total -> setFont(QFont("Times", 15));

    spinBox = new QSpinBox();
    spinBox -> setFont(QFont("Times", 15));
    connect(spinBox, SIGNAL(valueChanged(int)),this, SLOT(changeSpin()));

    hbox->addWidget(label);
    hbox->addWidget(price);
    hbox->addWidget(spinBox);
    hbox->addWidget(total);

    hbox->addWidget(label1);

}

Widget::~Widget()
{
}

void Widget::changeSpin()
{
    int myPrice = price->text().toInt();
    int totalNumber=spinBox->value()*myPrice;
    total->setText(QString::number(totalNumber));
}
