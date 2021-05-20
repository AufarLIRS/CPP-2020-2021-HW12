#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  std::vector<int> r_r{0,0,0};
  std::vector<int> r_u{5000, 10000, 2000};
  std::vector<int> r_m{2000, 3000, 500};
  std::vector<int> u_r{4000, 9000, 1500};
  std::vector<int> u_m{3000, 4000, 1000};
  std::vector<int> m_r{2000, 1400, 800};
  std::vector<int> m_u{10000, 4000, 2000};
  std::vector<std::vector<int>> r{r_r, r_u, r_m};
  std::vector<std::vector<int>> u{u_r, r_r, u_m};
  std::vector<std::vector<int>> m{m_r, m_u, r_r};
  route.push_back(r);
  route.push_back(u);
  route.push_back(m);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->label_2->setText(QString::number(route[ui->comboBox->currentIndex()][ui->comboBox_3->currentIndex()][ui->comboBox_2->currentIndex()]));

}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->comboBox_2->currentIndex() == 0) {
        ui->label_3->setText("Plane is ready");
    }
    else if(ui->comboBox_2->currentIndex() == 1) {
        ui->label_3->setText("Ship is ready");
    }
    else
        ui->label_3->setText("Truck is ready");
}
