#ifndef CHOOSEFILE_H
#define CHOOSEFILE_H

#include <QWidget>
#include "QFileSystemModel"
#include "StorageContentIni.h"
namespace Ui {
class ChooseFile;
}
class ChooseFile : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit ChooseFile(QWidget *parent = nullptr);
    ~ChooseFile();
signals:
    void done();
public:
    StorageContentIni *m_ptrContentIni;
    Ui::ChooseFile    *ui;
    QFileSystemModel  *model;
    QString            defaultPathFile = "D:\\C++\\Qt\\build-WorkWithIni3-Desktop_Qt_6_2_0_MinGW_64_bit-Debug\\test.ini";

private slots:
    void slotAnalyzeFile();
};

#endif // CHOOSEFILE_H
