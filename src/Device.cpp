#include "Device.h"

Device::Device(int status, double battery) {
    powerStatus = status;
    batteryLevel = battery;
}

Device::~Device() {

}

void Device::setPowerStatus(int status) {
    powerStatus = status;
    //qInfo("Set power status to: %d", powerStatus);
}

int Device::getPowerStatus() {
    //qInfo("Current power status: %d", powerStatus);
    return powerStatus;
}

void Device::setBatteryLevel(double battery) {
    batteryLevel = battery;
    //qInfo("Set power status to: %d", powerStatus);
}

double Device::getBatteryLevel() {
    qInfo("Battery level: %f%", batteryLevel);
    return batteryLevel;
}

void Device::setConnectionLevel(QString connection) {
    connectionLevel = connection;
}

QString Device::getConnectionLevel() {
    return connectionLevel;
}

