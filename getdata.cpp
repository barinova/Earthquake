#include "getdata.h"

getData::getData()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(QNetworkRequest(QUrl("http://www.google.com/ig/api?weather=Moscow")));
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getInfoFromURL(QNetworkReply*)));
}

void getData::getInfoFromURL(QNetworkReply *reply)
{
    QString otvet;

    switch (reply->error())
    {
    case 0:
        otvet = QString::fromUtf8(reply->readAll());
        this->updateTextEdit(otvet);
        break;
    default:
        text1->setText(this->trUtf8("Error"));
        break;
    }

    reply->deleteLater();
}
