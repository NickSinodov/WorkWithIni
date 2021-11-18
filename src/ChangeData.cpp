#include "ChangeData.h"
#include "ui_ChangeData.h"

ChangeData::ChangeData(QWidget *parent) : QWidget(parent), ui(new Ui::ChangeData)
{
    ui->setupUi(this);
    connect(ui->pushButtonChangeName,    SIGNAL(clicked()), SLOT(slotChangeName()));
    connect(ui->pushButtonChangeComment, SIGNAL(clicked()), SLOT(slotChangeComment()));
    connect(ui->pushButtonChangeKey,     SIGNAL(clicked()), SLOT(slotChangeKey()));
    connect(ui->pushButtonChangeValue,   SIGNAL(clicked()), SLOT(slotChangeValue()));
    connect(ui->pushButtonAddNewValue,   SIGNAL(clicked()), SLOT(slotAddValueInKey()));
    connect(ui->pushButtonAddNewComment, SIGNAL(clicked()), SLOT(slotAddNewComment()));
}

void ChangeData::getRange()
{
    ui->comboBoxNameSectionForAddComment->clear();
    ui->comboBoxNameSectionForAddValue->clear();
    ui->comboBoxNameSectionForChangeComment->clear();
    ui->comboBoxNameSectionForChangeKey->clear();
    ui->comboBoxNameSectionForChangeValue->clear();
    ui->comboBoxOldNameSection->clear();
    for(auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        m_rangeSections.append(it_m_data->m_nameSection);
    }
    ui->comboBoxNameSectionForAddComment->addItems(m_rangeSections);
    ui->comboBoxNameSectionForAddValue->addItems(m_rangeSections);
    ui->comboBoxNameSectionForChangeComment->addItems(m_rangeSections);
    ui->comboBoxNameSectionForChangeKey->addItems(m_rangeSections);
    ui->comboBoxNameSectionForChangeValue->addItems(m_rangeSections);
    ui->comboBoxOldNameSection->addItems(m_rangeSections);
    m_rangeSections.clear();
}

void ChangeData::slotChangeName()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    if(ui->lineEditNewNameSection->text().isEmpty())
    {
        msgBox.setText("Enter new name of section!");
        msgBox.exec();
        return;
    }
    else
    {
        if(ui->lineEditNewNameSection->text() == ui->comboBoxOldNameSection->currentText())
        {
            msgBox.setText("Enter new name of section!");
            msgBox.exec();
            return;
        }
        for(QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxOldNameSection->currentText())
            {
                it_m_data->m_nameSection = ui->lineEditNewNameSection->text();
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
                m_ptrContentIni->writeData();
                ui->lineEditNewNameSection->clear();
                getRange();
                break;
            }
        }

    }

}

void ChangeData::slotChangeComment()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    if(ui->lineEditNewComment->text().isEmpty())
    {
        msgBox.setText("Enter new comment of section!");
        msgBox.exec();
        return;
    }
    else
    {
        for(QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxNameSectionForChangeComment->currentText())
            {
                if(it_m_data->m_commentSection.isEmpty())
                {
                    msgBox.setText("This section doesn't have any comment, use function \"Add comment\".");
                    msgBox.exec();
                    return;
                }
                else
                {
                    it_m_data->m_commentSection = ui->lineEditNewComment->text();
                }
                QString temp;
                temp.push_back("[");
                temp.push_back(it_m_data->m_nameSection);
                temp.push_back("]");
                temp.push_back("\r\n");
                temp.push_back(";");
                temp.push_back(it_m_data->m_commentSection);
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
                m_ptrContentIni->writeData();
                ui->lineEditNewComment->clear();
                break;
            }
        }

    }
}

void ChangeData::slotChangeKey()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    if(ui->lineEditOldNameKey->text().isEmpty() || ui->lineEditNewNameKey->text().isEmpty())
    {
        msgBox.setText("Enter the new name of key and the old name of key!");
        msgBox.exec();
        return;
    }
    else
    {
        bool foundKey = false;
        for(QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxNameSectionForChangeKey->currentText())
            {
                QMap<QString, QVector <QString>>::iterator OldKey = it_m_data->m_keyValue.find(ui->lineEditOldNameKey->text());
                if(OldKey.key() != ui->lineEditOldNameKey->text())
                {
                    foundKey = true;
                    it_m_data->m_keyValue.remove(ui->lineEditOldNameKey->text());
                    it_m_data->m_keyValue.insert(ui->lineEditNewNameKey->text(), OldKey.value());
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
                    ui->textBrowser->insertPlainText(temp);
                    m_ptrContentIni->writeData();
                    ui->lineEditOldNameKey->clear();
                    ui->lineEditNewNameKey->clear();
                    break;
                }
                else
                {
                    msgBox.setText("Enter the correct old name of key!");
                    msgBox.exec();
                    return;
                }
            }

        }
        if(!foundKey)
        {
            msgBox.setText("The key not in map, enter the correct key.");
            msgBox.exec();
            return;
        }
    }
}

void ChangeData::slotChangeValue()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    if(ui->lineEditNameKeyForChangeValue->text().isEmpty() || ui->lineEditOldvalue->text().isEmpty() || ui->lineEditNewValue->text().isEmpty())
    {
        msgBox.setText("Enter the name of key, the old value and the new value!");
        msgBox.exec();
        return;
    }
    else
    {
        for(QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxNameSectionForChangeValue->currentText())
            {
                QMap<QString, QVector <QString>>::iterator keyForChangeValue = it_m_data->m_keyValue.find(ui->lineEditNameKeyForChangeValue->text());
                if(keyForChangeValue.key() != ui->lineEditNameKeyForChangeValue->text())
                {
                    msgBox.setText("This section doesn't have such key, enter the correct key.");
                    msgBox.exec();
                    return;
                }
                else
                {
                    bool foundValue = false;
                    for(QVector<QString>::iterator itVector = keyForChangeValue.value().begin(); itVector != keyForChangeValue.value().end(); itVector++)
                    {
                        if(*itVector == ui->lineEditOldvalue->text())
                        {
                            foundValue = true;
                            *itVector = ui->lineEditNewValue->text();
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
                            ui->textBrowser->insertPlainText(temp);
                            m_ptrContentIni->writeData();
                            ui->lineEditNameKeyForChangeValue->clear();
                            ui->lineEditOldvalue->clear();
                            ui->lineEditNewValue->clear();
                            break;
                        }
                    }
                    if(!foundValue)
                    {
                        msgBox.setText("This key doesn't have such value, enter the correct value.");
                        msgBox.exec();
                        return;
                    }
                }
            }
        }
    }
}

void ChangeData::slotAddValueInKey()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    if(ui->lineEditNewKey->text().isEmpty() || ui->lineEditNewValue_2->text().isEmpty())
    {
        msgBox.setText("Enter the name of key and value.");
        msgBox.exec();
        return;
    }
    else
    {
        for(QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxNameSectionForAddValue->currentText())
            {
                QMap<QString, QVector <QString>>::iterator foundKey = it_m_data->m_keyValue.find(ui->lineEditNewKey->text());

                if(foundKey.key() == ui->lineEditNewKey->text())
                {
                    foundKey.value().push_back(ui->lineEditNewValue_2->text());
                }
                else
                {
                    QVector<QString> tempVct;
                    tempVct.push_back(ui->lineEditNewValue_2->text());
                    it_m_data->m_keyValue.insert(ui->lineEditNewKey->text(), tempVct);
                }

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
                ui->textBrowser->insertPlainText(temp);
                m_ptrContentIni->writeData();
                ui->lineEditNewKey->clear();
                ui->lineEditNewValue_2->clear();
                break;
            }
        }
    }
}

void ChangeData::slotAddNewComment()
{
    ui->textBrowser->clear();
    QMessageBox msgBox;
    if(ui->lineEditNewComment_2->text().isEmpty())
    {
        msgBox.setText("Enter the comment.");
        msgBox.exec();
        return;
    }
    else
    {
        for(QList<ContentOfSection>::iterator it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
        {
            if(it_m_data->m_nameSection == ui->comboBoxNameSectionForAddValue->currentText())
            {
                if(it_m_data->m_commentSection == ui->lineEditNewComment_2->text())
                {
                    msgBox.setText("Enter the new comment.");
                    msgBox.exec();
                    return;
                }
                else
                {
                    it_m_data->m_commentSection = ui->lineEditNewComment_2->text();
                    QString temp;
                    temp.push_back("[");
                    temp.push_back(it_m_data->m_nameSection);
                    temp.push_back("]");
                    temp.push_back("\r\n");
                    temp.push_back(";");
                    temp.push_back(it_m_data->m_commentSection);
                    temp.push_back("\r\n");
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
                    ui->textBrowser->insertPlainText(temp);
                    m_ptrContentIni->writeData();
                    ui->lineEditNewComment_2->clear();
                    break;
                }
            }
        }
    }
}

ChangeData::~ChangeData()
{
    delete ui;
}
