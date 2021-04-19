#include "mainwindow.h"
#include "ui_mainwindow.h"

int Price::calculatePrice(std::string from, std::string transport, std::string to)
{
  if (transport == "Sea")
  {
    return 1;
  }
  else if (transport == "Ground")
  {
    return 2;
  }
  else if (transport == "Air")
  {
    return 3;
  }
  else  /// if no valid transport exit with -1
  {
    return -1;
  }
}

QString PriceError::getPriceError(int id)
{
  switch (id)
  {
    case -1:
      return "Transport is not available";
    default:
      return "Unknown error";
  }
}
QString Result::getResult(QString transport)
{
  if (transport == "Sea")
  {
    return "Ship is ready";
  }
  else if (transport == "Ground")
  {
    return "Truck is ready";
  }
  else if (transport == "Air")
  {
    return "Plane is ready";
  }
  else  /// if no valid transport return "Error"
  {
    return "Error";
  }
}

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_calculate_button_clicked()
{
  int price = 0;
  if (ui->from_group->currentText() != ui->to_group->currentText())
  {
    price = delivery.calculatePrice(ui->from_group->currentText().toStdString(),
                                    ui->transport_group->currentText().toStdString(),
                                    ui->to_group->currentText().toStdString());
  }
  if (price >= 0)
  {
    ui->decimal_label->setText(QString::number(price));
  }
  else
  {
    ui->decimal_label->setText(delivery.getPriceError(price));
  }
}

void MainWindow::on_freight_button_clicked()
{
  ui->result_label->setText(delivery.getResult(ui->transport_group->currentText()));
}
