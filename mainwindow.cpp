#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

static Company company;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_calculatePriceButton_clicked()
{
  company.setDeliveryType(ui->chooseHow->currentText());

  QString price;
  price.setNum(company.getDeliveryType()->getPrice((ToAndFromContinents)ui->chooseFrom->currentIndex(),
                                                   (ToAndFromContinents)ui->chooseTo->currentIndex()));
  ui->priceLabel->setText(price);
}
void MainWindow::on_freightButton_clicked()
{
  company.setDeliveryType(ui->chooseHow->currentText());
  QString freightMessage = company.getDeliveryType()->getFreightMessage();
  ui->labelFreight->setText(freightMessage);
}
