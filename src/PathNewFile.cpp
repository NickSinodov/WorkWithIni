#include "PathNewFile.h"
#include "ui_PathNewFile.h"

PathNewFile::PathNewFile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PathNewFile)
{
    ui->setupUi(this);
    model = new QFileSystemModel;
    model->setRootPath((tr("")));
    model->setFilter(QDir::Dirs|QDir::NoDotAndDotDot|QDir::Files);

    ui->treeView->setModel(model);
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);
    connect(ui->pushButtonChoosePath, SIGNAL(clicked()), SLOT(slotChoosePath()));
}

void PathNewFile::slotChoosePath()
{
    QMessageBox msgBox;
    if(ui->lineEditNameNewFile->text().isEmpty())
    {
        msgBox.setText("Enter the name of new file!");
        msgBox.exec();
        return;
    }
    else
    {

        m_nameFile = ui->lineEditNameNewFile->text();
        QFileInfo fi = model->fileInfo(ui->treeView->currentIndex());
        if(fi.filePath().isEmpty())
        {
            fi.setFile(m_defaultPathFile + m_nameFile);
            m_pathNewFile = fi.canonicalFilePath();
        }
        else
        {
            fi.setFile(fi.canonicalFilePath() + m_nameFile);
        }
        if(fi.suffix()=="ini")
        {
            m_pathNewFile = fi.filePath();
        }
        else
        {
            msgBox.setText("The new file must be .ini!");
            msgBox.exec();
            return;
        }
        m_nameFile.clear();
        ui->lineEditNameNewFile->clear();
        ui->treeView->collapseAll();
    }
    m_ptrContentIni->m_pathFile = m_pathNewFile;
    QFile file(m_ptrContentIni->m_pathFile);
    file.open(QIODevice::WriteOnly);
    file.close();
    emit emptyFileCreated();
    close();
}

PathNewFile::~PathNewFile()
{
    delete ui;
}
