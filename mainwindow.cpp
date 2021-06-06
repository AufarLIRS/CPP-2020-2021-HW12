#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "delivery.h"
#include <QString>
#include "airdelivery.h"
#include "seadelivery.h"
#include "grounddelivery.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CalculatePriceButton_clicked()
{
    switch (Transport(ui->comboBox_2->currentIndex())) {
        case Transport::Air : {
            AirDelivery offer = AirDelivery(Continent(ui->comboBox->currentIndex()), Continent(ui->comboBox_3->currentIndex()));
            ui->price->setText(QString::number(offer.getPrice()));
            break;
        }
        case Transport::Ground : {
            GroundDelivery offer = GroundDelivery(Continent(ui->comboBox->currentIndex()), Continent(ui->comboBox_3->currentIndex()));
            ui->price->setText(QString::number(offer.getPrice()));
            break;
        }
        case Transport::Sea : {
            SeaDelivery offer = SeaDelivery(Continent(ui->comboBox->currentIndex()), Continent(ui->comboBox_3->currentIndex()));
            ui->price->setText(QString::number(offer.getPrice()));
            break;
        }
        default: {
            break;
        }
    }
}

void MainWindow::on_FreightButton_clicked()
{
    switch (Transport(ui->comboBox_2->currentIndex())) {
        case Transport::Air : {
            ui->freight_msg->setText(QString::fromStdString(AirDelivery::transport) + " is ready");
            break;
        }
        case Transport::Ground : {
            ui->freight_msg->setText(QString::fromStdString(GroundDelivery::transport) + " is ready");
            break;
        }
        case Transport::Sea : {
            ui->freight_msg->setText(QString::fromStdString(SeaDelivery::transport) + " is ready");
            break;
        }
        default : {
            break;
        }
    }
}
