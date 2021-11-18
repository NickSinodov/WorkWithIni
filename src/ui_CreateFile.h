/********************************************************************************
** Form generated from reading UI file 'CreateFile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEFILE_H
#define UI_CREATEFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateFile
{
public:
    QPushButton *pushButtonCreateFile;
    QLineEdit *lineEditFilePath;
    QLabel *label;
    QToolButton *toolButtonChooseFilePath;

    void setupUi(QWidget *CreateFile)
    {
        if (CreateFile->objectName().isEmpty())
            CreateFile->setObjectName(QString::fromUtf8("CreateFile"));
        CreateFile->resize(533, 85);
        pushButtonCreateFile = new QPushButton(CreateFile);
        pushButtonCreateFile->setObjectName(QString::fromUtf8("pushButtonCreateFile"));
        pushButtonCreateFile->setGeometry(QRect(430, 50, 90, 23));
        lineEditFilePath = new QLineEdit(CreateFile);
        lineEditFilePath->setObjectName(QString::fromUtf8("lineEditFilePath"));
        lineEditFilePath->setGeometry(QRect(90, 20, 390, 20));
        label = new QLabel(CreateFile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 100, 13));
        toolButtonChooseFilePath = new QToolButton(CreateFile);
        toolButtonChooseFilePath->setObjectName(QString::fromUtf8("toolButtonChooseFilePath"));
        toolButtonChooseFilePath->setGeometry(QRect(490, 20, 30, 19));

        retranslateUi(CreateFile);

        QMetaObject::connectSlotsByName(CreateFile);
    } // setupUi

    void retranslateUi(QWidget *CreateFile)
    {
        CreateFile->setWindowTitle(QCoreApplication::translate("CreateFile", "Form", nullptr));
        pushButtonCreateFile->setText(QCoreApplication::translate("CreateFile", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        lineEditFilePath->setText(QString());
        label->setText(QCoreApplication::translate("CreateFile", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203", nullptr));
        toolButtonChooseFilePath->setText(QCoreApplication::translate("CreateFile", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateFile: public Ui_CreateFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEFILE_H
