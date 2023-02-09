#ifndef SESSION_H
#define SESSION_H

#include <QObject>
#include <QString>
#include <QDebug>
#include <QMap>
#include <QString>
#include <string>
#include <vector>

#include "Device.h"

using namespace std;
 
class Session
{

public:    
    // Constructors
    Session(QString group, QString type, QString frequency, QString mode, QString intensity);
    ~Session();

    // Getters for session group, type, frequency, and CES mode
    QString getGroup();
    QString getType();
    QString getFrequency();
    QString getCESMode();

    // Setter and getter for intensity level
    void setIntensityLevel(QString intensity);
    QString getIntensityLevel();

private:
    // Values will be initialized when the user selects a session
    QString sessionGroup;
    QString sessionType;
    QString frequencyRange;
    QString cesMode;
    QString intensityLevel;

};


#endif
