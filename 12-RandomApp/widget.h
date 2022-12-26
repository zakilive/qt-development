#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void randGenerator();

private:
    QLCDNumber *lcd;

};
#endif // WIDGET_H
