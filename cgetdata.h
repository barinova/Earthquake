#ifndef CGETDATA_H
#define CGETDATA_H

#include <QtNetwork>
//#include <QList>
struct resultData
{
    QString longitude;
    QString latitude;
    QString magnitude;
};

enum typeData{ HOUR, DAY, WEEK, MONTH};

class CGetData
{
public:
    CGetData();
    QString dataFromUrl;
    QList<resultData> resultList;
    void networkConnection(QObject* obj, int num);
    void getInfoFromURL(QNetworkReply *reply);
    void removeAllElements();

private:
    resultData result;
    void parseXml(QXmlStreamReader &xml);
    void findTagXml(QXmlStreamReader &xmlData);
};

#endif // CGETDATA_H
