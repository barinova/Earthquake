#include "cgetdata.h"

CGetData::CGetData()
{
}

void CGetData::networkConnection(QObject *obj,int type)
{
    QString url;

    switch((typeData)type)
    {
        case HOUR:
            url = "http://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/all_hour.quakeml";
                break;
        case DAY:
        url = "http://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/all_day.quakeml";
            break;
        case WEEK:
        url = "http://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/all_week.quakeml";
                break;
        case MONTH:
        url = "http://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/all_month.quakeml";
                break;
    }

    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(QNetworkRequest(QUrl(url)));
    QObject::connect(manager, SIGNAL(finished(QNetworkReply*)), obj, SLOT(getData(QNetworkReply*)));
}

void CGetData::getInfoFromURL(QNetworkReply *reply)
{
    removeAllElements();
    switch (reply->error())
    {
    case 0:
    {
        QXmlStreamReader xmlData(QString::fromUtf8(reply->readAll()));
        findTagXml(xmlData);
        break;
    }
    default:
        break;
    }
    reply->deleteLater();
}

void CGetData::findTagXml(QXmlStreamReader &xml)
{
    while (!xml.atEnd() && !xml.hasError())
    {

        QXmlStreamReader::TokenType token = xml.readNext();
        if (token == QXmlStreamReader::StartDocument)
            continue;
        if (token == QXmlStreamReader::StartElement)
        {
                parseXml(xml);
        }
    }
}

void CGetData::parseXml(QXmlStreamReader &xml)
{
    if (xml.name() == "longitude")
    {
        xml.readNext();
        xml.readNext();
        result.longitude = xml.text().toString();
    }
    if (xml.name() == "latitude")
    {
        xml.readNext();
        xml.readNext();
        result.latitude = xml.text().toString();
    }
    if (xml.name() == "magnitude")
    {
        QString name;
        do
        {
            name = xml.name().toString();
            xml.readNext();
        }while(name != "value");
        result.magnitude = xml.text().toString();
        /*do
        {
            name = xml.name().toString();
            xml.readNext();
        }while(name != "uncertainty");
        result.magnitude += xml.text().toString();*/
        resultList.append(result);
    }
}

void CGetData::removeAllElements()
{
    resultList.erase(resultList.begin(), resultList.end());
}
