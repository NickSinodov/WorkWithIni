#include "ShowRangeSections.h"
#include "ui_ShowRangeSections.h"

ShowRangeSections::ShowRangeSections(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowRangeSections)
{
    ui->setupUi(this);
    connect(ui->pushButtonChooseRange, SIGNAL(clicked()), SLOT(slotShowRangeSections()));
}

void ShowRangeSections::getRange()
{
    ui->textBrowser->clear();
    ui->comboBoxFromSection->clear();
    ui->comboBoxToSection->clear();

    for(auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        lst.append(it_m_data->m_nameSection);
    }
    ui->comboBoxFromSection->addItems(lst);
    ui->comboBoxToSection->addItems(lst);
    lst.clear();
}

void ShowRangeSections::slotShowRangeSections()
{
    rangeForRead.push_back(ui->comboBoxFromSection->currentText());
    rangeForRead.push_back(ui->comboBoxToSection->currentText());
    ui->textBrowser->clear();
    QString temp;
    unsigned count = 0;
    for(auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        if(it_m_data->m_nameSection == rangeForRead.at(0))
        {
            count++;
        }
        if(count)
        {
            if(count == 1)
            {
                temp = it_m_data->m_nameSection;
            }
            else
            {
                temp.push_back(it_m_data->m_nameSection);
            }
            temp.push_back("\r\n");
            if(!it_m_data->m_commentSection.isEmpty())
            {
                temp.push_back(it_m_data->m_commentSection);
                temp.push_back("\r\n");
            }
            for(auto it_m_key_value = it_m_data->m_keyValue.begin(); it_m_key_value != it_m_data->m_keyValue.end(); it_m_key_value++)
            {
                temp.push_back(it_m_key_value.key());
                temp.push_back("=");
                auto itValue = it_m_key_value.value().begin();
                for(; itValue != it_m_key_value.value().end(); itValue++)
                {
                    temp.push_back(*itValue);
                    temp.push_back(",");
                }
                temp.remove(temp.size() - 1, 1);
                temp.push_back("\r\n");
            }
            count++;
        }
        if(it_m_data->m_nameSection == rangeForRead.at(1))
        {
            break;
        }
    }
    ui->textBrowser->insertPlainText(temp);
    rangeForRead.clear();
    temp.clear();
}

ShowRangeSections::~ShowRangeSections()
{
    delete ui;
}
