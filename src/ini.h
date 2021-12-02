#ifndef INI_H
#define INI_H

#include <QWidget>

#include "ChooseFile.h"
#include "ShowRangeSections.h"
#include "ShowOneSection.h"
#include "AddNewSection.h"
#include "DeleteData.h"
#include "ChangeData.h"
#include "PathNewFile.h"
#include "StorageContentIni.h"
#include "iostream"
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class Ini; }
QT_END_NAMESPACE

class Ini : public QWidget
{
    Q_OBJECT
    friend class ChooseFile;
    friend class ShowRangeSections;
public:
    Ini(QWidget *parent = nullptr);
    ~Ini();

private:
    StorageContentIni m_contentIni;
    ChooseFile        *m_file;
    PathNewFile       *m_newFile;
    ShowRangeSections *m_rangeSections;
    ShowOneSection    *m_oneSection;
    AddNewSection     *m_newSection;
    DeleteData        *m_dataForDelete;
    ChangeData        *m_dataForChange;
    Ui::Ini *ui;

public slots:
    void slotChooseFile();
    void slotShowAllData();
    void slotShowRangeSections();
    void slotShowOneSection();
    void slotAddNewSection();
    void slotDeleteData();
    void slotChangeData();
    void slotCreateFile();
    void setOnOffButton();
};
#endif // INI_H
