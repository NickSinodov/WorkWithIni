/********************************************************************************
** Form generated from reading UI file 'AddNewSection.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWSECTION_H
#define UI_ADDNEWSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewSection
{
public:
    QGroupBox *groupBox_2;
    QLineEdit *commentSection;
    QPushButton *pushButtonAddCommentSection;
    QPushButton *pushButtonWriteSectionInFile;
    QGroupBox *groupBox;
    QLineEdit *nameSection;
    QPushButton *pushButtonAddNameSection;
    QTextBrowser *showAddedSection;
    QLabel *label;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLineEdit *lineEditKey;
    QLineEdit *lineEditValue;
    QLabel *label_3;
    QPushButton *pushButtonAddInMap;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *AddNewSection)
    {
        if (AddNewSection->objectName().isEmpty())
            AddNewSection->setObjectName(QString::fromUtf8("AddNewSection"));
        AddNewSection->resize(710, 755);
        groupBox_2 = new QGroupBox(AddNewSection);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 10, 521, 90));
        commentSection = new QLineEdit(groupBox_2);
        commentSection->setObjectName(QString::fromUtf8("commentSection"));
        commentSection->setGeometry(QRect(10, 20, 501, 20));
        pushButtonAddCommentSection = new QPushButton(groupBox_2);
        pushButtonAddCommentSection->setObjectName(QString::fromUtf8("pushButtonAddCommentSection"));
        pushButtonAddCommentSection->setGeometry(QRect(430, 60, 75, 23));
        pushButtonWriteSectionInFile = new QPushButton(AddNewSection);
        pushButtonWriteSectionInFile->setObjectName(QString::fromUtf8("pushButtonWriteSectionInFile"));
        pushButtonWriteSectionInFile->setGeometry(QRect(420, 170, 160, 23));
        groupBox = new QGroupBox(AddNewSection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 160, 90));
        nameSection = new QLineEdit(groupBox);
        nameSection->setObjectName(QString::fromUtf8("nameSection"));
        nameSection->setGeometry(QRect(10, 20, 141, 20));
        pushButtonAddNameSection = new QPushButton(groupBox);
        pushButtonAddNameSection->setObjectName(QString::fromUtf8("pushButtonAddNameSection"));
        pushButtonAddNameSection->setGeometry(QRect(70, 60, 75, 23));
        showAddedSection = new QTextBrowser(AddNewSection);
        showAddedSection->setObjectName(QString::fromUtf8("showAddedSection"));
        showAddedSection->setGeometry(QRect(10, 220, 691, 520));
        label = new QLabel(AddNewSection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 200, 140, 13));
        groupBox_3 = new QGroupBox(AddNewSection);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 120, 380, 80));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 47, 13));
        lineEditKey = new QLineEdit(groupBox_3);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(50, 20, 120, 20));
        lineEditValue = new QLineEdit(groupBox_3);
        lineEditValue->setObjectName(QString::fromUtf8("lineEditValue"));
        lineEditValue->setGeometry(QRect(250, 20, 120, 20));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 20, 61, 16));
        pushButtonAddInMap = new QPushButton(groupBox_3);
        pushButtonAddInMap->setObjectName(QString::fromUtf8("pushButtonAddInMap"));
        pushButtonAddInMap->setGeometry(QRect(260, 50, 110, 23));
        pushButtonClose = new QPushButton(AddNewSection);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(610, 170, 75, 23));

        retranslateUi(AddNewSection);

        QMetaObject::connectSlotsByName(AddNewSection);
    } // setupUi

    void retranslateUi(QWidget *AddNewSection)
    {
        AddNewSection->setWindowTitle(QCoreApplication::translate("AddNewSection", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AddNewSection", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271 \320\272 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonAddCommentSection->setText(QCoreApplication::translate("AddNewSection", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButtonWriteSectionInFile->setText(QCoreApplication::translate("AddNewSection", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\201\320\265\320\272\321\206\320\270\321\216 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddNewSection", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonAddNameSection->setText(QCoreApplication::translate("AddNewSection", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddNewSection", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\320\260\321\217 \321\201\320\265\320\272\321\206\320\270\321\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AddNewSection", "\320\232\320\273\321\216\321\207 \320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("AddNewSection", "\320\232\320\273\321\216\321\207", nullptr));
        label_3->setText(QCoreApplication::translate("AddNewSection", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        pushButtonAddInMap->setText(QCoreApplication::translate("AddNewSection", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 ", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("AddNewSection", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewSection: public Ui_AddNewSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWSECTION_H
