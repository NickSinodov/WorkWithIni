#ifndef DELETEDATA_H
#define DELETEDATA_H

#include <QWidget>
#include "StorageContentIni.h"
#include "QMessageBox"
namespace Ui {
class DeleteData;
}

class DeleteData : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit DeleteData(QWidget *parent = nullptr);
    ~DeleteData();

private:
    StorageContentIni *m_ptrContentIni;
    QVector<QString>   m_rangeSections;
    Ui::DeleteData    *ui;
    void getRange();
private slots:
    void slotDeleteRangeSections();
    void slotDeleteOneSection();
    void slotDeleteOneKey();
    void slotDeleteValueInKey();
    void slotDeleteComment();
    void slotDeleteData();
    void slotDeleteFile();
};

#endif // DELETEDATA_H
