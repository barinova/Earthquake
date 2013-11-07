#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "cgetdata.h"
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void addToTable(QList<resultData> result);
    int typeData();
    void clearTableRows();
    ~MainWindow();
public slots:
    void getData(QNetworkReply *reply);
private slots:
    void on_buttonGet_clicked();

private:
    Ui::MainWindow *ui;
    CGetData *data;
};

#endif // MAINWINDOW_H
