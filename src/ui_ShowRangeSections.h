/********************************************************************************
** Form generated from reading UI file 'ShowRangeSections.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWRANGESECTIONS_H
#define UI_SHOWRANGESECTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowRangeSections
{
public:
    QTextBrowser *textBrowser;
    QGroupBox *groupBox;
    QComboBox *comboBoxFromSection;
    QComboBox *comboBoxToSection;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButtonChooseRange;

    void setupUi(QWidget *ShowRangeSections)
    {
        if (ShowRangeSections->objectName().isEmpty())
            ShowRangeSections->setObjectName(QString::fromUtf8("ShowRangeSections"));
        ShowRangeSections->resize(463, 614);
        textBrowser = new QTextBrowser(ShowRangeSections);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 80, 441, 521));
        groupBox = new QGroupBox(ShowRangeSections);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 341, 71));
        comboBoxFromSection = new QComboBox(groupBox);
        comboBoxFromSection->setObjectName(QString::fromUtf8("comboBoxFromSection"));
        comboBoxFromSection->setGeometry(QRect(10, 40, 151, 22));
        comboBoxToSection = new QComboBox(groupBox);
        comboBoxToSection->setObjectName(QString::fromUtf8("comboBoxToSection"));
        comboBoxToSection->setGeometry(QRect(180, 40, 151, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 20, 47, 13));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 47, 13));
        pushButtonChooseRange = new QPushButton(ShowRangeSections);
        pushButtonChooseRange->setObjectName(QString::fromUtf8("pushButtonChooseRange"));
        pushButtonChooseRange->setGeometry(QRect(370, 50, 75, 23));

        retranslateUi(ShowRangeSections);

        QMetaObject::connectSlotsByName(ShowRangeSections);
    } // setupUi

    void retranslateUi(QWidget *ShowRangeSections)
    {
        ShowRangeSections->setWindowTitle(QCoreApplication::translate("ShowRangeSections", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShowRangeSections", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \321\201\320\265\320\272\321\206\320\270\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("ShowRangeSections", "\320\237\320\276", nullptr));
        label->setText(QCoreApplication::translate("ShowRangeSections", "\320\241", nullptr));
        pushButtonChooseRange->setText(QCoreApplication::translate("ShowRangeSections", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowRangeSections: public Ui_ShowRangeSections {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWRANGESECTIONS_H
