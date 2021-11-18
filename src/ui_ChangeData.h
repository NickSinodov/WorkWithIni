/********************************************************************************
** Form generated from reading UI file 'ChangeData.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDATA_H
#define UI_CHANGEDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeData
{
public:
    QGroupBox *groupBox;
    QLabel *label_11;
    QComboBox *comboBoxOldNameSection;
    QLabel *label_9;
    QLineEdit *lineEditNewNameSection;
    QPushButton *pushButtonChangeName;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QComboBox *comboBoxNameSectionForChangeComment;
    QLabel *label_10;
    QLineEdit *lineEditNewComment;
    QPushButton *pushButtonChangeComment;
    QGroupBox *groupBox_3;
    QLabel *label_13;
    QComboBox *comboBoxNameSectionForChangeKey;
    QLabel *label_14;
    QLineEdit *lineEditOldNameKey;
    QPushButton *pushButtonChangeKey;
    QLabel *label_15;
    QLineEdit *lineEditNewNameKey;
    QGroupBox *groupBox_4;
    QLabel *label_18;
    QComboBox *comboBoxNameSectionForChangeValue;
    QLabel *label_19;
    QLineEdit *lineEditNameKeyForChangeValue;
    QLabel *label_20;
    QLineEdit *lineEditOldvalue;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEditNewValue;
    QPushButton *pushButtonChangeValue;
    QGroupBox *groupBox_5;
    QLabel *label_23;
    QComboBox *comboBoxNameSectionForAddValue;
    QLabel *label_24;
    QLineEdit *lineEditNewKey;
    QLineEdit *lineEditNewValue_2;
    QLabel *label_25;
    QPushButton *pushButtonAddNewValue;
    QGroupBox *groupBox_7;
    QLabel *label_32;
    QComboBox *comboBoxNameSectionForAddComment;
    QLabel *label_34;
    QPushButton *pushButtonAddNewComment;
    QLineEdit *lineEditNewComment_2;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ChangeData)
    {
        if (ChangeData->objectName().isEmpty())
            ChangeData->setObjectName(QString::fromUtf8("ChangeData"));
        ChangeData->resize(626, 1055);
        groupBox = new QGroupBox(ChangeData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 290, 150));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 120, 16));
        comboBoxOldNameSection = new QComboBox(groupBox);
        comboBoxOldNameSection->setObjectName(QString::fromUtf8("comboBoxOldNameSection"));
        comboBoxOldNameSection->setGeometry(QRect(10, 40, 121, 22));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 70, 110, 16));
        lineEditNewNameSection = new QLineEdit(groupBox);
        lineEditNewNameSection->setObjectName(QString::fromUtf8("lineEditNewNameSection"));
        lineEditNewNameSection->setGeometry(QRect(10, 90, 119, 20));
        pushButtonChangeName = new QPushButton(ChangeData);
        pushButtonChangeName->setObjectName(QString::fromUtf8("pushButtonChangeName"));
        pushButtonChangeName->setGeometry(QRect(180, 100, 100, 23));
        groupBox_2 = new QGroupBox(ChangeData);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 490, 600, 150));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 120, 16));
        comboBoxNameSectionForChangeComment = new QComboBox(groupBox_2);
        comboBoxNameSectionForChangeComment->setObjectName(QString::fromUtf8("comboBoxNameSectionForChangeComment"));
        comboBoxNameSectionForChangeComment->setGeometry(QRect(10, 40, 121, 22));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 70, 220, 16));
        lineEditNewComment = new QLineEdit(groupBox_2);
        lineEditNewComment->setObjectName(QString::fromUtf8("lineEditNewComment"));
        lineEditNewComment->setGeometry(QRect(10, 90, 580, 20));
        pushButtonChangeComment = new QPushButton(groupBox_2);
        pushButtonChangeComment->setObjectName(QString::fromUtf8("pushButtonChangeComment"));
        pushButtonChangeComment->setGeometry(QRect(490, 120, 100, 23));
        groupBox_3 = new QGroupBox(ChangeData);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 290, 150));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 20, 120, 16));
        comboBoxNameSectionForChangeKey = new QComboBox(groupBox_3);
        comboBoxNameSectionForChangeKey->setObjectName(QString::fromUtf8("comboBoxNameSectionForChangeKey"));
        comboBoxNameSectionForChangeKey->setGeometry(QRect(10, 40, 121, 22));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 70, 140, 16));
        lineEditOldNameKey = new QLineEdit(groupBox_3);
        lineEditOldNameKey->setObjectName(QString::fromUtf8("lineEditOldNameKey"));
        lineEditOldNameKey->setGeometry(QRect(10, 90, 119, 20));
        pushButtonChangeKey = new QPushButton(groupBox_3);
        pushButtonChangeKey->setObjectName(QString::fromUtf8("pushButtonChangeKey"));
        pushButtonChangeKey->setGeometry(QRect(170, 120, 100, 23));
        label_15 = new QLabel(ChangeData);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(160, 240, 140, 16));
        lineEditNewNameKey = new QLineEdit(ChangeData);
        lineEditNewNameKey->setObjectName(QString::fromUtf8("lineEditNewNameKey"));
        lineEditNewNameKey->setGeometry(QRect(160, 260, 119, 20));
        groupBox_4 = new QGroupBox(ChangeData);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(320, 10, 290, 150));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 20, 120, 16));
        comboBoxNameSectionForChangeValue = new QComboBox(groupBox_4);
        comboBoxNameSectionForChangeValue->setObjectName(QString::fromUtf8("comboBoxNameSectionForChangeValue"));
        comboBoxNameSectionForChangeValue->setGeometry(QRect(10, 40, 121, 22));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(150, 20, 110, 16));
        lineEditNameKeyForChangeValue = new QLineEdit(groupBox_4);
        lineEditNameKeyForChangeValue->setObjectName(QString::fromUtf8("lineEditNameKeyForChangeValue"));
        lineEditNameKeyForChangeValue->setGeometry(QRect(150, 40, 119, 20));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(140, 20, 110, 16));
        lineEditOldvalue = new QLineEdit(groupBox_4);
        lineEditOldvalue->setObjectName(QString::fromUtf8("lineEditOldvalue"));
        lineEditOldvalue->setGeometry(QRect(10, 90, 119, 20));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 70, 110, 16));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(150, 70, 110, 16));
        lineEditNewValue = new QLineEdit(groupBox_4);
        lineEditNewValue->setObjectName(QString::fromUtf8("lineEditNewValue"));
        lineEditNewValue->setGeometry(QRect(150, 90, 119, 20));
        pushButtonChangeValue = new QPushButton(groupBox_4);
        pushButtonChangeValue->setObjectName(QString::fromUtf8("pushButtonChangeValue"));
        pushButtonChangeValue->setGeometry(QRect(170, 120, 100, 23));
        groupBox_5 = new QGroupBox(ChangeData);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(320, 170, 290, 150));
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 20, 120, 16));
        comboBoxNameSectionForAddValue = new QComboBox(groupBox_5);
        comboBoxNameSectionForAddValue->setObjectName(QString::fromUtf8("comboBoxNameSectionForAddValue"));
        comboBoxNameSectionForAddValue->setGeometry(QRect(10, 40, 121, 22));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 70, 110, 16));
        lineEditNewKey = new QLineEdit(groupBox_5);
        lineEditNewKey->setObjectName(QString::fromUtf8("lineEditNewKey"));
        lineEditNewKey->setGeometry(QRect(10, 90, 119, 20));
        lineEditNewValue_2 = new QLineEdit(groupBox_5);
        lineEditNewValue_2->setObjectName(QString::fromUtf8("lineEditNewValue_2"));
        lineEditNewValue_2->setGeometry(QRect(150, 90, 119, 20));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(150, 70, 110, 16));
        pushButtonAddNewValue = new QPushButton(groupBox_5);
        pushButtonAddNewValue->setObjectName(QString::fromUtf8("pushButtonAddNewValue"));
        pushButtonAddNewValue->setGeometry(QRect(170, 120, 100, 23));
        groupBox_7 = new QGroupBox(ChangeData);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 330, 600, 150));
        label_32 = new QLabel(groupBox_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 20, 120, 16));
        comboBoxNameSectionForAddComment = new QComboBox(groupBox_7);
        comboBoxNameSectionForAddComment->setObjectName(QString::fromUtf8("comboBoxNameSectionForAddComment"));
        comboBoxNameSectionForAddComment->setGeometry(QRect(10, 40, 121, 22));
        label_34 = new QLabel(groupBox_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 70, 131, 16));
        pushButtonAddNewComment = new QPushButton(groupBox_7);
        pushButtonAddNewComment->setObjectName(QString::fromUtf8("pushButtonAddNewComment"));
        pushButtonAddNewComment->setGeometry(QRect(490, 120, 100, 23));
        lineEditNewComment_2 = new QLineEdit(groupBox_7);
        lineEditNewComment_2->setObjectName(QString::fromUtf8("lineEditNewComment_2"));
        lineEditNewComment_2->setGeometry(QRect(10, 90, 580, 20));
        label = new QLabel(ChangeData);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 660, 141, 16));
        textBrowser = new QTextBrowser(ChangeData);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 680, 580, 370));

        retranslateUi(ChangeData);

        QMetaObject::connectSlotsByName(ChangeData);
    } // setupUi

    void retranslateUi(QWidget *ChangeData)
    {
        ChangeData->setWindowTitle(QCoreApplication::translate("ChangeData", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_11->setText(QCoreApplication::translate("ChangeData", "\320\241\321\202\320\260\321\200\320\276\320\265 \320\270\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("ChangeData", "\320\235\320\276\320\262\320\276\320\265 \320\270\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonChangeName->setText(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271 \320\262 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_12->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_10->setText(QCoreApplication::translate("ChangeData", "\320\235\320\276\320\262\321\213\320\271 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271 \320\262 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonChangeComment->setText(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\272\320\273\321\216\321\207 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_13->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_14->setText(QCoreApplication::translate("ChangeData", "\320\241\321\202\320\260\321\200\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\272\320\273\321\216\321\207\320\260", nullptr));
        pushButtonChangeKey->setText(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_15->setText(QCoreApplication::translate("ChangeData", "\320\235\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\272\320\273\321\216\321\207\320\260", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\262 \320\272\320\273\321\216\321\207\320\265", nullptr));
        label_18->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_19->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \320\272\320\273\321\216\321\207\320\260", nullptr));
        label_20->setText(QString());
        label_21->setText(QCoreApplication::translate("ChangeData", "\320\241\321\202\320\260\321\200\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_22->setText(QCoreApplication::translate("ChangeData", "\320\235\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        pushButtonChangeValue->setText(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ChangeData", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_23->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_24->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \320\272\320\273\321\216\321\207\320\260", nullptr));
        label_25->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        pushButtonAddNewValue->setText(QCoreApplication::translate("ChangeData", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("ChangeData", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271 \320\262 \321\201\320\265\320\272\321\206\320\270\321\216", nullptr));
        label_32->setText(QCoreApplication::translate("ChangeData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_34->setText(QCoreApplication::translate("ChangeData", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
        pushButtonAddNewComment->setText(QCoreApplication::translate("ChangeData", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("ChangeData", "\320\230\320\267\320\274\320\265\320\275\321\221\320\275\320\275\320\260\321\217 \321\201\320\265\320\272\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeData: public Ui_ChangeData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDATA_H
