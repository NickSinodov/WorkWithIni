#include "ShowOneSection.h"
#include "ui_ShowOneSection.h"

ShowOneSection::ShowOneSection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowOneSection)
{
    ui->setupUi(this);
    connect(ui->pushButtonChooseSection, SIGNAL(clicked()), SLOT(slotShowOneSection()));
}

void ShowOneSection::getRange()
{
    ui->textBrowser->clear();
    ui->comboBoxSection->clear();
    for(auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        lst.append(it_m_data->m_nameSection);
    }
    ui->comboBoxSection->addItems(lst);
    lst.clear();
}

void ShowOneSection::slotShowOneSection()
{
    m_choice = ui->comboBoxSection->currentText();
    QString temp;
    ui->textBrowser->clear();
    for(auto it_m_data = m_ptrContentIni->m_data.begin(); it_m_data != m_ptrContentIni->m_data.end(); it_m_data++)
    {
        if(it_m_data->m_nameSection == m_choice)
        {
            temp = it_m_data->m_nameSection;
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

                for(auto itValue = it_m_key_value.value().begin(); itValue != it_m_key_value.value().end(); itValue++)
                {
                    temp.push_back(*itValue);
                    temp.push_back(",");
                }
                temp.remove(temp.size() - 1, 1);
                temp.push_back("\r\n");
            }
            break;
        }

    }
    ui->textBrowser->insertPlainText(temp);
    m_choice.clear();
    temp.clear();
}

ShowOneSection::~ShowOneSection()
{
    delete ui;
}
