#include "DeleteData.h"
#include "ui_DeleteData.h"

DeleteData::DeleteData(QWidget *parent) : QWidget(parent), ui(new Ui::DeleteData)
{
    ui->setupUi(this);
    connect(ui->pushButtonDeleteRangeSections, SIGNAL(clicked()), SLOT(slotDeleteRangeSections()));
    connect(ui->pushButtonDeleteOneSection,    SIGNAL(clicked()), SLOT(slotDeleteOneSection()));
    connect(ui->pushButtonDeleteKey,           SIGNAL(clicked()), SLOT(slotDeleteOneKey()));
    connect(ui->pushButtonDeleteValueInKey,    SIGNAL(clicked()), SLOT(slotDeleteValueInKey()));
    connect(ui->pushButtonDeleteComment,       SIGNAL(clicked()), SLOT(slotDeleteComment()));
    connect(ui->pushButtonDeleteData,          SIGNAL(clicked()), SLOT(slotDeleteData()));
    connect(ui->pushButtonDeleteFile,          SIGNAL(clicked()), SLOT(slotDeleteFile()));
}

void DeleteData::getRange()
{
    ui->comboBoxFromRemovableSection->clear();
    ui->comboBoxToRemovableSection->clear();
    ui->comboBoxRemovableSection->clear();
    ui->comboBoxNameSectionDeleteKey->clear();
    ui->comboBoxNameSectionForDeleteComment->clear();
    ui->comboBoxNameSectionForDeleteValue->clear();
    for(auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        m_rangeSections.append(it_m_data->m_nameSection);
    }
    ui->comboBoxFromRemovableSection->addItems(m_rangeSections);
    ui->comboBoxToRemovableSection->addItems(m_rangeSections);
    ui->comboBoxRemovableSection->addItems(m_rangeSections);
    ui->comboBoxNameSectionDeleteKey->addItems(m_rangeSections);
    ui->comboBoxNameSectionForDeleteComment->addItems(m_rangeSections);
    ui->comboBoxNameSectionForDeleteValue->addItems(m_rangeSections);
    m_rangeSections.clear();
}

void DeleteData::slotDeleteRangeSections()
{
    QMessageBox msgBox;
    QList<ContentOfSection>::const_iterator DeleteBegin;
    QList<ContentOfSection>::const_iterator DeleteEnd;
    for (QList<ContentOfSection>::const_iterator it_m_data = m_ptrContentIni->m_data.cbegin(); it_m_data != m_ptrContentIni->m_data.cend(); it_m_data++)
    {
        if(it_m_data->m_nameSection == ui->comboBoxFromRemovableSection->currentText())
        {
            DeleteBegin = it_m_data;
        }
        if(it_m_data->m_nameSection == ui->comboBoxToRemovableSection->currentText())
        {
            DeleteEnd = it_m_data;
        }
    }
    if(DeleteBegin > DeleteEnd)
    {
        msgBox.setText(tr("Incorrect data.\n"
                          "The begin of range for delete can't be less then the end for delete."));
        msgBox.exec();
        return;
    }
    else
    {
        m_ptrContentIni->m_data.erase(DeleteBegin, DeleteEnd + 1);
        m_ptrContentIni->writeData();
        getRange();
    }

}

void DeleteData::slotDeleteOneSection()
{
    QList<ContentOfSection>::const_iterator removableSection;
    for (QList<ContentOfSection>::const_iterator it_m_data = m_ptrContentIni->m_data.cbegin(); it_m_data != m_ptrContentIni->m_data.cend(); it_m_data++)
    {
        if(it_m_data->m_nameSection == ui->comboBoxRemovableSection->currentText())
        {
            removableSection = it_m_data;
        }
    }
    m_ptrContentIni->m_data.erase(removableSection);
    m_ptrContentIni->writeData();
    getRange();
}

void DeleteData::slotDeleteOneKey()
{
    ui->textBrowser->clear();

    QMap<QString, QVector <QString>>::iterator removableKey;
    QMessageBox msgBox;
    if(ui->lineEditRemovableKey->text().isEmpty())
    {
        msgBox.setText("Enter the name of key.");
        msgBox.exec();
        return;
    }
    QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin();
    for (; it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        if(it_m_data->m_nameSection == ui->comboBoxNameSectionDeleteKey->currentText())
        {
            removableKey = it_m_data->m_keyValue.find(ui->lineEditRemovableKey->text());
            if(removableKey.key().isEmpty())
            {
                msgBox.setText("Incorrect data.\n"
                               "Enter the correct key for delete.");
                msgBox.exec();
                return;
            }
            else
            {
                 it_m_data->m_keyValue.remove(removableKey.key());
                 m_ptrContentIni->writeData();
                 QString temp;
                 temp.push_back("[");
                 temp.push_back(it_m_data->m_nameSection);
                 temp.push_back("]");
                 temp.push_back("\r\n");
                 if(!it_m_data->m_commentSection.isEmpty())
                 {
                     temp.push_back(";");
                     temp.push_back(it_m_data->m_commentSection);
                     temp.push_back("\r\n");
                 }
                 if(!it_m_data->m_keyValue.isEmpty())
                 {
                     for(auto itQMap = it_m_data->m_keyValue.begin(); itQMap != it_m_data->m_keyValue.end(); itQMap++)
                     {
                         temp.push_back(itQMap.key());
                         temp.push_back("=");
                         for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
                         {
                             temp.push_back(*itValue);
                             temp.push_back(",");
                         }
                         temp.remove(temp.size() - 1, 1);
                         temp.push_back("\r\n");
                     }
                 }
                 ui->textBrowser->insertPlainText(temp);
                 break;
            }
        }
    }
    ui->lineEditRemovableKey->clear();
}

void DeleteData::slotDeleteValueInKey()
{
    ui->textBrowser->clear();
    QMap<QString, QVector <QString>>::iterator removableValue;
    QMessageBox msgBox;
    if(ui->lineEditNameKeyForDeleteValue->text().isEmpty() || ui->lineEditRemovableValue->text().isEmpty())
    {
        msgBox.setText("Enter the name of key or value.");
        msgBox.exec();
        return;
    }
    else
    {
        QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin();
        for (; it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxNameSectionForDeleteValue->currentText())
            {
                removableValue = it_m_data->m_keyValue.find(ui->lineEditNameKeyForDeleteValue->text());
                if(removableValue.key().isEmpty())
                {
                    msgBox.setText("Incorrect data.\n"
                                   "Enter the correct key for delete.");
                    msgBox.exec();
                    return;
                }
                else
                {
                    bool found = false;
                    for(QVector<QString>::const_iterator itVct = removableValue.value().cbegin(); itVct != removableValue.value().cend(); itVct++)
                    {
                        if(*itVct == ui->lineEditRemovableValue->text())
                        {
                            found = true;
                            removableValue.value().erase(itVct);
                            m_ptrContentIni->writeData();
                            getRange();
                            QString temp;
                            temp.push_back("[");
                            temp.push_back(it_m_data->m_nameSection);
                            temp.push_back("]");
                            temp.push_back("\r\n");
                            if(!it_m_data->m_commentSection.isEmpty())
                            {
                                temp.push_back(";");
                                temp.push_back(it_m_data->m_commentSection);
                                temp.push_back("\r\n");
                            }
                            if(!it_m_data->m_keyValue.isEmpty())
                            {
                                for(auto itQMap = it_m_data->m_keyValue.begin(); itQMap != it_m_data->m_keyValue.end(); itQMap++)
                                {
                                    temp.push_back(itQMap.key());
                                    temp.push_back("=");
                                    for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
                                    {
                                        temp.push_back(*itValue);
                                        temp.push_back(",");
                                    }
                                    temp.remove(temp.size() - 1, 1);
                                    temp.push_back("\r\n");
                                }
                            }
                            ui->textBrowser->insertPlainText(temp);
                            break;
                        }
                    }
                    if(!found)
                    {
                        msgBox.setText("Incorrect data.\n"
                                       "Enter the correct value for delete.");
                        msgBox.exec();
                        return;
                    }
                }
            }
        }
    }
    ui->lineEditNameKeyForDeleteValue->clear();
    ui->lineEditRemovableValue->clear();
}

void DeleteData::slotDeleteComment()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin();
    for(; it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        if(it_m_data->m_nameSection == ui->comboBoxNameSectionForDeleteComment->currentText())
        {
            if(!it_m_data->m_commentSection.isEmpty())
            {
                it_m_data->m_commentSection.clear();
                m_ptrContentIni->writeData();
                QString temp;
                temp.push_back("[");
                temp.push_back(it_m_data->m_nameSection);
                temp.push_back("]");
                temp.push_back("\r\n");
                if(!it_m_data->m_keyValue.isEmpty())
                {
                    for(auto itQMap = it_m_data->m_keyValue.begin(); itQMap != it_m_data->m_keyValue.end(); itQMap++)
                    {
                        temp.push_back(itQMap.key());
                        temp.push_back("=");
                        for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
                        {
                            temp.push_back(*itValue);
                            temp.push_back(",");
                        }
                        temp.remove(temp.size() - 1, 1);
                        temp.push_back("\r\n");
                    }
                }
                ui->textBrowser->insertPlainText(temp);
                break;
            }
            else
            {
                msgBox.setText(tr("The comment of %1 is already empty.").arg(it_m_data->m_nameSection));
                msgBox.exec();
                return;
            }

        }
    }

}

void DeleteData::slotDeleteData()
{
    QFile file(m_ptrContentIni->m_pathFile);
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    file.close();
    close();
}

void DeleteData::slotDeleteFile()
{
    QFile file(m_ptrContentIni->m_pathFile);
    file.remove();
    m_ptrContentIni->m_pathFile.clear();
    close();
}

DeleteData::~DeleteData()
{
    delete ui;
}
