#include "modbuspoll.h"

modbuspoll::modbuspoll(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout(this); // this keyword is iimportant, we tell the widget the parent withn be showed
    layout->setMargin(0);

   lblWatch = new QLabel(QString("00:00:00"));
   QString strFont = "font: 75 108pt 'Comic Sans MS',";
   lblWatch->setStyleSheet(strFont);
   lblWatch->setAlignment(Qt::AlignCenter);
   lblWatch->setMargin(0); // to stretch the widget

   layout->addWidget(lblWatch);

}
