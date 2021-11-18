#ifndef CHANGEDATA_H
#define CHANGEDATA_H

#include <QWidget>
#include "StorageContentIni.h"
#include "QMessageBox"
namespace Ui {
class ChangeData;
}

class ChangeData : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit ChangeData(QWidget *parent = nullptr);
    ~ChangeData();
    void getRange();
private:
    StorageContentIni *m_ptrContentIni;
    QVector<QString>   m_rangeSections;
    Ui::ChangeData    *ui;
private slots:
    void slotChangeName();
    void slotChangeComment();
    void slotChangeKey();
    void slotChangeValue();
    void slotAddValueInKey();
    void slotAddNewComment();
};

#endif // CHANGEDATA_H
