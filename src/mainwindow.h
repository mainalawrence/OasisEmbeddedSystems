#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QVector>
#include <QWidget>
#include <QString>
#include <QDebug>
#include <QLabel>
#include <QMap>
#include <QPushButton>
#include <QElapsedTimer>
#include <string>
#include <stdio.h>
#include <iostream>
#include <unistd.h>

#include "Device.h"
#include "Session.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Device *device;
    Session *currSession;

    int connectionStatus;

    int connectionLevelIndex;
    int selectedSessionGroupIndex;
    int selectedSessionTypeIndex;
    int intensityLevelIndex;

    double batteryLevel;
    int sessionTimePassed;

    int sessionStatus;

    // Session group, type, frequency, and CES mode options
    QVector<QString> sessionGroups;
    QVector<QString> sessionTypes;
    QVector<QString> sessionFrequencyTypes;
    QVector<QString> sessionCESModes;

    // Session CES labels
    QVector<QLabel*> sessionCESModesLabels;

    // Session CES ON/OFF labels/icons
    QVector<QString> sessionCESModesImagesOff;
    QVector<QString> sessionCESModesImagesOn;

    // Session group and session type labels/icons
    QVector<QLabel*> sessionGroupLabels;
    QVector<QLabel*> sessionTypeLabels;

    // Session group and type ON/OFF labels/icons
    QVector<QString> sessionGroupImagesOff;
    QVector<QString> sessionGroupImagesOn;
    QVector<QString> sessionTypeImagesOff;
    QVector<QString> sessionTypeImagesOn;

    // Intensity level options
    QVector<QString> intensityLevels;

    // Intensity level labels
    QVector<QLabel*> intensityLevelLabels;

    // Connection level options
    QVector<QString> connectionLevels;

    // Connection level labels
    QVector<QLabel*> connectionLevelLabels;

    // Connection level ON/OFF labels/icons
    QVector<QString> connectionLevelImagesOff;
    QVector<QString> connectionLevelImagesOn;

    // CES channel labels
    QVector<QLabel*> cesChannelsLabels;

    // CES channel ON/OFF labels/icons
    QVector<QString> cesChannelsImagesOff;
    QVector<QString> cesChannelsImagesOn;

    QElapsedTimer powerTimer;
    QElapsedTimer sessionTimer;

    void checkPowerStatus();
    void resetDisplay();

    // Functions for selecting session group/type
    void selectSessionGroup();
    void selectSessionType(int upDown);

    // Functions for setting and getting the status of a session - whether it's in progress or not
    void setSessionStatus(int session);
    int getSessionStatus();

    // Functions for starting, ending, running, pausing, and resuming a session
    void startSession();
    void endSessionEarly();
    void runSession();
    void pauseSession();
    void resumeSession();
    void sessionFinished();

    // Function for adjusting the intensity level
    void adjustIntensityLevel(int upDown);

private slots:
    // Functions for when buttons on the UI are pressed/released
    void powerPressed();
    void powerReleased();
    void upArrowPressed();
    void downArrowPressed();
    void selectPressed();
};

#endif // MAINWINDOW_H
