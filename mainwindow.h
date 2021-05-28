#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include "Delivery.h"
#include "Plane_Delivery.h"
#include "Truck_Delivery.h"
#include "Boat_Delivery.h"

class Company
{
private:
  Delivery* delivery;

public:
  Company(Delivery* delivery_ = nullptr)
    : delivery(delivery_){

    };

  ~Company()
  {
    delete this->delivery;
  };

  void setDeliveryType(QString transport)
  {
    delete this->delivery;
    if (transport == "Air")
    {
      this->delivery = new Plane_Delivery();
    }
    if (transport == "Ground")
    {
      this->delivery = new Truck_Delivery();
    }
    if (transport == "Sea")
    {
      this->delivery = new Boat_Delivery();
    }
  }

  Delivery* getDeliveryType()
  {
    return this->delivery;
  }
};

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:
  void on_calculatePriceButton_clicked();

  void on_freightButton_clicked();

private:
  Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
