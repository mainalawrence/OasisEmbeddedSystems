/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *deviceBox;
    QPushButton *selectButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QProgressBar *batteryIcon;
    QGroupBox *sessionGroup;
    QLabel *mins20;
    QLabel *mins45;
    QLabel *userDesigned;
    QLabel *treatmentHistory;
    QGroupBox *sessionOption;
    QLabel *met;
    QLabel *sub_delta;
    QLabel *theta;
    QLabel *alpha;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *powerButton;
    QGraphicsView *powerStatus;
    QGroupBox *levelBox;
    QLabel *level8;
    QLabel *level7;
    QLabel *level6;
    QLabel *level5;
    QLabel *level4;
    QLabel *level3;
    QLabel *level2;
    QLabel *level1;
    QLabel *intLabel;
    QGroupBox *levelBox_3;
    QLabel *tdcs1;
    QLabel *tdcs2;
    QLabel *tdcs3;
    QLabel *tdcs4;
    QLabel *tdcs5;
    QLabel *tdcs6;
    QLabel *tdcs7;
    QLabel *tdcs8;
    QLabel *logoLabel;
    QLabel *sloganLabel;
    QLabel *canadaLabel;
    QLabel *tdcsLabel;
    QLabel *shortPulseCES;
    QLabel *duty50CycleCES;
    QLabel *leftCES;
    QLabel *rightCES;
    QLabel *cesOutput;
    QLabel *audioInput;
    QPushButton *recordButton;
    QLabel *label;
    QGroupBox *controlBox;
    QLCDNumber *userSelection;
    QPushButton *userLeft;
    QPushButton *userRight;
    QPushButton *selectUserButton;
    QGraphicsView *graphicsView_3;
    QPushButton *createUserButton;
    QTextEdit *enterUserTextbox;
    QGraphicsView *graphicsView_7;
    QGraphicsView *graphicsView_6;
    QLabel *selectUserLabel;
    QLabel *createNewUserLabel;
    QLabel *controlsLabel;
    QPushButton *replaceBattery;
    QPushButton *wetEarLobes;
    QPushButton *connectLeftClip;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;
    QLabel *userDesignedSessionsLabel;
    QLabel *treatmentHistoryLabel;
    QListWidget *treatmentHistoryList;
    QListWidget *userDesignedList;
    QPushButton *connectRightCLip;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1278, 596);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        deviceBox = new QGroupBox(centralwidget);
        deviceBox->setObjectName(QString::fromUtf8("deviceBox"));
        deviceBox->setGeometry(QRect(30, 60, 701, 431));
        selectButton = new QPushButton(deviceBox);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 360, 71, 61));
        selectButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Images/select.png"), QSize(), QIcon::Normal, QIcon::On);
        selectButton->setIcon(icon);
        selectButton->setIconSize(QSize(60, 60));
        selectButton->setFlat(false);
        upButton = new QPushButton(deviceBox);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(380, 270, 61, 61));
        upButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/up_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/Images/up_arrow.png"), QSize(), QIcon::Normal, QIcon::On);
        upButton->setIcon(icon1);
        upButton->setIconSize(QSize(60, 60));
        upButton->setFlat(false);
        downButton = new QPushButton(deviceBox);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(380, 350, 61, 61));
        downButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/down_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Images/down_arrow.png"), QSize(), QIcon::Normal, QIcon::On);
        downButton->setIcon(icon2);
        downButton->setIconSize(QSize(60, 60));
        downButton->setFlat(false);
        batteryIcon = new QProgressBar(deviceBox);
        batteryIcon->setObjectName(QString::fromUtf8("batteryIcon"));
        batteryIcon->setGeometry(QRect(10, 60, 61, 23));
        batteryIcon->setValue(0);
        sessionGroup = new QGroupBox(deviceBox);
        sessionGroup->setObjectName(QString::fromUtf8("sessionGroup"));
        sessionGroup->setGeometry(QRect(90, 20, 241, 41));
        sessionGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"background-color: rgb(0, 0, 0);"));
        sessionGroup->setCheckable(false);
        mins20 = new QLabel(sessionGroup);
        mins20->setObjectName(QString::fromUtf8("mins20"));
        mins20->setGeometry(QRect(20, 0, 41, 41));
        mins20->setPixmap(QPixmap(QString::fromUtf8(":/Images/20_mins_off.png")));
        mins20->setScaledContents(true);
        mins45 = new QLabel(sessionGroup);
        mins45->setObjectName(QString::fromUtf8("mins45"));
        mins45->setGeometry(QRect(80, 0, 41, 41));
        mins45->setPixmap(QPixmap(QString::fromUtf8(":/Images/45_mins_off.png")));
        mins45->setScaledContents(true);
        userDesigned = new QLabel(sessionGroup);
        userDesigned->setObjectName(QString::fromUtf8("userDesigned"));
        userDesigned->setGeometry(QRect(140, 0, 41, 41));
        userDesigned->setPixmap(QPixmap(QString::fromUtf8(":/Images/user_designed_off.png")));
        userDesigned->setScaledContents(true);
        treatmentHistory = new QLabel(sessionGroup);
        treatmentHistory->setObjectName(QString::fromUtf8("treatmentHistory"));
        treatmentHistory->setGeometry(QRect(200, 0, 41, 41));
        treatmentHistory->setPixmap(QPixmap(QString::fromUtf8(":/Images/treatment_records_off.png")));
        treatmentHistory->setScaledContents(true);
        sessionOption = new QGroupBox(deviceBox);
        sessionOption->setObjectName(QString::fromUtf8("sessionOption"));
        sessionOption->setGeometry(QRect(80, 70, 251, 31));
        sessionOption->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        met = new QLabel(sessionOption);
        met->setObjectName(QString::fromUtf8("met"));
        met->setGeometry(QRect(40, 0, 31, 31));
        met->setPixmap(QPixmap(QString::fromUtf8(":/Images/met_off.png")));
        met->setScaledContents(true);
        sub_delta = new QLabel(sessionOption);
        sub_delta->setObjectName(QString::fromUtf8("sub_delta"));
        sub_delta->setGeometry(QRect(100, 0, 31, 31));
        sub_delta->setPixmap(QPixmap(QString::fromUtf8(":/Images/sub_delta_off.png")));
        sub_delta->setScaledContents(true);
        theta = new QLabel(sessionOption);
        theta->setObjectName(QString::fromUtf8("theta"));
        theta->setGeometry(QRect(160, 0, 31, 31));
        theta->setPixmap(QPixmap(QString::fromUtf8(":/Images/theta_off.png")));
        theta->setScaledContents(true);
        alpha = new QLabel(sessionOption);
        alpha->setObjectName(QString::fromUtf8("alpha"));
        alpha->setGeometry(QRect(220, 0, 31, 31));
        alpha->setPixmap(QPixmap(QString::fromUtf8(":/Images/alpha_off.png")));
        alpha->setScaledContents(true);
        formLayoutWidget = new QWidget(sessionOption);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(130, 0, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        powerButton = new QPushButton(deviceBox);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(470, 350, 71, 61));
        powerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/power_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/Images/power_on.png"), QSize(), QIcon::Normal, QIcon::On);
        powerButton->setIcon(icon3);
        powerButton->setIconSize(QSize(60, 60));
        powerStatus = new QGraphicsView(deviceBox);
        powerStatus->setObjectName(QString::fromUtf8("powerStatus"));
        powerStatus->setGeometry(QRect(480, 320, 51, 20));
        powerStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        levelBox = new QGroupBox(deviceBox);
        levelBox->setObjectName(QString::fromUtf8("levelBox"));
        levelBox->setGeometry(QRect(170, 170, 71, 251));
        levelBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        level8 = new QLabel(levelBox);
        level8->setObjectName(QString::fromUtf8("level8"));
        level8->setGeometry(QRect(10, 10, 51, 21));
        level8->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_8_off.png")));
        level8->setScaledContents(true);
        level7 = new QLabel(levelBox);
        level7->setObjectName(QString::fromUtf8("level7"));
        level7->setGeometry(QRect(10, 40, 51, 21));
        level7->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_7_off.png")));
        level7->setScaledContents(true);
        level6 = new QLabel(levelBox);
        level6->setObjectName(QString::fromUtf8("level6"));
        level6->setGeometry(QRect(10, 70, 51, 21));
        level6->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_6_off.png")));
        level6->setScaledContents(true);
        level5 = new QLabel(levelBox);
        level5->setObjectName(QString::fromUtf8("level5"));
        level5->setGeometry(QRect(10, 100, 51, 21));
        level5->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_5_off.png")));
        level5->setScaledContents(true);
        level4 = new QLabel(levelBox);
        level4->setObjectName(QString::fromUtf8("level4"));
        level4->setGeometry(QRect(10, 130, 51, 21));
        level4->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_4_off.png")));
        level4->setScaledContents(true);
        level3 = new QLabel(levelBox);
        level3->setObjectName(QString::fromUtf8("level3"));
        level3->setGeometry(QRect(10, 160, 51, 21));
        level3->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_3_off.png")));
        level3->setScaledContents(true);
        level2 = new QLabel(levelBox);
        level2->setObjectName(QString::fromUtf8("level2"));
        level2->setGeometry(QRect(10, 190, 51, 21));
        level2->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_2_off.png")));
        level2->setScaledContents(true);
        level1 = new QLabel(levelBox);
        level1->setObjectName(QString::fromUtf8("level1"));
        level1->setGeometry(QRect(10, 220, 51, 21));
        level1->setPixmap(QPixmap(QString::fromUtf8(":/Images/lvl_1_off.png")));
        level1->setScaledContents(true);
        intLabel = new QLabel(deviceBox);
        intLabel->setObjectName(QString::fromUtf8("intLabel"));
        intLabel->setGeometry(QRect(380, 220, 61, 41));
        intLabel->setPixmap(QPixmap(QString::fromUtf8(":/Images/int_label.png")));
        intLabel->setScaledContents(true);
        levelBox_3 = new QGroupBox(deviceBox);
        levelBox_3->setObjectName(QString::fromUtf8("levelBox_3"));
        levelBox_3->setGeometry(QRect(250, 170, 71, 251));
        levelBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        tdcs1 = new QLabel(levelBox_3);
        tdcs1->setObjectName(QString::fromUtf8("tdcs1"));
        tdcs1->setGeometry(QRect(10, 210, 54, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        tdcs1->setFont(font);
        tdcs1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs2 = new QLabel(levelBox_3);
        tdcs2->setObjectName(QString::fromUtf8("tdcs2"));
        tdcs2->setGeometry(QRect(10, 180, 54, 41));
        tdcs2->setFont(font);
        tdcs2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs3 = new QLabel(levelBox_3);
        tdcs3->setObjectName(QString::fromUtf8("tdcs3"));
        tdcs3->setGeometry(QRect(10, 150, 54, 41));
        tdcs3->setFont(font);
        tdcs3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs4 = new QLabel(levelBox_3);
        tdcs4->setObjectName(QString::fromUtf8("tdcs4"));
        tdcs4->setGeometry(QRect(10, 120, 54, 41));
        tdcs4->setFont(font);
        tdcs4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs5 = new QLabel(levelBox_3);
        tdcs5->setObjectName(QString::fromUtf8("tdcs5"));
        tdcs5->setGeometry(QRect(10, 90, 54, 41));
        tdcs5->setFont(font);
        tdcs5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs6 = new QLabel(levelBox_3);
        tdcs6->setObjectName(QString::fromUtf8("tdcs6"));
        tdcs6->setGeometry(QRect(10, 60, 54, 41));
        tdcs6->setFont(font);
        tdcs6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs7 = new QLabel(levelBox_3);
        tdcs7->setObjectName(QString::fromUtf8("tdcs7"));
        tdcs7->setGeometry(QRect(10, 30, 54, 41));
        tdcs7->setFont(font);
        tdcs7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tdcs8 = new QLabel(levelBox_3);
        tdcs8->setObjectName(QString::fromUtf8("tdcs8"));
        tdcs8->setGeometry(QRect(10, 0, 54, 41));
        tdcs8->setFont(font);
        tdcs8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        logoLabel = new QLabel(deviceBox);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(450, 100, 241, 151));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/Images/oasis_pro_logo.png")));
        logoLabel->setScaledContents(true);
        sloganLabel = new QLabel(deviceBox);
        sloganLabel->setObjectName(QString::fromUtf8("sloganLabel"));
        sloganLabel->setGeometry(QRect(550, 10, 141, 41));
        sloganLabel->setPixmap(QPixmap(QString::fromUtf8(":/Images/mind_alive_slogan.png")));
        sloganLabel->setScaledContents(true);
        canadaLabel = new QLabel(deviceBox);
        canadaLabel->setObjectName(QString::fromUtf8("canadaLabel"));
        canadaLabel->setGeometry(QRect(560, 370, 121, 41));
        canadaLabel->setPixmap(QPixmap(QString::fromUtf8(":/Images/canada_label.png")));
        canadaLabel->setScaledContents(true);
        tdcsLabel = new QLabel(deviceBox);
        tdcsLabel->setObjectName(QString::fromUtf8("tdcsLabel"));
        tdcsLabel->setGeometry(QRect(260, 140, 61, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Sans"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        tdcsLabel->setFont(font1);
        tdcsLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        shortPulseCES = new QLabel(deviceBox);
        shortPulseCES->setObjectName(QString::fromUtf8("shortPulseCES"));
        shortPulseCES->setGeometry(QRect(400, 10, 31, 31));
        shortPulseCES->setPixmap(QPixmap(QString::fromUtf8(":/Images/short_pulse_ces_off.png")));
        shortPulseCES->setScaledContents(true);
        duty50CycleCES = new QLabel(deviceBox);
        duty50CycleCES->setObjectName(QString::fromUtf8("duty50CycleCES"));
        duty50CycleCES->setGeometry(QRect(450, 10, 31, 31));
        duty50CycleCES->setPixmap(QPixmap(QString::fromUtf8(":/Images/duty_cycle_ces_off.png")));
        duty50CycleCES->setScaledContents(true);
        leftCES = new QLabel(deviceBox);
        leftCES->setObjectName(QString::fromUtf8("leftCES"));
        leftCES->setGeometry(QRect(390, 40, 41, 31));
        leftCES->setPixmap(QPixmap(QString::fromUtf8(":/Images/left_ces_off.png")));
        leftCES->setScaledContents(true);
        rightCES = new QLabel(deviceBox);
        rightCES->setObjectName(QString::fromUtf8("rightCES"));
        rightCES->setGeometry(QRect(450, 40, 41, 31));
        rightCES->setPixmap(QPixmap(QString::fromUtf8(":/Images/right_ces_off.png")));
        rightCES->setScaledContents(true);
        cesOutput = new QLabel(deviceBox);
        cesOutput->setObjectName(QString::fromUtf8("cesOutput"));
        cesOutput->setGeometry(QRect(10, 330, 41, 41));
        cesOutput->setPixmap(QPixmap(QString::fromUtf8(":/Images/ces_output.png")));
        cesOutput->setScaledContents(true);
        audioInput = new QLabel(deviceBox);
        audioInput->setObjectName(QString::fromUtf8("audioInput"));
        audioInput->setGeometry(QRect(20, 10, 41, 41));
        audioInput->setPixmap(QPixmap(QString::fromUtf8(":/Images/audio_input.png")));
        audioInput->setScaledContents(true);
        recordButton = new QPushButton(deviceBox);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setGeometry(QRect(20, 130, 51, 51));
        recordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        recordButton->setIcon(icon4);
        recordButton->setIconSize(QSize(60, 60));
        recordButton->setFlat(false);
        label = new QLabel(deviceBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 190, 51, 31));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        controlBox = new QGroupBox(centralwidget);
        controlBox->setObjectName(QString::fromUtf8("controlBox"));
        controlBox->setGeometry(QRect(1010, 30, 241, 481));
        userSelection = new QLCDNumber(controlBox);
        userSelection->setObjectName(QString::fromUtf8("userSelection"));
        userSelection->setGeometry(QRect(60, 70, 121, 23));
        userSelection->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        userSelection->setSmallDecimalPoint(false);
        userSelection->setDigitCount(2);
        userSelection->setProperty("intValue", QVariant(1));
        userLeft = new QPushButton(controlBox);
        userLeft->setObjectName(QString::fromUtf8("userLeft"));
        userLeft->setGeometry(QRect(30, 70, 31, 25));
        userRight = new QPushButton(controlBox);
        userRight->setObjectName(QString::fromUtf8("userRight"));
        userRight->setGeometry(QRect(180, 70, 31, 25));
        selectUserButton = new QPushButton(controlBox);
        selectUserButton->setObjectName(QString::fromUtf8("selectUserButton"));
        selectUserButton->setGeometry(QRect(30, 100, 181, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Sans Narrow"));
        font2.setPointSize(11);
        selectUserButton->setFont(font2);
        graphicsView_3 = new QGraphicsView(controlBox);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 310, 256, 171));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 192, 195);"));
        createUserButton = new QPushButton(controlBox);
        createUserButton->setObjectName(QString::fromUtf8("createUserButton"));
        createUserButton->setGeometry(QRect(30, 220, 181, 31));
        createUserButton->setFont(font2);
        enterUserTextbox = new QTextEdit(controlBox);
        enterUserTextbox->setObjectName(QString::fromUtf8("enterUserTextbox"));
        enterUserTextbox->setGeometry(QRect(30, 180, 181, 31));
        graphicsView_7 = new QGraphicsView(controlBox);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(0, 10, 241, 271));
        graphicsView_7->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        graphicsView_6 = new QGraphicsView(controlBox);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(20, 30, 201, 231));
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        selectUserLabel = new QLabel(controlBox);
        selectUserLabel->setObjectName(QString::fromUtf8("selectUserLabel"));
        selectUserLabel->setGeometry(QRect(20, 30, 201, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Liberation Sans Narrow"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        selectUserLabel->setFont(font3);
        selectUserLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 0, 4);"));
        selectUserLabel->setAlignment(Qt::AlignCenter);
        createNewUserLabel = new QLabel(controlBox);
        createNewUserLabel->setObjectName(QString::fromUtf8("createNewUserLabel"));
        createNewUserLabel->setGeometry(QRect(20, 140, 201, 31));
        createNewUserLabel->setFont(font3);
        createNewUserLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 0, 4);"));
        createNewUserLabel->setAlignment(Qt::AlignCenter);
        controlsLabel = new QLabel(controlBox);
        controlsLabel->setObjectName(QString::fromUtf8("controlsLabel"));
        controlsLabel->setGeometry(QRect(0, 280, 241, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Liberation Sans Narrow"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        controlsLabel->setFont(font4);
        controlsLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 221, 210);"));
        controlsLabel->setAlignment(Qt::AlignCenter);
        replaceBattery = new QPushButton(controlBox);
        replaceBattery->setObjectName(QString::fromUtf8("replaceBattery"));
        replaceBattery->setGeometry(QRect(20, 320, 201, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Liberation Sans Narrow"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setWeight(50);
        replaceBattery->setFont(font5);
        wetEarLobes = new QPushButton(controlBox);
        wetEarLobes->setObjectName(QString::fromUtf8("wetEarLobes"));
        wetEarLobes->setGeometry(QRect(20, 360, 201, 31));
        wetEarLobes->setFont(font5);
        connectLeftClip = new QPushButton(controlBox);
        connectLeftClip->setObjectName(QString::fromUtf8("connectLeftClip"));
        connectLeftClip->setGeometry(QRect(20, 400, 201, 31));
        connectLeftClip->setFont(font5);
        graphicsView_7->raise();
        graphicsView_3->raise();
        graphicsView_6->raise();
        selectUserLabel->raise();
        userSelection->raise();
        userRight->raise();
        userLeft->raise();
        selectUserButton->raise();
        createNewUserLabel->raise();
        enterUserTextbox->raise();
        createUserButton->raise();
        controlsLabel->raise();
        replaceBattery->raise();
        wetEarLobes->raise();
        connectLeftClip->raise();
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 60, 701, 431));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 40, 741, 471));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        graphicsView_4 = new QGraphicsView(centralwidget);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(760, 40, 241, 471));
        graphicsView_4->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        graphicsView_5 = new QGraphicsView(centralwidget);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(780, 60, 201, 431));
        graphicsView_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        userDesignedSessionsLabel = new QLabel(centralwidget);
        userDesignedSessionsLabel->setObjectName(QString::fromUtf8("userDesignedSessionsLabel"));
        userDesignedSessionsLabel->setGeometry(QRect(780, 60, 201, 31));
        userDesignedSessionsLabel->setFont(font3);
        userDesignedSessionsLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 42);"));
        userDesignedSessionsLabel->setAlignment(Qt::AlignCenter);
        treatmentHistoryLabel = new QLabel(centralwidget);
        treatmentHistoryLabel->setObjectName(QString::fromUtf8("treatmentHistoryLabel"));
        treatmentHistoryLabel->setGeometry(QRect(780, 250, 201, 31));
        treatmentHistoryLabel->setFont(font3);
        treatmentHistoryLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 250, 0);"));
        treatmentHistoryLabel->setAlignment(Qt::AlignCenter);
        treatmentHistoryList = new QListWidget(centralwidget);
        treatmentHistoryList->setObjectName(QString::fromUtf8("treatmentHistoryList"));
        treatmentHistoryList->setGeometry(QRect(780, 280, 201, 211));
        userDesignedList = new QListWidget(centralwidget);
        userDesignedList->setObjectName(QString::fromUtf8("userDesignedList"));
        userDesignedList->setGeometry(QRect(780, 90, 201, 161));
        connectRightCLip = new QPushButton(centralwidget);
        connectRightCLip->setObjectName(QString::fromUtf8("connectRightCLip"));
        connectRightCLip->setGeometry(QRect(1030, 470, 201, 31));
        connectRightCLip->setFont(font5);
        MainWindow->setCentralWidget(centralwidget);
        graphicsView_2->raise();
        controlBox->raise();
        graphicsView->raise();
        deviceBox->raise();
        graphicsView_4->raise();
        graphicsView_5->raise();
        userDesignedSessionsLabel->raise();
        treatmentHistoryLabel->raise();
        treatmentHistoryList->raise();
        userDesignedList->raise();
        connectRightCLip->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1278, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        deviceBox->setTitle(QApplication::translate("MainWindow", "Device", nullptr));
        selectButton->setText(QString());
        upButton->setText(QString());
        downButton->setText(QString());
        sessionGroup->setTitle(QString());
        mins20->setText(QString());
        mins45->setText(QString());
        userDesigned->setText(QString());
        treatmentHistory->setText(QString());
        sessionOption->setTitle(QString());
        met->setText(QString());
        sub_delta->setText(QString());
        theta->setText(QString());
        alpha->setText(QString());
        powerButton->setText(QString());
        levelBox->setTitle(QString());
        level8->setText(QString());
        level7->setText(QString());
        level6->setText(QString());
        level5->setText(QString());
        level4->setText(QString());
        level3->setText(QString());
        level2->setText(QString());
        level1->setText(QString());
        intLabel->setText(QString());
        levelBox_3->setTitle(QString());
        tdcs1->setText(QApplication::translate("MainWindow", "0.25", nullptr));
        tdcs2->setText(QApplication::translate("MainWindow", "0.50", nullptr));
        tdcs3->setText(QApplication::translate("MainWindow", "0.75", nullptr));
        tdcs4->setText(QApplication::translate("MainWindow", "1.00", nullptr));
        tdcs5->setText(QApplication::translate("MainWindow", "1.50", nullptr));
        tdcs6->setText(QApplication::translate("MainWindow", "2.00", nullptr));
        tdcs7->setText(QApplication::translate("MainWindow", "\342\212\2251", nullptr));
        tdcs8->setText(QApplication::translate("MainWindow", "\342\212\2252", nullptr));
        logoLabel->setText(QString());
        sloganLabel->setText(QString());
        canadaLabel->setText(QString());
        tdcsLabel->setText(QApplication::translate("MainWindow", "tDCS", nullptr));
        shortPulseCES->setText(QString());
        duty50CycleCES->setText(QString());
        leftCES->setText(QString());
        rightCES->setText(QString());
        cesOutput->setText(QString());
        audioInput->setText(QString());
        recordButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "REC", nullptr));
        controlBox->setTitle(QString());
        userLeft->setText(QApplication::translate("MainWindow", "<", nullptr));
        userRight->setText(QApplication::translate("MainWindow", ">", nullptr));
        selectUserButton->setText(QApplication::translate("MainWindow", "SELECT", nullptr));
        createUserButton->setText(QApplication::translate("MainWindow", "CREATE", nullptr));
        enterUserTextbox->setPlaceholderText(QApplication::translate("MainWindow", "Username", nullptr));
        selectUserLabel->setText(QApplication::translate("MainWindow", "SELECT USER", nullptr));
        createNewUserLabel->setText(QApplication::translate("MainWindow", "CREATE NEW USER", nullptr));
        controlsLabel->setText(QApplication::translate("MainWindow", "CONTROLS", nullptr));
        replaceBattery->setText(QApplication::translate("MainWindow", "REPLACE BATTERY", nullptr));
        wetEarLobes->setText(QApplication::translate("MainWindow", "WET EAR LOBES", nullptr));
        connectLeftClip->setText(QApplication::translate("MainWindow", "CONNECT LEFT EAR CLIP", nullptr));
        userDesignedSessionsLabel->setText(QApplication::translate("MainWindow", "USER-DESIGNED SESSIONS", nullptr));
        treatmentHistoryLabel->setText(QApplication::translate("MainWindow", "TREATMENT HISTORY", nullptr));
        connectRightCLip->setText(QApplication::translate("MainWindow", "CONNECT RIGHT EAR CLIP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H