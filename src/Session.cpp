#include "Session.h"

Session::Session(QString group, QString type, QString frequency, QString mode, QString intensity) {
    sessionGroup = group;
    sessionType = type;
    frequencyRange = frequency;
    cesMode = mode;
    intensityLevel = intensity;
    qInfo("Session initializing:");
    qInfo("---Duration: %s", sessionGroup.toLocal8Bit().constData());
    qInfo("---Type: %s", sessionType.toLocal8Bit().constData());
    qInfo("---Frequency Range: %s, %s", frequencyRange.toLocal8Bit().constData(), cesMode.toLocal8Bit().constData());
    qInfo("---Intensity level: %s", intensityLevel.toLocal8Bit().constData());
}

Session::~Session() {

}

QString Session::getGroup() {
    return sessionGroup;
}

QString Session::getType() {
    return sessionType;
}

QString Session::getFrequency() {
    return frequencyRange;
}

QString Session::getCESMode() {
    return cesMode;
}

void Session::setIntensityLevel(QString intensity) {
    intensityLevel = intensity;
}

QString Session::getIntensityLevel() {
    return intensityLevel;
}
