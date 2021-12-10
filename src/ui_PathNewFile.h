/********************************************************************************
** Form generated from reading UI file 'PathNewFile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHNEWFILE_H
#define UI_PATHNEWFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PathNewFile
{
public:
    QTreeView *treeView;
    QLabel *label;
    QLineEdit *lineEditNameNewFile;
    QPushButton *pushButtonChoosePath;

    void setupUi(QWidget *PathNewFile)
    {
        if (PathNewFile->objectName().isEmpty())
            PathNewFile->setObjectName(QString::fromUtf8("PathNewFile"));
        PathNewFile->resize(821, 628);
        treeView = new QTreeView(PathNewFile);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 10, 800, 530));
        label = new QLabel(PathNewFile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 550, 110, 13));
        lineEditNameNewFile = new QLineEdit(PathNewFile);
        lineEditNameNewFile->setObjectName(QString::fromUtf8("lineEditNameNewFile"));
        lineEditNameNewFile->setGeometry(QRect(130, 550, 680, 20));
        pushButtonChoosePath = new QPushButton(PathNewFile);
        pushButtonChoosePath->setObjectName(QString::fromUtf8("pushButtonChoosePath"));
        pushButtonChoosePath->setGeometry(QRect(720, 590, 90, 23));

        retranslateUi(PathNewFile);

        QMetaObject::connectSlotsByName(PathNewFile);
    } // setupUi

    void retranslateUi(QWidget *PathNewFile)
    {
        PathNewFile->setWindowTitle(QCoreApplication::translate("PathNewFile", "Form", nullptr));
        label->setText(QCoreApplication::translate("PathNewFile", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButtonChoosePath->setText(QCoreApplication::translate("PathNewFile", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PathNewFile: public Ui_PathNewFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHNEWFILE_H
