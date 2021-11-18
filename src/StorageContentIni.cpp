#include "StorageContentIni.h"
StorageContentIni::StorageContentIni()
{
    ContentOfSection temp;
    m_data.push_back(temp);
}

void StorageContentIni::analyzeFile()
{
    ifstream file(m_pathFile.toLocal8Bit());
    QVector<QString> tempVct;
    QString tempStr;
    char ch;
    while (!file.eof())
    {
        ch = file.get();
        tempStr.push_back(ch);
        if(ch == '\n')
        {
            tempVct.push_back(tempStr);
            tempStr.clear();
        }
    }
    if(m_contentPrevFile == tempVct)
    {
        return;
    }
    else
    {
        m_contentPrevFile = tempVct;
        ContentOfSection tempContentOfSection;
        unsigned count = 0;
        auto it_ContOfSection = tempVct.begin();
        for(; it_ContOfSection < tempVct.end(); it_ContOfSection++)
        {
            if(it_ContOfSection->front() == '[')
            {
                if(count > 0)
                {
                    if(m_data.first().m_nameSection.isEmpty())
                    {
                        m_data.first() = tempContentOfSection;
                        tempContentOfSection.clear();
                    }
                    else
                    {
                        m_data.push_back(tempContentOfSection);
                        tempContentOfSection.clear();
                    }
                }
                it_ContOfSection->remove(0, 1);
                it_ContOfSection->remove(it_ContOfSection->size() - 2, 2);
                tempContentOfSection.m_nameSection = *it_ContOfSection;
                count++;
                continue;
            }
            else if(it_ContOfSection->front() == ';')
            {
                it_ContOfSection->remove(0, 1);
                it_ContOfSection->remove(it_ContOfSection->size() - 1, 1);
                tempContentOfSection.m_commentSection = *it_ContOfSection;
                continue;
            }
            else if(it_ContOfSection->isEmpty())
            {
                continue;
            }
            else if(it_ContOfSection->front() == '\t')
            {
                continue;
            }
            else if(it_ContOfSection->front() == '\n')
            {
                continue;
            }
            else
            {
                size_t start = 0;
                auto it_QString = it_ContOfSection->begin();
                for(unsigned i = 0; it_QString != it_ContOfSection->end(); it_QString++, i++)
                {
                    if(*it_QString == '=')
                    {
                        start = i;
                    }
                }
                size_t end = it_ContOfSection->size();
                QString tempKey = *it_ContOfSection;
                tempKey.remove(start, end - start);


                end = start;
                it_ContOfSection->remove(0, end + 1);

                QVector<QString> tempVct;
                QString tempValue;
                while (!it_ContOfSection->isEmpty())
                {
                    it_QString = it_ContOfSection->begin();
                    for(unsigned i = 0; it_QString != it_ContOfSection->end(); it_QString++, i++)
                    {
                        if(*it_QString == ',')
                        {
                            start = i;
                            end = it_ContOfSection->size();
                            tempValue = *it_ContOfSection;
                            tempValue = tempValue.remove(start, end - start);
                            tempVct.push_back(tempValue);
                            end = start;
                            it_ContOfSection->remove(0, end + 1);
                            tempValue.clear();
                            it_QString = it_ContOfSection->begin();
                            i = 0;
                        }
                        if(*it_QString == '\n' && it_ContOfSection->size() > 1)
                        {
                            start = it_ContOfSection->size() - 1;
                            tempValue = *it_ContOfSection;
                            tempValue.remove(start, 1);
                            tempVct.push_back(tempValue);
                        }
                    }
                    it_ContOfSection->clear();
                }
                tempContentOfSection.m_keyValue.insert(tempKey, tempVct);
                tempKey.clear();
                tempVct.clear();
            }
        }
        if(count == 1)
        {
            if(m_data.first().m_nameSection.isEmpty())
            {
                m_data.first() = tempContentOfSection;
                tempContentOfSection.clear();
            }
            else
            {
                m_data.push_back(tempContentOfSection);
                tempContentOfSection.clear();
            }
        }
        else if(count > 1)
        {
            m_data.push_back(tempContentOfSection);
            tempContentOfSection.clear();
        }
    }
}

void StorageContentIni::createContentIni()
{
    m_contentToWrite.clear();
    for(auto it_m_data = m_data.begin(); it_m_data != m_data.end(); it_m_data++)
    {
        m_contentToWrite.push_back("[");
        m_contentToWrite.push_back(it_m_data->m_nameSection);
        m_contentToWrite.push_back("]");
        m_contentToWrite.push_back("\r\n");
        if(!it_m_data->m_commentSection.isEmpty())
        {
            m_contentToWrite.push_back(";");
            m_contentToWrite.push_back(it_m_data->m_commentSection);
            m_contentToWrite.push_back("\r\n");
        }
        for(auto itQMap = it_m_data->m_keyValue.begin(); itQMap != it_m_data->m_keyValue.end(); itQMap++)
        {
            m_contentToWrite.push_back(itQMap.key());
            m_contentToWrite.push_back("=");
            for(auto itValue = itQMap.value().begin(); itValue != itQMap.value().end(); itValue++)
            {
                m_contentToWrite.push_back(*itValue);
                m_contentToWrite.push_back(",");
            }
            m_contentToWrite.remove(m_contentToWrite.size() - 1, 1);
            m_contentToWrite.push_back("\r\n");
        }
    }
}

void StorageContentIni::writeData()
{
    createContentIni();
    QFile file(m_pathFile);
    file.remove();
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out << m_contentToWrite;
    m_contentToWrite.clear();
    file.close();
}
