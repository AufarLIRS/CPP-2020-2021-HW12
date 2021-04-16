#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include "Delivery.h"
#include "Air_Delivery.h"
#include "Ground_Delivery.h"
#include "Sea_Delivery.h"

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
      this->delivery = new Air_Delivery();
    }
    if (transport == "Ground")
    {
      this->delivery = new Ground_Delivery();
    }
    if (transport == "Sea")
    {
      this->delivery = new Sea_Delivery();
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
