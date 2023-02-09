#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Default values for session group, session type, intensity level, and connection level set to first value in vector set
    selectedSessionGroupIndex = 0;
    selectedSessionTypeIndex = 0;
    intensityLevelIndex = 0;
    connectionLevelIndex = 0;

    // Battery level will start at 100 and decrease as the user uses the device
    batteryLevel = 100;

    // Initialize parameter to keep track of how long session has been running
    sessionTimePassed = 0;

    // Initially create device turned off with fresh battery level set to 100%
    device = new Device(0, batteryLevel);

    // Initially set session activity status to 0 to represent no session running
    sessionStatus = 0;

    // Initialize session groups and session types
    sessionGroups = {"20 Minutes", "45 Minutes", "User-Designed", "Treatment History"};
    sessionTypes = {"Microcurrent Electrical Therapy", "Sub-Delta", "Theta", "Alpha"};
    sessionFrequencyTypes = {"0.5-3 Hz", "0.5-3 Hz", "6-8 Hz", "9-11 Hz"};
    sessionCESModes = {"Short-Pulse CES Session", "50% Duty Cycle CES Session", "Short-Pulse CES Session", "Short-Pulse CES Session"};

    // Add all CES modes labels from UI to vector set
    sessionCESModesLabels.push_back(ui->shortPulseCES);
    sessionCESModesLabels.push_back(ui->duty50CycleCES);

    // Add all OFF and ON session CES mode images to separate vector sets
    sessionCESModesImagesOff.push_back(":/Images/short_pulse_ces_off.png");
    sessionCESModesImagesOff.push_back(":/Images/duty_cycle_ces_off.png");

    sessionCESModesImagesOn.push_back(":/Images/short_pulse_ces_on.png");
    sessionCESModesImagesOn.push_back(":/Images/duty_cycle_ces_on.png");

    // Add all session group labels from the UI to vector set
    sessionGroupLabels.push_back(ui->mins20);
    sessionGroupLabels.push_back(ui->mins45);
    sessionGroupLabels.push_back(ui->userDesigned);
    sessionGroupLabels.push_back(ui->treatmentHistory);

    // Add all session type labels from the UI to vector set
    sessionTypeLabels.push_back(ui->met);
    sessionTypeLabels.push_back(ui->sub_delta);
    sessionTypeLabels.push_back(ui->theta);
    sessionTypeLabels.push_back(ui->alpha);

    // Add all OFF and ON session group images to separate vector sets
    sessionGroupImagesOff.push_back(":/Images/20_mins_off.png");
    sessionGroupImagesOff.push_back(":/Images/45_mins_off.png");
    sessionGroupImagesOff.push_back(":/Images/user_designed_off.png");
    sessionGroupImagesOff.push_back(":/Images/treatment_records_off.png");

    sessionGroupImagesOn.push_back(":/Images/20_mins_on.png");
    sessionGroupImagesOn.push_back(":/Images/45_mins_on.png");
    sessionGroupImagesOn.push_back(":/Images/user_designed_on.png");
    sessionGroupImagesOn.push_back(":/Images/treatment_records_on.png");

    // Add all OFF and ON session type images to separate vector set
    sessionTypeImagesOff.append(":/Images/met_off.png");
    sessionTypeImagesOff.append(":/Images/sub_delta_off.png");
    sessionTypeImagesOff.append(":/Images/theta_off.png");
    sessionTypeImagesOff.append(":/Images/alpha_off.png");

    sessionTypeImagesOn.append(":/Images/met_on.png");
    sessionTypeImagesOn.append(":/Images/sub_delta_on.png");
    sessionTypeImagesOn.append(":/Images/theta_on.png");
    sessionTypeImagesOn.append(":/Images/alpha_on.png");

    // Initialize intensity level options
    intensityLevels = {"0.25", "0.50", "0.75", "1.00", "1.50", "2.00", "+1", "+2"};

    // Add all intensity level labels from the UI to vector set
    intensityLevelLabels.push_back(ui->tdcs1);
    intensityLevelLabels.push_back(ui->tdcs2);
    intensityLevelLabels.push_back(ui->tdcs3);
    intensityLevelLabels.push_back(ui->tdcs4);
    intensityLevelLabels.push_back(ui->tdcs5);
    intensityLevelLabels.push_back(ui->tdcs6);
    intensityLevelLabels.push_back(ui->tdcs7);
    intensityLevelLabels.push_back(ui->tdcs8);

    // Initialize connection level options
    connectionLevels = {"1-3", "4-6", "7-8"};

    // Add all connection level labels from the UI to vector set
    connectionLevelLabels.push_back(ui->level1);
    connectionLevelLabels.push_back(ui->level2);
    connectionLevelLabels.push_back(ui->level3);
    connectionLevelLabels.push_back(ui->level4);
    connectionLevelLabels.push_back(ui->level5);
    connectionLevelLabels.push_back(ui->level6);
    connectionLevelLabels.push_back(ui->level7);
    connectionLevelLabels.push_back(ui->level8);

    // Add all OFF and ON connection level images to separate vector set
    connectionLevelImagesOff.append(":/Images/lvl_1_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_2_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_3_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_4_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_5_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_6_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_7_off.png");
    connectionLevelImagesOff.append(":/Images/lvl_8_off.png");

    connectionLevelImagesOn.append(":/Images/lvl_1_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_2_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_3_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_4_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_5_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_6_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_7_on.png");
    connectionLevelImagesOn.append(":/Images/lvl_8_on.png");

    // Add CES channel labels from the UI to vector set
    cesChannelsLabels.push_back(ui->leftCES);
    cesChannelsLabels.push_back(ui->rightCES);

    // Add all OFF and ON CES mode images to separate vector set
    cesChannelsImagesOff.append(":/Images/left_ces_off.png");
    cesChannelsImagesOff.append(":/Images/right_ces_off.png");
    cesChannelsImagesOff.append(":/Images/left_ces_on.png");
    cesChannelsImagesOff.append(":/Images/right_ces_on.png");

    // Connection for power button
    connect(ui->powerButton, SIGNAL(pressed()), this, SLOT(powerPressed()));
    connect(ui->powerButton, SIGNAL(released()), this, SLOT(powerReleased()));

    // Connection for INT up/down arrow buttons
    connect(ui->upButton, SIGNAL(clicked()), this, SLOT(upArrowPressed()));
    connect(ui->downButton, SIGNAL(clicked()), this, SLOT(downArrowPressed()));

    // Connection for select checkmark button
    connect(ui->selectButton, SIGNAL(clicked()), this, SLOT(selectPressed()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::powerPressed() {
    powerTimer.start();
}

void MainWindow::powerReleased() {

    // User attempts to turn on offline device but doesn't hold power button long enough
    if((powerTimer.elapsed() < 2000) && (device->getPowerStatus() == 0)) {
        qInfo("Hold down power button for 2 seconds to turn on the device.");
    }
    // User holds power button for 2 seconds before releasing while the device is off, device powers ON
    else if((powerTimer.elapsed() >= 2000) && (device->getPowerStatus() == 0)) {
        qInfo("Device powered on.");
        device->setPowerStatus(1);
        checkPowerStatus();
    }
    // User holds power button for 2 seconds before releasing while the device is on and no session is in progress, device powers OFF
    else if((powerTimer.elapsed() >= 2000) && (device->getPowerStatus() == 1)  && (getSessionStatus() == 0)) {
        device->setPowerStatus(0);
        checkPowerStatus();
    }
     // User holds power button for 2 seconds before releasing while the device is on and a session is in progress, session ends with Soft Off before device powers OFF
    else if((powerTimer.elapsed() >= 2000) && (device->getPowerStatus() == 1)  && (getSessionStatus() == 1)) {
        qInfo("Soft Off playing... preparing to shut off device."); //TEMPORARY - STILL NEED TO IMPLEMENT SOFT OFF
        sleep(3);
        qInfo("Device powered off.");
        device->setPowerStatus(0);
        checkPowerStatus();
    }
    // User clicks power button while device is on and no session is in progress, this allows them to switch between session groups
    else if((powerTimer.elapsed() < 2000) && (device->getPowerStatus() == 1) && (getSessionStatus() == 0)) {
        checkPowerStatus();
    }
    // User clicks power button while device is on and session is currently in progress, end the current session but keep device on
    else if((powerTimer.elapsed() < 2000) && (device->getPowerStatus() == 1) && (getSessionStatus() == 1)) {
        endSessionEarly();
    }

}

void MainWindow::checkPowerStatus() {
    if(device->getPowerStatus() == 1) { // Device is on
        ui->powerStatus->setStyleSheet("QGraphicsView { background-color: #00FF2A; } \n");
        // Automatically turn on the first session group and first session type when the device powers on
        sessionTypeLabels[selectedSessionTypeIndex]->setPixmap(QPixmap(sessionTypeImagesOn[selectedSessionTypeIndex]));
        selectSessionGroup();
    } else { // Device is off
        ui->powerStatus->setStyleSheet("QGraphicsView { background-color: white; } \n");
        resetDisplay();
        qInfo("Device powered off.");
    }
}

void MainWindow::upArrowPressed() {
    // User can select session type if device is on and a session isn't in progress
    if((device->getPowerStatus() == 1) && (getSessionStatus() == 0)) {
        selectSessionType(1);
    }
    // User can adjust intensity level if device is on and a session is in progress
    else if((device->getPowerStatus() == 1) && (getSessionStatus() == 1)) {
        adjustIntensityLevel(1);
    }
}

void MainWindow::downArrowPressed() {
    // User can select session type if device is on and a session isn't in progress
    if((device->getPowerStatus() == 1) && (getSessionStatus() == 0)) {
        selectSessionType(0);
    }
    // User can adjust intensity level if device is on and a session is in progress
    else if((device->getPowerStatus() == 1) && (getSessionStatus() == 1)) {
        adjustIntensityLevel(0);
    }
}

void MainWindow::selectSessionGroup() {
    // If the index goes past the last option, set the index back to 0 so the user can just keep looping over the options
    if(selectedSessionGroupIndex == sessionGroupLabels.size()) {
        selectedSessionGroupIndex = 0;
    }
    // Turn off all session group labels that aren't the selected one
    for(int i = 0; i < sessionGroupLabels.size(); i++) {
        if(i != selectedSessionGroupIndex) {
            sessionGroupLabels[i]->setPixmap(QPixmap(sessionGroupImagesOff[i]));
        }
    }
    // Turn on the session group label that is selected
    sessionGroupLabels[selectedSessionGroupIndex]->setPixmap(QPixmap(sessionGroupImagesOn[selectedSessionGroupIndex]));
    // Move to the next session group option if the power button is clicked on
    selectedSessionGroupIndex++;
}

void MainWindow::selectSessionType(int upDown) {
    // Move to the next session type option if the up arrow is clicked
    if(upDown == 1) {
        selectedSessionTypeIndex++;
    }

    // Move to the previous session type option if the down arrow is clicked
    if(upDown == 0) {
        selectedSessionTypeIndex--;
    }

    // If the index goes past the last option, set the index back to 0 so the user can just keep looping over the options
    if(selectedSessionTypeIndex == sessionTypeLabels.size()) {
        selectedSessionTypeIndex = 0;
    }

    // If the index tries to go before the first option, set the index to the last option
    if(selectedSessionTypeIndex == -1) {
        selectedSessionTypeIndex = sessionTypeLabels.size()-1;
    }

    // Turn off all session type labels that aren't the selected one
    for(int i = 0; i < sessionTypeLabels.size(); i++) {
        if(i != selectedSessionTypeIndex) {
            sessionTypeLabels[i]->setPixmap(QPixmap(sessionTypeImagesOff[i]));
        }
    }
    sessionTypeLabels[selectedSessionTypeIndex]->setPixmap(QPixmap(sessionTypeImagesOn[selectedSessionTypeIndex]));
}

void MainWindow::selectPressed() {
    // Run a new session if device is on and session is currently not in progress
    if((device->getPowerStatus() == 1) && (getSessionStatus() == 0)) {
        // Make new session with parameters. Default intensity level to start with will be 0.25
        currSession = new Session(sessionGroups[selectedSessionGroupIndex], sessionTypes[selectedSessionTypeIndex], sessionFrequencyTypes[selectedSessionTypeIndex], sessionCESModes[selectedSessionTypeIndex], intensityLevels[intensityLevelIndex]);
        // Light up colour of default intensity level
        intensityLevelLabels[intensityLevelIndex]->setStyleSheet("QLabel{ color: #00FF2A; } \n");
        startSession();
    }
    // IMPLEMENT THIS
    else if((device->getPowerStatus() == 1) && (getSessionStatus() == 1)) {
        qInfo("Intensity level preference saved.");
    }
}

void MainWindow::setSessionStatus(int status) {
    sessionStatus = status;
}

int MainWindow::getSessionStatus() {
    return sessionStatus;
}

void MainWindow::startSession() {
    // IF CONNECTION IS SUCCESSFUL, START THE SESSION
   // if(device->getConnectionStatus() == connectionLevels[2]) {
        setSessionStatus(1);
        if(sessionTypes[selectedSessionTypeIndex] == "Sub-Delta") {
            sessionCESModesLabels[1]->setPixmap(QPixmap(sessionCESModesImagesOn[1]));
        } else {
            sessionCESModesLabels[0]->setPixmap(QPixmap(sessionCESModesImagesOn[0]));
        }
        qInfo("Session starting in 5 seconds...");
        sleep(3);
        sessionTimer.start();
        runSession();
}

void MainWindow::endSessionEarly() {
    qInfo("--Soft Off plays-"); //need to add implementation for soft off
    qInfo("Session ended.");
    setSessionStatus(0);
    resetDisplay();
    checkPowerStatus();
}

void MainWindow::runSession() {
    //IF CONNECTION IS FINE, KEEP RUNNING
    //IF CONNECTION GETS LOST WHILE SESSION RUNNING, CALL PAUSESESSION()
    int sessionDuration;
    if(currSession->getGroup() == sessionGroups[0]) {
        sessionDuration = 20000; //20 secs
    }
    if(currSession->getGroup() == sessionGroups[1]) {
        sessionDuration = 45000; //45 secs
    }
    qInfo("Session currently in progress.");
    // FIX BUG WHERE POWER BUTTON GETS DISABLED WHILE SESSION IS RUNNING - FOR SOME REASON UNABLE TO END SESSION EARLY
    /*
    while(getSessionStatus() == 1) {
        if(sessionTimer.elapsed() >= sessionDuration) {
            setSessionStatus(0);
        }
    }
    sessionFinished();
    */
}

void MainWindow::pauseSession() {
    qInfo("Session was paused.");
    // IF CONNECTION COMES BACK
    // resumeSession()
}

void MainWindow::resumeSession() {
    qInfo("Session was resumed.");
}

void MainWindow::sessionFinished() {
    qInfo("--Soft Off plays-"); //need to add implementation for soft off
    qInfo("Session ended.");
    resetDisplay();
    device->setPowerStatus(0);
    checkPowerStatus();
}

void MainWindow::resetDisplay() {
    // Switch all label icons to their OFF versions
    for(int i = 0; i < sessionGroupLabels.size(); i++) {
        sessionGroupLabels[i]->setPixmap(QPixmap(sessionGroupImagesOff[i]));
    }
    for(int i = 0; i < sessionTypeLabels.size(); i++) {
        sessionTypeLabels[i]->setPixmap(QPixmap(sessionTypeImagesOff[i]));
    }
    for(int i = 0; i < intensityLevelLabels.size(); i++) {
        intensityLevelLabels[i]->setStyleSheet("QLabel{ color: white; } \n");
    }
    for(int i = 0; i < connectionLevelLabels.size(); i++) {
        connectionLevelLabels[i]->setPixmap(QPixmap(connectionLevelImagesOff[i]));
    }
    for(int i = 0; i < sessionCESModesLabels.size(); i++) {
        sessionCESModesLabels[i]->setPixmap(QPixmap(sessionCESModesImagesOff[i]));
    }

    // Set selected options back to their defaults
    selectedSessionGroupIndex = 0;
    selectedSessionTypeIndex = 0;
    intensityLevelIndex = 0; // might have to change this to whatever the intensity preference is
    connectionLevelIndex = 0;
}

void MainWindow::adjustIntensityLevel(int upDown) {
    // IMPLEMENT THIS
}
