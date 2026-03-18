/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *ip1;
    QLineEdit *ip2;
    QPushButton *b_add;
    QPushButton *b_sub;
    QLabel *out;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *b_mul;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #28a745;\n"
"    color: white;\n"
"    border: 2px solid #28a745;\n"
"    border-radius: 8px;\n"
"    padding: 6px 14px;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #218838;\n"
"    border: 2px solid #1e7e34;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e7e34;\n"
"    border: 2px solid #1c7430;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid #cccccc;\n"
"    border-radius: 6px;\n"
"    padding: 4px 8px;\n"
"    font-size: 14px;\n"
"    background-color: #ffffff;\n"
"    color: black;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #28a745;\n"
"    background-color: #f0fff0;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: #f0fff0;\n"
"}\n"
"QLabel:focus {\n"
"    background-color: #218838;\n"
"    border: 2px solid #1e7e34;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ip1 = new QLineEdit(centralwidget);
        ip1->setObjectName("ip1");
        ip1->setGeometry(QRect(11, 165, 125, 28));
        ip2 = new QLineEdit(centralwidget);
        ip2->setObjectName("ip2");
        ip2->setGeometry(QRect(404, 165, 125, 28));
        b_add = new QPushButton(centralwidget);
        b_add->setObjectName("b_add");
        b_add->setGeometry(QRect(11, 354, 80, 29));
        b_sub = new QPushButton(centralwidget);
        b_sub->setObjectName("b_sub");
        b_sub->setGeometry(QRect(404, 354, 80, 29));
        out = new QLabel(centralwidget);
        out->setObjectName("out");
        out->setGeometry(QRect(250, 60, 171, 41));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 210, 104, 85));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(420, 210, 104, 85));
        b_mul = new QPushButton(centralwidget);
        b_mul->setObjectName("b_mul");
        b_mul->setGeometry(QRect(220, 460, 191, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ip1->setText(QString());
        ip2->setText(QString());
        b_add->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        b_sub->setText(QCoreApplication::translate("MainWindow", "sub", nullptr));
        out->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">input 1</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">input 2</span></p></body></html>", nullptr));
        b_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
