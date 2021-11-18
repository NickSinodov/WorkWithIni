#ifndef SHOWRANGESECTIONS_H
#define SHOWRANGESECTIONS_H

#include <QWidget>
#include "StorageContentIni.h"
namespace Ui {
class ShowRangeSections;
}

class ShowRangeSections : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit ShowRangeSections(QWidget *parent = nullptr);
    ~ShowRangeSections();
    void getRange();
private:
    QVector<QString>      rangeForRead;
    QStringList           lst;
    StorageContentIni     *m_ptrContentIni;
    Ui::ShowRangeSections *ui;

private slots:
    void slotShowRangeSections();
};

#endif // SHOWRANGESECTIONS_H
