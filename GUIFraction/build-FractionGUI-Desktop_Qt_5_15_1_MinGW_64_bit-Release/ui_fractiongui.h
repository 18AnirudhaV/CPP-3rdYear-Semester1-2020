/********************************************************************************
** Form generated from reading UI file 'fractiongui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRACTIONGUI_H
#define UI_FRACTIONGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FractionGUI
{
public:
    QWidget *centralwidget;
    QLabel *numeratorLabel;
    QLabel *denominatorLabel;
    QFrame *line;
    QLabel *fraction1Label;
    QLabel *fraction2Label;
    QFrame *line_2;
    QLabel *answerLabel;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *equalsPushButton;
    QComboBox *operatorComboBox;
    QLineEdit *numLE;
    QLineEdit *denLE;
    QLineEdit *denLE_2;
    QLineEdit *numLE_2;
    QTextBrowser *answerTB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FractionGUI)
    {
        if (FractionGUI->objectName().isEmpty())
            FractionGUI->setObjectName(QString::fromUtf8("FractionGUI"));
        FractionGUI->resize(707, 352);
        centralwidget = new QWidget(FractionGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        numeratorLabel = new QLabel(centralwidget);
        numeratorLabel->setObjectName(QString::fromUtf8("numeratorLabel"));
        numeratorLabel->setGeometry(QRect(20, 150, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        numeratorLabel->setFont(font);
        denominatorLabel = new QLabel(centralwidget);
        denominatorLabel->setObjectName(QString::fromUtf8("denominatorLabel"));
        denominatorLabel->setGeometry(QRect(20, 240, 121, 31));
        denominatorLabel->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 200, 111, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        fraction1Label = new QLabel(centralwidget);
        fraction1Label->setObjectName(QString::fromUtf8("fraction1Label"));
        fraction1Label->setGeometry(QRect(220, 100, 81, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        fraction1Label->setFont(font1);
        fraction2Label = new QLabel(centralwidget);
        fraction2Label->setObjectName(QString::fromUtf8("fraction2Label"));
        fraction2Label->setGeometry(QRect(480, 100, 81, 16));
        fraction2Label->setFont(font1);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(460, 200, 111, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        answerLabel = new QLabel(centralwidget);
        answerLabel->setObjectName(QString::fromUtf8("answerLabel"));
        answerLabel->setGeometry(QRect(20, 30, 121, 31));
        answerLabel->setFont(font);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(330, 100, 20, 191));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(440, 100, 20, 191));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        equalsPushButton = new QPushButton(centralwidget);
        equalsPushButton->setObjectName(QString::fromUtf8("equalsPushButton"));
        equalsPushButton->setGeometry(QRect(600, 190, 91, 31));
        operatorComboBox = new QComboBox(centralwidget);
        operatorComboBox->addItem(QString());
        operatorComboBox->addItem(QString());
        operatorComboBox->addItem(QString());
        operatorComboBox->addItem(QString());
        operatorComboBox->setObjectName(QString::fromUtf8("operatorComboBox"));
        operatorComboBox->setGeometry(QRect(360, 200, 69, 22));
        numLE = new QLineEdit(centralwidget);
        numLE->setObjectName(QString::fromUtf8("numLE"));
        numLE->setGeometry(QRect(200, 129, 113, 71));
        denLE = new QLineEdit(centralwidget);
        denLE->setObjectName(QString::fromUtf8("denLE"));
        denLE->setGeometry(QRect(200, 220, 113, 71));
        denLE_2 = new QLineEdit(centralwidget);
        denLE_2->setObjectName(QString::fromUtf8("denLE_2"));
        denLE_2->setGeometry(QRect(460, 221, 113, 71));
        numLE_2 = new QLineEdit(centralwidget);
        numLE_2->setObjectName(QString::fromUtf8("numLE_2"));
        numLE_2->setGeometry(QRect(460, 130, 113, 71));
        answerTB = new QTextBrowser(centralwidget);
        answerTB->setObjectName(QString::fromUtf8("answerTB"));
        answerTB->setGeometry(QRect(190, 10, 391, 71));
        FractionGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FractionGUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 707, 26));
        FractionGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(FractionGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FractionGUI->setStatusBar(statusbar);
        QWidget::setTabOrder(numLE, denLE);
        QWidget::setTabOrder(denLE, numLE_2);
        QWidget::setTabOrder(numLE_2, denLE_2);
        QWidget::setTabOrder(denLE_2, operatorComboBox);
        QWidget::setTabOrder(operatorComboBox, equalsPushButton);
        QWidget::setTabOrder(equalsPushButton, answerTB);

        retranslateUi(FractionGUI);

        operatorComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FractionGUI);
    } // setupUi

    void retranslateUi(QMainWindow *FractionGUI)
    {
        FractionGUI->setWindowTitle(QCoreApplication::translate("FractionGUI", "FractionGUI", nullptr));
        numeratorLabel->setText(QCoreApplication::translate("FractionGUI", "Numerator:", nullptr));
        denominatorLabel->setText(QCoreApplication::translate("FractionGUI", "Denominator:", nullptr));
        fraction1Label->setText(QCoreApplication::translate("FractionGUI", "Fraction 1", nullptr));
        fraction2Label->setText(QCoreApplication::translate("FractionGUI", "Fraction 2", nullptr));
        answerLabel->setText(QCoreApplication::translate("FractionGUI", "Answer:", nullptr));
        equalsPushButton->setText(QCoreApplication::translate("FractionGUI", "=", nullptr));
        operatorComboBox->setItemText(0, QCoreApplication::translate("FractionGUI", "+", nullptr));
        operatorComboBox->setItemText(1, QCoreApplication::translate("FractionGUI", "-", nullptr));
        operatorComboBox->setItemText(2, QCoreApplication::translate("FractionGUI", "*", nullptr));
        operatorComboBox->setItemText(3, QCoreApplication::translate("FractionGUI", "/", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FractionGUI: public Ui_FractionGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRACTIONGUI_H
