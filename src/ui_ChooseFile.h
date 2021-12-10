/********************************************************************************
** Form generated from reading UI file 'ChooseFile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFILE_H
#define UI_CHOOSEFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseFile
{
public:
    QTreeView *treeView;
    QPushButton *pushButtonChoose;
    QPlainTextEdit *plainTextEdit;
    QProgressBar *progressBar;

    void setupUi(QWidget *ChooseFile)
    {
        if (ChooseFile->objectName().isEmpty())
            ChooseFile->setObjectName(QString::fromUtf8("ChooseFile"));
        ChooseFile->resize(1085, 482);
        treeView = new QTreeView(ChooseFile);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 10, 511, 451));
        pushButtonChoose = new QPushButton(ChooseFile);
        pushButtonChoose->setObjectName(QString::fromUtf8("pushButtonChoose"));
        pushButtonChoose->setGeometry(QRect(970, 440, 101, 23));
        plainTextEdit = new QPlainTextEdit(ChooseFile);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(550, 10, 521, 310));
        progressBar = new QProgressBar(ChooseFile);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(550, 340, 521, 30));
        progressBar->setValue(24);

        retranslateUi(ChooseFile);

        QMetaObject::connectSlotsByName(ChooseFile);
    } // setupUi

    void retranslateUi(QWidget *ChooseFile)
    {
        ChooseFile->setWindowTitle(QCoreApplication::translate("ChooseFile", "Form", nullptr));
        pushButtonChoose->setText(QCoreApplication::translate("ChooseFile", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseFile: public Ui_ChooseFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFILE_H
