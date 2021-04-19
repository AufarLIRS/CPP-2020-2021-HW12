#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class Price
{
public:
  virtual int calculatePrice(std::string from, std::string transport, std::string to);
};

class PriceError
{
public:
  virtual QString getPriceError(int id);
};

class Result
{
public:
  virtual QString getResult(QString transport);
};

class Delivery : public Price, public PriceError, public Result
{
};

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:
  void on_calculate_button_clicked();

  void on_freight_button_clicked();

private:
  Ui::MainWindow* ui;
  Delivery delivery;
};
#endif  // MAINWINDOW_H
