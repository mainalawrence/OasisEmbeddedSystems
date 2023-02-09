#ifndef DEVICE_H
#define DEVICE_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Session.h"

using namespace std;

class Device
{

public:
    Device(int status, double battery);
    ~Device();

    void setPowerStatus(int status);
    int getPowerStatus();

    void setBatteryLevel(double battery);
    double getBatteryLevel();

    void setConnectionLevel(QString connection);
    QString getConnectionLevel();

private:
    int powerStatus;
    double batteryLevel;
    QString connectionLevel;


};


#endif
