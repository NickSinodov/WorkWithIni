#ifndef SHOWONESECTION_H
#define SHOWONESECTION_H

#include <QWidget>
#include "StorageContentIni.h"
namespace Ui {
class ShowOneSection;
}

class ShowOneSection : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit ShowOneSection(QWidget *parent = nullptr);
    ~ShowOneSection();
    void getRange();
private:
    QString            m_choice;
    QStringList        lst;
    StorageContentIni  *m_ptrContentIni;
    Ui::ShowOneSection *ui;
private slots:
    void slotShowOneSection();
};

#endif // SHOWONESECTION_H
