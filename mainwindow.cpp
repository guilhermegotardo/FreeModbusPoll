#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "modbuspoll.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    modbuspoll *teste = new modbuspoll;
    modbuspoll *teste2 = new modbuspoll;

    QGridLayout *layout = new QGridLayout;
    layout->setMargin(0);
    layout->addWidget(teste);
    layout->addWidget(teste2);

    this->centralWidget()->setLayout(layout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

