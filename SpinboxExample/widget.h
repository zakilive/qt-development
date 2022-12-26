#ifndef WIDGET_H
#define WIDGET_H

#include<QWidget>
#include<QSpinBox>
#include<QLineEdit>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLineEdit *price;
    QLineEdit *total;
    QSpinBox *spinBox;

public slots:
    void changeSpin();

};
#endif // WIDGET_H
