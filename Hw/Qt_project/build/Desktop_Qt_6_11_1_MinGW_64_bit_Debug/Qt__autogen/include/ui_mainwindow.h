/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QFrame *frame;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1103, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 310, 291, 201));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border-radius: 15px;\n"
"border: 1px solid rgba(255, 255, 255, 200);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(840, 330, 231, 171));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgba(255, 255, 255, 220);\n"
"    border: 1px solid rgba(200, 200, 200, 150);\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"/* \354\275\244\353\263\264\353\260\225\354\212\244 \354\212\244\355\203\200\354\235\274 */\n"
"QComboBox {\n"
"    border: 1px solid #bdc3c7;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    background-color: white;\n"
"    selection-background-color: #002d72;\n"
"}\n"
"\n"
"/* \353\262\204\355\212\274 \354\212\244\355\203\200\354\235\274 */\n"
"QPushButton {\n"
"    background-color: #002d72;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0040a0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001a4d;\n"
"}\n"
"\n"
"/* \353\235\274\353\262\250(\352\270\200\354\224\250) \354\212\244\355\203\200\354\235\274 */\n"
"QLabel {\n"
"    font-weight: bold;\n"
"    color: #333;\n"
"}\n"
"\n"
"\n"
"background-color: rgba(255, 25"
                        "5, 255, 120); /* 120\354\235\200 \355\210\254\353\252\205\353\217\204. 0~255 \354\202\254\354\235\264\354\227\220\354\204\234 \354\241\260\354\240\225 */\n"
"border-radius: 15px;\n"
"border: 1px solid rgba(255, 255, 255, 180);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 40, 161, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 110, 161, 31));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 111, 21));
        label->setFrameShape(QFrame::Shape::NoFrame);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1103, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\354\240\204\353\266\201\353\214\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\353\215\225\354\247\204\352\263\265\354\233\220", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\354\240\204\354\243\274 \352\260\235\354\202\254", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\354\213\240\354\213\234\352\260\200\354\247\200", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\354\227\220\354\275\224\354\213\234\355\213\260", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\354\240\204\354\243\274\354\227\255", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\354\212\244\355\204\260\353\224\224\354\271\264\355\216\230 \354\260\276\352\270\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\355\230\204\354\236\254 \354\234\204\354\271\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
