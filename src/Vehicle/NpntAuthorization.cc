#include <QVariant>

#include "NpntAuthorization.h"
#include "QGCApplication.h"



/// @brief Set the initial internet connectivity and notify NPNT Authorization Process
void NpntAuthorization::setInternetConnectivity(QGCApplication *qgcApp)
{
    if(qgcApp->isInternetAvailable()){
        _internetAvailability = true;
        qgcApp->showAppMessage(tr("NPNT Authorization Process Initiated"));
    }
    else{
        qgcApp->showAppMessage(tr("Internet Not Connected for NPNT Authorization"));
    }
}


/// @brief Check for internet connection for NPNT Authorization
bool NpntAuthorization::checkInternetConnectivity()
{
    return _internetAvailability;
}

bool NpntAuthorization::getNpntAuthorizationStatus()
{
    return _npntAuthorized;
}

void NpntAuthorization::retrieveElements(QDomElement root, QString tag, QString att)
{
    QDomNodeList nodes = root.elementsByTagName(tag);

    qDebug() << "# nodes = " << nodes.count();
    for(int i = 0; i < nodes.count(); i++)
    {
        QDomNode elm = nodes.at(i);
        if(elm.isElement())
        {
            QDomElement e = elm.toElement();
            qDebug() << e.attribute(att);
        }
    }
}
