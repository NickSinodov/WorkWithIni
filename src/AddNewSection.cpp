#include "AddNewSection.h"
#include "ui_AddNewSection.h"

AddNewSection::AddNewSection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddNewSection)
{
    ui->setupUi(this);
    connect(ui->pushButtonAddNameSection, SIGNAL(clicked()), SLOT(slotAddNameSection()));
    connect(ui->pushButtonAddCommentSection, SIGNAL(clicked()), SLOT(slotAddCommentSection()));
    connect(ui->pushButtonAddInMap, SIGNAL(clicked()), SLOT(slotAddInMap()));
    connect(ui->pushButtonWriteSectionInFile, SIGNAL(clicked()), SLOT(slotWriteInFile()));
    connect(ui->pushButtonClose, SIGNAL(clicked()), SLOT(close()));
}

void AddNewSection::clear()
{
    ui->nameSection->clear();
    ui->commentSection->clear();
    ui->showAddedSection->clear();
    ui->lineEditKey->clear();
}

void AddNewSection::slotAddNameSection()
{
    bool found = false;
    QMessageBox msgBox;
    for (auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        if(it_m_data->m_nameSection == ui->nameSection->text())
        {
            found = true;
            break;
        }
    }
    if(!found)
    {
        m_ptrContentIni->m_newSection.m_nameSection = ui->nameSection->text();
        ui->pushButtonAddNameSection->setEnabled(false);
        m_newSection.clear();
        m_newSection.push_back("[");
        m_newSection.push_back(m_ptrContentIni->m_newSection.m_nameSection);
        m_newSection.push_back("]");
        m_newSection.push_back("\r\n");
        if(!m_ptrContentIni->m_newSection.m_commentSection.isEmpty())
        {
            m_newSection.push_back(";");
            m_newSection.push_back(m_ptrContentIni->m_newSection.m_commentSection);
            m_newSection.push_back("\r\n");
        }
        if(!m_ptrContentIni->m_newSection.m_keyValue.isEmpty())
        {
            for(auto itQMap = m_ptrContentIni->m_newSection.m_keyValue.begin(); itQMap != m_ptrContentIni->m_newSection.m_keyValue.end(); itQMap++)
            {
                m_newSection.push_back(itQMap.key());
                m_newSection.push_back("=");
                for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
                {
                    m_newSection.push_back(*itValue);
                    m_newSection.push_back(",");
                }
                m_newSection.remove(m_newSection.size() - 1, 1);
                m_newSection.push_back("\r\n");
            }
        }
        ui->showAddedSection->clear();
        ui->showAddedSection->insertPlainText(m_newSection);
        ui->nameSection->setReadOnly(true);
    }
    else
    {
        msgBox.setText(tr("Incorrect data.\n"
                          "A section with this name already exists in the array."));
        msgBox.exec();
        return;
    }
    emit sectionAdded();
    /*
    if(!m_contentNewSection.m_keyValueNewSection.isEmpty())
    {
        m_ptrContentIni->m_newSection.m_keyValue = m_contentNewSection.m_keyValueNewSection;
        m_contentNewSection.m_keyValueNewSection.clear();
    }
    m_ptrContentIni->m_data.push_back(m_ptrContentIni->m_newSection);
    showContentNewSection();*/
}

void AddNewSection::slotAddCommentSection()
{
    m_ptrContentIni->m_newSection.m_commentSection = ui->commentSection->text();
    ui->pushButtonAddCommentSection->setEnabled(false);

    if(!ui->pushButtonAddNameSection->isEnabled())
    {
        if(!ui->commentSection->text().isEmpty())
        {
            m_ptrContentIni->m_newSection.m_commentSection = ui->commentSection->text();\
            m_newSection.clear();
            if(!m_ptrContentIni->m_newSection.m_nameSection.isEmpty())
            {
                m_newSection.push_back("[");
                m_newSection.push_back(m_ptrContentIni->m_newSection.m_nameSection);
                m_newSection.push_back("]");
                m_newSection.push_back("\r\n");
            }
            m_newSection.push_back(";");
            m_newSection.push_back(m_ptrContentIni->m_newSection.m_commentSection);
            m_newSection.push_back("\r\n");
            ui->commentSection->setReadOnly(true);
        }
        if(!m_ptrContentIni->m_newSection.m_keyValue.isEmpty())
        {
            for(auto itQMap = m_ptrContentIni->m_newSection.m_keyValue.begin(); itQMap != m_ptrContentIni->m_newSection.m_keyValue.end(); itQMap++)
            {
                m_newSection.push_back(itQMap.key());
                m_newSection.push_back("=");
                for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
                {
                    m_newSection.push_back(*itValue);
                    m_newSection.push_back(",");
                }
                m_newSection.remove(m_newSection.size() - 1, 1);
                m_newSection.push_back("\r\n");
            }
        }
        ui->showAddedSection->clear();
        ui->showAddedSection->insertPlainText(m_newSection);
    }
}

void AddNewSection::slotAddInMap()
{
    ui->showAddedSection->clear();
    bool found = false;
    for (auto it_QMap = m_ptrContentIni->m_newSection.m_keyValue.begin(); it_QMap != m_ptrContentIni->m_newSection.m_keyValue.end(); it_QMap++)
    {
        if(it_QMap.key() == ui->lineEditKey->text())
        {
            found = true;
            it_QMap.value().push_back(ui->lineEditValue->text());
            ui->lineEditValue->clear();
            break;
        }
    }
    if(!found)
    {
        QVector<QString> tempVct;
        tempVct.push_back(ui->lineEditValue->text());
        m_ptrContentIni->m_newSection.m_keyValue.insert(ui->lineEditKey->text(), tempVct);
        ui->lineEditValue->clear();
    }
    m_newSection.clear();
    if(!ui->pushButtonAddNameSection->isEnabled())
    {
        m_newSection.push_back("[");
        m_newSection.push_back(m_ptrContentIni->m_newSection.m_nameSection);
        m_newSection.push_back("]");
        m_newSection.push_back("\r\n");
    }
    if(!ui->pushButtonAddCommentSection->isEnabled())
    {
        m_newSection.push_back(";");
        m_newSection.push_back(m_ptrContentIni->m_newSection.m_commentSection);
        m_newSection.push_back("\r\n");
    }
    for(auto itQMap = m_ptrContentIni->m_newSection.m_keyValue.begin(); itQMap != m_ptrContentIni->m_newSection.m_keyValue.end(); itQMap++)
    {
        m_newSection.push_back(itQMap.key());
        m_newSection.push_back("=");
        for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
        {
            m_newSection.push_back(*itValue);
            m_newSection.push_back(",");
        }
        m_newSection.remove(m_newSection.size() - 1, 1);
        m_newSection.push_back("\r\n");
    }
    ui->showAddedSection->clear();
    ui->showAddedSection->insertPlainText(m_newSection);
}

void AddNewSection::slotWriteInFile()
{
    QMessageBox msgBox;
    if(m_ptrContentIni->m_newSection.m_nameSection.isEmpty())
    {
        msgBox.setText("Enter the name of section.");
        msgBox.exec();
        return;
    }
    else
    {
        m_ptrContentIni->m_data.push_back(m_ptrContentIni->m_newSection);
        if(m_ptrContentIni->m_data.at(0).m_nameSection == "")
        {
            m_ptrContentIni->m_data.remove(0);
        }
        m_ptrContentIni->writeData();
        m_ptrContentIni->m_newSection.clear();
        ui->nameSection->clear();
        ui->pushButtonAddNameSection->setEnabled(true);
        ui->commentSection->clear();
        ui->pushButtonAddCommentSection->setEnabled(true);
        ui->lineEditKey->clear();
        ui->showAddedSection->clear();
        ui->nameSection->setReadOnly(false);
        ui->commentSection->setReadOnly(false);
    }
}

AddNewSection::~AddNewSection()
{
    delete ui;
}
