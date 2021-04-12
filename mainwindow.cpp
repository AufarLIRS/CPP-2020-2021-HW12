#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <deliverycompany.h>
DeliveryCompany delivery;
MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButtonCalcPrice_clicked()
{
  delivery.setFrom(Continent(ui->comboBoxFrom->currentIndex()));
  delivery.setTransport(Transport(ui->comboBoxTransport->currentIndex()));
  delivery.setTo(Continent(ui->comboBoxTo->currentIndex()));
  ui->label_->setNum(delivery.getPrice());
}

void MainWindow::on_pushButtonFreight_clicked()
{
  ui->label->setText(delivery.cargo());
}
