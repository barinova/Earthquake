#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    data = new CGetData();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getData(QNetworkReply *reply)
{
    data->getInfoFromURL(reply);

    if(data != NULL)
    {
        addToTable(data->resultList);
    }
    else
    {
        QMessageBox::warning(0,"Warning", "Check your connection to the Internet");
    }
}

void MainWindow::on_buttonGet_clicked()
{
    data->networkConnection(this, typeData());
}

void MainWindow::addToTable(QList<resultData> result)
{
    clearTableRows();
    for(int i(0); i < result.size(); i++)
    {
        ui->tableWidgetResults->insertRow(i);
        ui->tableWidgetResults->setItem(i,0,new QTableWidgetItem(result.at(i).latitude));
        ui->tableWidgetResults->setItem(i,1,new QTableWidgetItem(result.at(i).longitude));
        ui->tableWidgetResults->setItem(i,2,new QTableWidgetItem(result.at(i).magnitude));
    }
}

int MainWindow::typeData()
{
    if(ui->radioButtonHour->isChecked())
        return 0;
    if(ui->radioButtonDay->isChecked())
        return 1;
    if(ui->radioButtonWeek->isChecked())
        return 2;
    if(ui->radioButtonMonth->isChecked())
        return 3;
}

void MainWindow::clearTableRows()
{
    while (ui->tableWidgetResults->rowCount() > 0)
    {
        ui->tableWidgetResults->removeRow(0);
    }
}
