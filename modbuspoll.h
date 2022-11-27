#ifndef MODBUSPOLL_H
#define MODBUSPOLL_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>

class modbuspoll : public QWidget
{
    Q_OBJECT
public:
    explicit modbuspoll(QWidget *parent = nullptr);

private:
    QLabel *lblWatch;

signals:

};

#endif // MODBUSPOLL_H
