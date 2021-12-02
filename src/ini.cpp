#include "ini.h"
#include "ui_ini.h"

Ini::Ini(QWidget *parent): QWidget(parent), ui(new Ui::Ini)
{
    m_file          = new ChooseFile;
    m_newFile       = new PathNewFile;
    m_rangeSections = new ShowRangeSections;
    m_oneSection    = new ShowOneSection;
    m_newSection    = new AddNewSection;
    m_dataForDelete = new DeleteData;
    m_dataForChange = new ChangeData;
    m_file->m_ptrContentIni          = &m_contentIni;
    m_newFile->m_ptrContentIni       = &m_contentIni;
    m_rangeSections->m_ptrContentIni = &m_contentIni;
    m_oneSection->m_ptrContentIni    = &m_contentIni;
    m_newSection->m_ptrContentIni    = &m_contentIni;
    m_dataForDelete->m_ptrContentIni = &m_contentIni;
    m_dataForChange->m_ptrContentIni = &m_contentIni;
    ui->setupUi(this);
    setOnOffButton();
    connect(ui->pushButtonChooseFile,           SIGNAL(clicked()),                SLOT(slotChooseFile()));
    connect(ui->pushButtonCreateFile,           SIGNAL(clicked()),                SLOT(slotCreateFile()));
    connect(ui->pushButtonShowAll,              SIGNAL(clicked()),                SLOT(slotShowAllData()));
    connect(ui->pushButtonShowRangeSections,    SIGNAL(clicked()),                SLOT(slotShowRangeSections()));
    connect(ui->pushButtonShowOneSection,       SIGNAL(clicked()),                SLOT(slotShowOneSection()));
    connect(ui->pushButtonAddNewSection,        SIGNAL(clicked()),                SLOT(slotAddNewSection()));
    connect(ui->pushButtonDeleteData,           SIGNAL(clicked()),                SLOT(slotDeleteData()));
    connect(ui->pushButtonChangeContentSection, SIGNAL(clicked()),                SLOT(slotChangeData()));
    connect(m_file,                             SIGNAL(FileAnalized()),     this, SLOT(setOnOffButton()));
    connect(m_newFile,                          SIGNAL(emptyFileCreated()), this, SLOT(setOnOffButton()));
    connect(m_dataForDelete,                    SIGNAL(fileIsEmpty()),      this, SLOT(setOnOffButton()));
    connect(m_dataForDelete,                    SIGNAL(fileDeleted()),      this, SLOT(setOnOffButton()));
    connect(m_newSection,                       SIGNAL(sectionAdded()),     this, SLOT(setOnOffButton()));
}

void Ini::setOnOffButton()
{
    if(m_contentIni.m_pathFile.isEmpty())
    {
        ui->pushButtonDeleteData->setEnabled(false);
        ui->pushButtonShowAll->setEnabled(false);
        ui->pushButtonShowOneSection->setEnabled(false);
        ui->pushButtonShowRangeSections->setEnabled(false);
        ui->pushButtonChangeContentSection->setEnabled(false);
        ui->pushButtonAddNewSection->setEnabled(false);
    }
    else
    {
        QFile file(m_contentIni.m_pathFile);
        file.open(QIODevice::WriteOnly|QIODevice::Append);
        if(file.pos() == 0)
        {
            ui->pushButtonAddNewSection->setEnabled(true);
        }
        else
        {
            ui->pushButtonDeleteData->setEnabled(true);
            ui->pushButtonShowAll->setEnabled(true);
            ui->pushButtonShowOneSection->setEnabled(true);
            ui->pushButtonShowRangeSections->setEnabled(true);
            ui->pushButtonChangeContentSection->setEnabled(true);
            ui->pushButtonAddNewSection->setEnabled(true);
        }
    }
}

void Ini::slotChooseFile()
{
    m_file->show();
}

void Ini::slotCreateFile()
{
    m_newFile->show();
}

void Ini::slotShowAllData()
{
    ui->textBrowser->clear();
    m_contentIni.createContentIni();
    ui->textBrowser->insertPlainText(m_contentIni.m_contentToWrite);
}

void Ini::slotShowRangeSections()
{
    m_rangeSections->getRange();
    m_rangeSections->show();
}

void Ini::slotShowOneSection()
{
    m_oneSection->getRange();
    m_oneSection->show();
}

void Ini::slotAddNewSection()
{
    m_newSection->clear();
    m_newSection->show();
}

void Ini::slotDeleteData()
{
    m_dataForDelete->getRange();
    m_dataForDelete->show();
    setOnOffButton();
}

void Ini::slotChangeData()
{
    m_dataForChange->getRange();
    m_dataForChange->show();
}

Ini::~Ini()
{
    delete ui;
}

