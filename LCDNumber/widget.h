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
private:
    QLCDNumber *lcd;
public slots:
    void showTime();
};
#endif // WIDGET_H
