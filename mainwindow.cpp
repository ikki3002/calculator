#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_b_add_clicked()
{
    double num1 = ui->ip1->text().toDouble();
    double num2 = ui->ip2->text().toDouble();
    double result = num1 + num2;
    ui->out->setText(QString("Result: %1").arg(result));

}


void MainWindow::on_b_sub_clicked()
{
    double num1 = ui->ip1->text().toDouble();
    double num2 = ui->ip2->text().toDouble();
    double result = num1 - num2;
    ui->out->setText(QString("Result: %1").arg(result));
}


void MainWindow::on_b_mul_clicked()
{
    double num1 = ui->ip1->text().toDouble();
    double num2 = ui->ip2->text().toDouble();
    double result = num1 * num2;
    ui->out->setText(QString("Result: %1").arg(result));
}

