#ifndef ADDNEWSECTION_H
#define ADDNEWSECTION_H

#include <QWidget>
#include "StorageContentIni.h"
#include "QMessageBox"
namespace Ui {
class AddNewSection;
}

class AddNewSection : public QWidget
{
    Q_OBJECT
    friend class Ini;
public:
    explicit AddNewSection(QWidget *parent = nullptr);
    ~AddNewSection();
private:
    QString            m_newSection;
    StorageContentIni *m_ptrContentIni;
    Ui::AddNewSection *ui;
    void showContentNewSection();
    void clear();
private slots:
    void slotAddNameSection();
    void slotAddCommentSection();
    void slotAddInMap();
    void slotWriteInFile();
};

#endif // ADDNEWSECTION_H
