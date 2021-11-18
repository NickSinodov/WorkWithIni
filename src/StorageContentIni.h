#ifndef STORAGECONTENTINI_H
#define STORAGECONTENTINI_H
#include "fstream"
#include "QString"
#include "QFile"
#include "QTextStream"
#include "QMap"
using namespace std;
struct ContentOfSection
{
  QString m_nameSection;
  QString m_commentSection;
  QMap<QString, QVector <QString>> m_keyValue;
  void clear()
  {
      m_nameSection.clear();
      m_commentSection.clear();
      m_keyValue.clear();
  };
};

class StorageContentIni
{
    friend class Ini;
    friend class ChooseFile;
    friend class ShowRangeSections;
    friend class ShowOneSection;
    friend class AddNewSection;
    friend class DeleteData;
    friend class ChangeData;
    friend class PathNewFile;

public:
    StorageContentIni();
private:
    QString                 m_contentToWrite;
    QList<ContentOfSection> m_data;
    QString                 m_pathFile;
    QVector<QString>        m_contentPrevFile;
    ContentOfSection        m_newSection;
    void analyzeFile();
    void writeData();
    void createContentIni();
};
#endif // STORAGECONTENTINI_H
