#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "delivery.h"
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
  Delivery DeliveryLogic;

private slots:
  void on_calculatePricaPushButton_clicked();
  void checkUserInput();
  void on_freightPushButton_clicked();

private:
  Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
