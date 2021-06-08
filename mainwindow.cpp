#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <delivery.h>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

void MainWindow::cargoButton_clicked()
{
  ui->statusLabel->setText(delivery.goods());
}

void MainWindow::calculateButton_clicked()
{
  delivery.setTo(Continent(ui->toComboBox->currentIndex()));
  delivery.setTransport(Transport(ui->transportComboBox->currentIndex()));
  delivery.setFrom(Continent(ui->fromComboBox->currentIndex()));
  ui->priceLabel->setNum(delivery.getPrice());
}

MainWindow::~MainWindow()
{
  delete ui;
}
