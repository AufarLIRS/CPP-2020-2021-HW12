#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  DeliveryLogic = Delivery(10, 10);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::checkUserInput(const QString fromCountry, const QString toCountry, const QString transport)
{
  // Asia, Europe, NorthAmerica, SouthAmerica, Africa, Australia
  if (fromCountry == "Asia")
    DeliveryLogic.FromCountry = Asia();
  else if (fromCountry == "Europe")
    DeliveryLogic.FromCountry = Europe();
  else if (fromCountry == "North America")
    DeliveryLogic.FromCountry = NorthAmerica();
  else if (fromCountry == "South America")
    DeliveryLogic.FromCountry = SouthAmerica();
  else if (fromCountry == "Africa")
    DeliveryLogic.FromCountry = Africa();
  else if (fromCountry == "Australia")
    DeliveryLogic.FromCountry = Australia();

  if (toCountry == "Asia")
    DeliveryLogic.ToCountry = Asia();
  else if (toCountry == "Europe")
    DeliveryLogic.ToCountry = Europe();
  else if (toCountry == "North America")
    DeliveryLogic.ToCountry = NorthAmerica();
  else if (toCountry == "South America")
    DeliveryLogic.ToCountry = SouthAmerica();
  else if (toCountry == "Africa")
    DeliveryLogic.ToCountry = Africa();
  else if (toCountry == "Australia")
    DeliveryLogic.ToCountry = Australia();

  if (transport == "Air")
    DeliveryLogic.Transport = Plane();
  else if (transport == "Sea")
    DeliveryLogic.Transport = Ship();
  else if (transport == "Ground")
    DeliveryLogic.Transport = Truck();
}
void MainWindow::on_calculatePricaPushButton_clicked()
{
  QString fromCountry = this->ui->from_comboBox->currentText();
  QString transoprt = this->ui->transport_comboBox->currentText();
  QString toCountry = this->ui->to_comboBox->currentText();

  checkUserInput(fromCountry, toCountry, transoprt);
  int sum = DeliveryLogic.GetSumOfDelivery();
  this->ui->resultPriceLabel->setText(QString::number(sum));
}

void MainWindow::on_freightPushButton_clicked()
{
  QString fromCountry = this->ui->from_comboBox->currentText();
  QString transport = this->ui->transport_comboBox->currentText();
  QString toCountry = this->ui->to_comboBox->currentText();
  checkUserInput(fromCountry, toCountry, transport);

  std::string name;
  if (transport == "Air")
    name = "Plane";
  else if (transport == "Sea")
    name = "Ship";
  else if (transport == "Ground")
    name = "Truck";
  this->ui->outputLabel->setText(QString::fromStdString(name + " is ready!"));
}
