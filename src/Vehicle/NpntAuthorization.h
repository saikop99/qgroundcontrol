#ifndef NPNTAUTHORIZATION_H
#define NPNTAUTHORIZATION_H

#include <QQuickItem>
#include <QObject>
#include <QQmlProperty>
#include <QtXml>

#include "QGCToolbox.h"


class NpntAuthorization : public QGCTool
{
    Q_OBJECT
public:
    NpntAuthorization(QGCApplication* app, QGCToolbox* toolbox);
    /*bool checkInternetConnectivity();
    void setInternetConnectivity(QGCApplication* qgcApp);
    bool getNpntAuthorizationStatus();*/



private:
    bool _internetAvailability = false; //default false until internet is detected
    bool _npntAuthorized = false; //NPNT Authorization is False initially

    void retrieveElements(QDomElement root, QString tag, QString att);


signals:
    bool npntAuthorizationStatusChanged();

public slots:
};



#endif // NPNTAUTHORIZATION_H
