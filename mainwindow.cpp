#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  DeliveryLogic = Delivery(100, 100);
}

MainWindow::~MainWindow()
{
  delete ui;
}
void MainWindow::checkUserInput()
{
  this->DeliveryLogic.FromCountry = static_cast<Country>(this->ui->from_comboBox->currentIndex());
  this->DeliveryLogic.Transport = static_cast<Transport>(this->ui->transport_comboBox->currentIndex());
  this->DeliveryLogic.ToCountry = static_cast<Country>(this->ui->to_comboBox->currentIndex());
}
void MainWindow::on_calculatePricaPushButton_clicked()
{
  checkUserInput();
  int sum = DeliveryLogic.GetSum();
  this->ui->resultPriceLabel->setText(QString::number(sum));
}

void MainWindow::on_freightPushButton_clicked()
{
  checkUserInput();
  this->ui->outputLabel->setText(QString::fromStdString(std::string(ToString(DeliveryLogic.Transport)) + " is ready!"));
}
