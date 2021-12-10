/********************************************************************************
** Form generated from reading UI file 'ShowOneSection.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWONESECTION_H
#define UI_SHOWONESECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowOneSection
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButtonChooseSection;
    QGroupBox *groupBox;
    QComboBox *comboBoxSection;

    void setupUi(QWidget *ShowOneSection)
    {
        if (ShowOneSection->objectName().isEmpty())
            ShowOneSection->setObjectName(QString::fromUtf8("ShowOneSection"));
        ShowOneSection->resize(392, 674);
        textBrowser = new QTextBrowser(ShowOneSection);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 100, 371, 561));
        pushButtonChooseSection = new QPushButton(ShowOneSection);
        pushButtonChooseSection->setObjectName(QString::fromUtf8("pushButtonChooseSection"));
        pushButtonChooseSection->setGeometry(QRect(300, 70, 75, 23));
        groupBox = new QGroupBox(ShowOneSection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 211, 71));
        comboBoxSection = new QComboBox(groupBox);
        comboBoxSection->setObjectName(QString::fromUtf8("comboBoxSection"));
        comboBoxSection->setGeometry(QRect(20, 30, 171, 22));

        retranslateUi(ShowOneSection);

        QMetaObject::connectSlotsByName(ShowOneSection);
    } // setupUi

    void retranslateUi(QWidget *ShowOneSection)
    {
        ShowOneSection->setWindowTitle(QCoreApplication::translate("ShowOneSection", "Form", nullptr));
        pushButtonChooseSection->setText(QCoreApplication::translate("ShowOneSection", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShowOneSection", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowOneSection: public Ui_ShowOneSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWONESECTION_H
