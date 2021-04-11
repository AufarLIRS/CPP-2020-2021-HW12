#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  DeliveryLogic = Delivery(100, 200);
}

MainWindow::~MainWindow()
{
  delete ui;
}
