/********************************************************************************
** Form generated from reading UI file 'ini.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INI_H
#define UI_INI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ini
{
public:
    QPushButton *pushButtonChooseFile;
    QGroupBox *groupBox;
    QPushButton *pushButtonShowAll;
    QPushButton *pushButtonShowRangeSections;
    QPushButton *pushButtonShowOneSection;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonChangeContentSection;
    QPushButton *pushButtonAddNewSection;
    QPushButton *pushButtonDeleteData;
    QTextBrowser *textBrowser;
    QPushButton *pushButtonCreateFile;

    void setupUi(QWidget *Ini)
    {
        if (Ini->objectName().isEmpty())
            Ini->setObjectName(QString::fromUtf8("Ini"));
        Ini->resize(800, 961);
        pushButtonChooseFile = new QPushButton(Ini);
        pushButtonChooseFile->setObjectName(QString::fromUtf8("pushButtonChooseFile"));
        pushButtonChooseFile->setGeometry(QRect(10, 10, 380, 51));
        groupBox = new QGroupBox(Ini);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 380, 130));
        pushButtonShowAll = new QPushButton(groupBox);
        pushButtonShowAll->setObjectName(QString::fromUtf8("pushButtonShowAll"));
        pushButtonShowAll->setGeometry(QRect(10, 20, 360, 40));
        pushButtonShowRangeSections = new QPushButton(groupBox);
        pushButtonShowRangeSections->setObjectName(QString::fromUtf8("pushButtonShowRangeSections"));
        pushButtonShowRangeSections->setGeometry(QRect(10, 70, 170, 40));
        pushButtonShowOneSection = new QPushButton(groupBox);
        pushButtonShowOneSection->setObjectName(QString::fromUtf8("pushButtonShowOneSection"));
        pushButtonShowOneSection->setGeometry(QRect(200, 70, 170, 40));
        groupBox_2 = new QGroupBox(Ini);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(410, 70, 380, 130));
        pushButtonChangeContentSection = new QPushButton(groupBox_2);
        pushButtonChangeContentSection->setObjectName(QString::fromUtf8("pushButtonChangeContentSection"));
        pushButtonChangeContentSection->setGeometry(QRect(10, 70, 170, 40));
        pushButtonAddNewSection = new QPushButton(groupBox_2);
        pushButtonAddNewSection->setObjectName(QString::fromUtf8("pushButtonAddNewSection"));
        pushButtonAddNewSection->setGeometry(QRect(10, 20, 360, 40));
        pushButtonDeleteData = new QPushButton(groupBox_2);
        pushButtonDeleteData->setObjectName(QString::fromUtf8("pushButtonDeleteData"));
        pushButtonDeleteData->setGeometry(QRect(200, 70, 170, 40));
        textBrowser = new QTextBrowser(Ini);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 210, 780, 730));
        pushButtonCreateFile = new QPushButton(Ini);
        pushButtonCreateFile->setObjectName(QString::fromUtf8("pushButtonCreateFile"));
        pushButtonCreateFile->setGeometry(QRect(410, 10, 380, 51));

        retranslateUi(Ini);

        QMetaObject::connectSlotsByName(Ini);
    } // setupUi

    void retranslateUi(QWidget *Ini)
    {
        Ini->setWindowTitle(QCoreApplication::translate("Ini", "Ini", nullptr));
        pushButtonChooseFile->setText(QCoreApplication::translate("Ini", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Ini", "\320\224\320\265\320\274\320\276\320\275\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButtonShowAll->setText(QCoreApplication::translate("Ini", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265 \320\262\321\201\320\265\320\263\320\276\n"
" ini-\321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButtonShowRangeSections->setText(QCoreApplication::translate("Ini", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \321\201\320\265\320\272\321\206\320\270\320\271", nullptr));
        pushButtonShowOneSection->setText(QCoreApplication::translate("Ini", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\320\264\320\275\321\203 \321\201\320\265\320\272\321\206\320\270\321\216", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Ini", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\264\320\260\320\275\320\275\321\213\320\274\320\270", nullptr));
        pushButtonChangeContentSection->setText(QCoreApplication::translate("Ini", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonAddNewSection->setText(QCoreApplication::translate("Ini", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \321\201\320\265\320\272\321\206\320\270\321\216 ", nullptr));
        pushButtonDeleteData->setText(QCoreApplication::translate("Ini", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButtonCreateFile->setText(QCoreApplication::translate("Ini", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ini: public Ui_Ini {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INI_H
