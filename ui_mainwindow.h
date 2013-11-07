/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 7. Nov 01:45:40 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buttonGet;
    QTableWidget *tableWidgetResults;
    QRadioButton *radioButtonHour;
    QRadioButton *radioButtonDay;
    QRadioButton *radioButtonWeek;
    QRadioButton *radioButtonMonth;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(553, 387);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/CrossingWaves/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonGet = new QPushButton(centralWidget);
        buttonGet->setObjectName(QString::fromUtf8("buttonGet"));
        buttonGet->setGeometry(QRect(380, 20, 75, 23));
        tableWidgetResults = new QTableWidget(centralWidget);
        if (tableWidgetResults->columnCount() < 3)
            tableWidgetResults->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetResults->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetResults->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetResults->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetResults->setObjectName(QString::fromUtf8("tableWidgetResults"));
        tableWidgetResults->setGeometry(QRect(20, 20, 321, 311));
        radioButtonHour = new QRadioButton(centralWidget);
        radioButtonHour->setObjectName(QString::fromUtf8("radioButtonHour"));
        radioButtonHour->setGeometry(QRect(380, 70, 82, 17));
        radioButtonDay = new QRadioButton(centralWidget);
        radioButtonDay->setObjectName(QString::fromUtf8("radioButtonDay"));
        radioButtonDay->setGeometry(QRect(380, 100, 82, 17));
        radioButtonWeek = new QRadioButton(centralWidget);
        radioButtonWeek->setObjectName(QString::fromUtf8("radioButtonWeek"));
        radioButtonWeek->setGeometry(QRect(380, 130, 82, 17));
        radioButtonMonth = new QRadioButton(centralWidget);
        radioButtonMonth->setObjectName(QString::fromUtf8("radioButtonMonth"));
        radioButtonMonth->setGeometry(QRect(380, 160, 82, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 553, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Earthquake", 0, QApplication::UnicodeUTF8));
        buttonGet->setText(QApplication::translate("MainWindow", "Get Data", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetResults->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "longitude", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetResults->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "latitude", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetResults->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "magnitude", 0, QApplication::UnicodeUTF8));
        radioButtonHour->setText(QApplication::translate("MainWindow", "Past Hour", 0, QApplication::UnicodeUTF8));
        radioButtonDay->setText(QApplication::translate("MainWindow", "Past Day", 0, QApplication::UnicodeUTF8));
        radioButtonWeek->setText(QApplication::translate("MainWindow", "Past 7 Days", 0, QApplication::UnicodeUTF8));
        radioButtonMonth->setText(QApplication::translate("MainWindow", "Past 30 Days", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
