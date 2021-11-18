/********************************************************************************
** Form generated from reading UI file 'DeleteData.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDATA_H
#define UI_DELETEDATA_H

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

class Ui_DeleteData
{
public:
    QGroupBox *RangeSections;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxFromRemovableSection;
    QComboBox *comboBoxToRemovableSection;
    QPushButton *pushButtonDeleteRangeSections;
    QGroupBox *Section;
    QComboBox *comboBoxRemovableSection;
    QLabel *label_11;
    QPushButton *pushButtonDeleteOneSection;
    QGroupBox *Key;
    QLabel *label_8;
    QComboBox *comboBoxNameSectionDeleteKey;
    QLabel *label_9;
    QPushButton *pushButtonDeleteKey;
    QLineEdit *lineEditRemovableKey;
    QGroupBox *ValueInKey;
    QComboBox *comboBoxNameSectionForDeleteValue;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButtonDeleteValueInKey;
    QLineEdit *lineEditNameKeyForDeleteValue;
    QLineEdit *lineEditRemovableValue;
    QGroupBox *Comment;
    QLabel *label_15;
    QComboBox *comboBoxNameSectionForDeleteComment;
    QPushButton *pushButtonDeleteComment;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButtonDeleteData;
    QPushButton *pushButtonDeleteFile;

    void setupUi(QWidget *DeleteData)
    {
        if (DeleteData->objectName().isEmpty())
            DeleteData->setObjectName(QString::fromUtf8("DeleteData"));
        DeleteData->resize(478, 982);
        RangeSections = new QGroupBox(DeleteData);
        RangeSections->setObjectName(QString::fromUtf8("RangeSections"));
        RangeSections->setGeometry(QRect(10, 10, 291, 101));
        label = new QLabel(RangeSections);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 47, 13));
        label_2 = new QLabel(RangeSections);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 20, 47, 13));
        comboBoxFromRemovableSection = new QComboBox(RangeSections);
        comboBoxFromRemovableSection->setObjectName(QString::fromUtf8("comboBoxFromRemovableSection"));
        comboBoxFromRemovableSection->setGeometry(QRect(10, 40, 121, 22));
        comboBoxToRemovableSection = new QComboBox(RangeSections);
        comboBoxToRemovableSection->setObjectName(QString::fromUtf8("comboBoxToRemovableSection"));
        comboBoxToRemovableSection->setGeometry(QRect(150, 40, 121, 22));
        pushButtonDeleteRangeSections = new QPushButton(RangeSections);
        pushButtonDeleteRangeSections->setObjectName(QString::fromUtf8("pushButtonDeleteRangeSections"));
        pushButtonDeleteRangeSections->setGeometry(QRect(190, 70, 81, 23));
        Section = new QGroupBox(DeleteData);
        Section->setObjectName(QString::fromUtf8("Section"));
        Section->setGeometry(QRect(310, 10, 161, 101));
        comboBoxRemovableSection = new QComboBox(Section);
        comboBoxRemovableSection->setObjectName(QString::fromUtf8("comboBoxRemovableSection"));
        comboBoxRemovableSection->setGeometry(QRect(10, 40, 121, 22));
        label_11 = new QLabel(Section);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 71, 16));
        pushButtonDeleteOneSection = new QPushButton(Section);
        pushButtonDeleteOneSection->setObjectName(QString::fromUtf8("pushButtonDeleteOneSection"));
        pushButtonDeleteOneSection->setGeometry(QRect(70, 70, 81, 23));
        Key = new QGroupBox(DeleteData);
        Key->setObjectName(QString::fromUtf8("Key"));
        Key->setGeometry(QRect(310, 110, 161, 160));
        label_8 = new QLabel(Key);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 71, 16));
        comboBoxNameSectionDeleteKey = new QComboBox(Key);
        comboBoxNameSectionDeleteKey->setObjectName(QString::fromUtf8("comboBoxNameSectionDeleteKey"));
        comboBoxNameSectionDeleteKey->setGeometry(QRect(10, 40, 121, 22));
        label_9 = new QLabel(Key);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 70, 70, 16));
        pushButtonDeleteKey = new QPushButton(Key);
        pushButtonDeleteKey->setObjectName(QString::fromUtf8("pushButtonDeleteKey"));
        pushButtonDeleteKey->setGeometry(QRect(70, 130, 81, 23));
        lineEditRemovableKey = new QLineEdit(Key);
        lineEditRemovableKey->setObjectName(QString::fromUtf8("lineEditRemovableKey"));
        lineEditRemovableKey->setGeometry(QRect(10, 90, 120, 20));
        ValueInKey = new QGroupBox(DeleteData);
        ValueInKey->setObjectName(QString::fromUtf8("ValueInKey"));
        ValueInKey->setGeometry(QRect(10, 110, 291, 160));
        comboBoxNameSectionForDeleteValue = new QComboBox(ValueInKey);
        comboBoxNameSectionForDeleteValue->setObjectName(QString::fromUtf8("comboBoxNameSectionForDeleteValue"));
        comboBoxNameSectionForDeleteValue->setGeometry(QRect(10, 40, 121, 22));
        label_10 = new QLabel(ValueInKey);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 20, 71, 16));
        label_12 = new QLabel(ValueInKey);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 70, 71, 16));
        label_13 = new QLabel(ValueInKey);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(150, 70, 61, 16));
        pushButtonDeleteValueInKey = new QPushButton(ValueInKey);
        pushButtonDeleteValueInKey->setObjectName(QString::fromUtf8("pushButtonDeleteValueInKey"));
        pushButtonDeleteValueInKey->setGeometry(QRect(200, 130, 81, 23));
        lineEditNameKeyForDeleteValue = new QLineEdit(ValueInKey);
        lineEditNameKeyForDeleteValue->setObjectName(QString::fromUtf8("lineEditNameKeyForDeleteValue"));
        lineEditNameKeyForDeleteValue->setGeometry(QRect(10, 90, 121, 20));
        lineEditRemovableValue = new QLineEdit(ValueInKey);
        lineEditRemovableValue->setObjectName(QString::fromUtf8("lineEditRemovableValue"));
        lineEditRemovableValue->setGeometry(QRect(150, 90, 121, 20));
        Comment = new QGroupBox(DeleteData);
        Comment->setObjectName(QString::fromUtf8("Comment"));
        Comment->setGeometry(QRect(10, 270, 161, 100));
        label_15 = new QLabel(Comment);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 20, 71, 16));
        comboBoxNameSectionForDeleteComment = new QComboBox(Comment);
        comboBoxNameSectionForDeleteComment->setObjectName(QString::fromUtf8("comboBoxNameSectionForDeleteComment"));
        comboBoxNameSectionForDeleteComment->setGeometry(QRect(10, 40, 121, 22));
        pushButtonDeleteComment = new QPushButton(Comment);
        pushButtonDeleteComment->setObjectName(QString::fromUtf8("pushButtonDeleteComment"));
        pushButtonDeleteComment->setGeometry(QRect(70, 70, 81, 23));
        label_3 = new QLabel(DeleteData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 380, 181, 16));
        textBrowser = new QTextBrowser(DeleteData);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 400, 460, 570));
        pushButtonDeleteData = new QPushButton(DeleteData);
        pushButtonDeleteData->setObjectName(QString::fromUtf8("pushButtonDeleteData"));
        pushButtonDeleteData->setGeometry(QRect(310, 280, 160, 40));
        pushButtonDeleteFile = new QPushButton(DeleteData);
        pushButtonDeleteFile->setObjectName(QString::fromUtf8("pushButtonDeleteFile"));
        pushButtonDeleteFile->setGeometry(QRect(310, 330, 160, 30));

        retranslateUi(DeleteData);

        QMetaObject::connectSlotsByName(DeleteData);
    } // setupUi

    void retranslateUi(QWidget *DeleteData)
    {
        DeleteData->setWindowTitle(QCoreApplication::translate("DeleteData", "Form", nullptr));
        RangeSections->setTitle(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \321\201\320\265\320\272\321\206\320\270\320\271", nullptr));
        label->setText(QCoreApplication::translate("DeleteData", "\320\241", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteData", "\320\237\320\276", nullptr));
        pushButtonDeleteRangeSections->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        Section->setTitle(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\265\320\272\321\206\320\270\321\216", nullptr));
        label_11->setText(QCoreApplication::translate("DeleteData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonDeleteOneSection->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        Key->setTitle(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\273\321\216\321\207", nullptr));
        label_8->setText(QCoreApplication::translate("DeleteData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("DeleteData", "\320\230\320\274\321\217 \320\272\320\273\321\216\321\207\320\260", nullptr));
        pushButtonDeleteKey->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        ValueInKey->setTitle(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\276\320\264\320\275\320\276 \320\270\320\267 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\272\320\273\321\216\321\207\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("DeleteData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_12->setText(QCoreApplication::translate("DeleteData", "\320\230\320\274\321\217 \320\272\320\273\321\216\321\207\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("DeleteData", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        pushButtonDeleteValueInKey->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        Comment->setTitle(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
        label_15->setText(QCoreApplication::translate("DeleteData", "\320\230\320\274\321\217 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));
        pushButtonDeleteComment->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        label_3->setText(QCoreApplication::translate("DeleteData", "\320\232\320\276\320\275\321\202\320\265\320\275\321\202 \321\201\320\265\320\272\321\206\320\270\320\270 \320\277\320\276\321\201\320\273\320\265 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217", nullptr));
        pushButtonDeleteData->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\264\320\260\320\275\320\275\321\213\320\265\n"
" \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButtonDeleteFile->setText(QCoreApplication::translate("DeleteData", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214  \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteData: public Ui_DeleteData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDATA_H
