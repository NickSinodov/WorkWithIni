#include "ChooseFile.h"
#include "ui_ChooseFile.h"

ChooseFile::ChooseFile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseFile)
{
    ui->setupUi(this);
    model = new QFileSystemModel;
    model->setFilter(QDir::Dirs|QDir::NoDotAndDotDot|QDir::Files);

    ui->treeView->setModel(model);
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);
    model->setRootPath((tr("D:\\C++\\Qt\\build-WorkWithIni3-Desktop_Qt_6_2_0_MinGW_64_bit-Debug\\test.ini")));

    connect(ui->pushButtonChoose, SIGNAL(clicked()), SLOT(slotAnalyzeFile()));
    ui->progressBar->setValue(0);
}

void ChooseFile::slotAnalyzeFile()
{
    QFileInfo fi = model->fileInfo(ui->treeView->currentIndex());
    QVector<QString> fileNames;
    if(fi.isDir())
    {
        fi.setFile(defaultPathFile);
        fileNames.push_back(fi.canonicalFilePath());
    }
    else
    {
        if(fi.suffix()=="ini")
        {
            fileNames.push_back(fi.canonicalFilePath());
        }

    }
    ui->plainTextEdit->insertPlainText(("The begin of an analysis...\n"));
    ui->plainTextEdit->insertPlainText(tr("%1 files selected\n").arg(fileNames.size()));
    ui->progressBar->setRange(0, fileNames.size());
    ui->progressBar->setValue(0);
    for (int i = 0; i < fileNames.size(); i++)
    {
        ui->plainTextEdit->insertPlainText(tr("File analisis № %1: %2\n").arg(i + 1).arg(fileNames.at(i)));
        m_ptrContentIni->m_pathFile = fileNames.at(i);
        m_ptrContentIni->analyzeFile();
        ui->progressBar->setValue(i+1);
    }
    ui->plainTextEdit->insertPlainText(("The end of an analyze.\n"));
    ui->treeView->collapseAll();
    close();
}

ChooseFile::~ChooseFile()
{
    delete ui;
}
