#ifndef PATHNEWFILE_H
#define PATHNEWFILE_H

#include <QWidget>
#include "QFileSystemModel"
#include "QMessageBox"
#include "QFile"
#include "StorageContentIni.h"
namespace Ui {
class PathNewFile;
}

class PathNewFile : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit PathNewFile(QWidget *parent = nullptr);
    ~PathNewFile();

private:

    Ui::PathNewFile   *ui;
    QFileSystemModel  *model;
    StorageContentIni *m_ptrContentIni;
    QString            m_defaultPathFile = "D:\\C++\\Qt\\build-WorkWithIni3-Desktop_Qt_6_2_0_MinGW_64_bit-Debug\\";
    QString            m_nameFile;
    QString            m_pathNewFile;
private slots:
    void slotChoosePath();
signals:
    void emptyFileCreated();
};

#endif // PATHNEWFILE_H
