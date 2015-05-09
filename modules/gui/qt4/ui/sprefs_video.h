#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_video.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_VIDEO_H
#define SPREFS_VIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsVideo
{
public:
    QVBoxLayout *verticalLayout_3;
    QCheckBox *enableVideo;
    QWidget *videoZone;
    QVBoxLayout *videoZoneLayout;
    QGroupBox *displayBox;
    QGridLayout *gridLayout;
    QCheckBox *fullscreen;
    QCheckBox *overlay;
    QCheckBox *hwYUVBox;
    QCheckBox *alwaysOnTop;
    QCheckBox *windowDecorations;
    QLabel *voutLabel;
    QComboBox *outputModule;
    QGroupBox *directXBox;
    QGridLayout *gridLayout_4;
    QLabel *dxDeviceLabel;
    QComboBox *dXdisplayDevice;
    QGroupBox *kvaBox;
    QGridLayout *gridLayout_3;
    QCheckBox *kvaFixT23;
    QLabel *kvaVideoModeLabel;
    QComboBox *kvaVideoMode;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_1;
    QLabel *deinterLabel;
    QComboBox *deinterlaceBox;
    QLabel *deinterModeLabel;
    QComboBox *deinterlaceModeBox;
    QLineEdit *arLine;
    QLabel *arLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *dirLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *snapshotsDirectory;
    QPushButton *snapshotsDirectoryBrowse;
    QLabel *prefixLabel;
    QLineEdit *snapshotsPrefix;
    QCheckBox *snapshotsSequentialNumbering;
    QLabel *formatLabel;
    QComboBox *snapshotsFormat;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsVideo)
    {
        if (SPrefsVideo->objectName().isEmpty())
            SPrefsVideo->setObjectName(QString::fromUtf8("SPrefsVideo"));
        SPrefsVideo->resize(682, 577);
        verticalLayout_3 = new QVBoxLayout(SPrefsVideo);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        enableVideo = new QCheckBox(SPrefsVideo);
        enableVideo->setObjectName(QString::fromUtf8("enableVideo"));
        enableVideo->setChecked(true);

        verticalLayout_3->addWidget(enableVideo);

        videoZone = new QWidget(SPrefsVideo);
        videoZone->setObjectName(QString::fromUtf8("videoZone"));
        videoZoneLayout = new QVBoxLayout(videoZone);
        videoZoneLayout->setObjectName(QString::fromUtf8("videoZoneLayout"));
        videoZoneLayout->setContentsMargins(0, 0, 0, 0);
        displayBox = new QGroupBox(videoZone);
        displayBox->setObjectName(QString::fromUtf8("displayBox"));
        gridLayout = new QGridLayout(displayBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fullscreen = new QCheckBox(displayBox);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));

        gridLayout->addWidget(fullscreen, 0, 0, 1, 1);

        overlay = new QCheckBox(displayBox);
        overlay->setObjectName(QString::fromUtf8("overlay"));

        gridLayout->addWidget(overlay, 1, 0, 1, 1);

        hwYUVBox = new QCheckBox(displayBox);
        hwYUVBox->setObjectName(QString::fromUtf8("hwYUVBox"));

        gridLayout->addWidget(hwYUVBox, 1, 1, 1, 1);

        alwaysOnTop = new QCheckBox(displayBox);
        alwaysOnTop->setObjectName(QString::fromUtf8("alwaysOnTop"));

        gridLayout->addWidget(alwaysOnTop, 2, 0, 1, 1);

        windowDecorations = new QCheckBox(displayBox);
        windowDecorations->setObjectName(QString::fromUtf8("windowDecorations"));

        gridLayout->addWidget(windowDecorations, 2, 1, 1, 1);

        voutLabel = new QLabel(displayBox);
        voutLabel->setObjectName(QString::fromUtf8("voutLabel"));

        gridLayout->addWidget(voutLabel, 3, 0, 1, 1);

        outputModule = new QComboBox(displayBox);
        outputModule->setObjectName(QString::fromUtf8("outputModule"));
        outputModule->setMaxVisibleItems(15);

        gridLayout->addWidget(outputModule, 3, 1, 1, 1);


        videoZoneLayout->addWidget(displayBox);

        directXBox = new QGroupBox(videoZone);
        directXBox->setObjectName(QString::fromUtf8("directXBox"));
        gridLayout_4 = new QGridLayout(directXBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        dxDeviceLabel = new QLabel(directXBox);
        dxDeviceLabel->setObjectName(QString::fromUtf8("dxDeviceLabel"));

        gridLayout_4->addWidget(dxDeviceLabel, 0, 0, 1, 1);

        dXdisplayDevice = new QComboBox(directXBox);
        dXdisplayDevice->setObjectName(QString::fromUtf8("dXdisplayDevice"));

        gridLayout_4->addWidget(dXdisplayDevice, 0, 1, 1, 1);


        videoZoneLayout->addWidget(directXBox);

        kvaBox = new QGroupBox(videoZone);
        kvaBox->setObjectName(QString::fromUtf8("kvaBox"));
        gridLayout_3 = new QGridLayout(kvaBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        kvaFixT23 = new QCheckBox(kvaBox);
        kvaFixT23->setObjectName(QString::fromUtf8("kvaFixT23"));

        gridLayout_3->addWidget(kvaFixT23, 0, 0, 1, 1);

        kvaVideoModeLabel = new QLabel(kvaBox);
        kvaVideoModeLabel->setObjectName(QString::fromUtf8("kvaVideoModeLabel"));

        gridLayout_3->addWidget(kvaVideoModeLabel, 1, 0, 1, 1);

        kvaVideoMode = new QComboBox(kvaBox);
        kvaVideoMode->setObjectName(QString::fromUtf8("kvaVideoMode"));

        gridLayout_3->addWidget(kvaVideoMode, 1, 1, 1, 1);


        videoZoneLayout->addWidget(kvaBox);

        groupBox_2 = new QGroupBox(videoZone);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_1 = new QGridLayout(groupBox_2);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        deinterLabel = new QLabel(groupBox_2);
        deinterLabel->setObjectName(QString::fromUtf8("deinterLabel"));

        gridLayout_1->addWidget(deinterLabel, 0, 0, 1, 1);

        deinterlaceBox = new QComboBox(groupBox_2);
        deinterlaceBox->setObjectName(QString::fromUtf8("deinterlaceBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deinterlaceBox->sizePolicy().hasHeightForWidth());
        deinterlaceBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(deinterlaceBox, 0, 1, 1, 1);

        deinterModeLabel = new QLabel(groupBox_2);
        deinterModeLabel->setObjectName(QString::fromUtf8("deinterModeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deinterModeLabel->sizePolicy().hasHeightForWidth());
        deinterModeLabel->setSizePolicy(sizePolicy1);

        gridLayout_1->addWidget(deinterModeLabel, 0, 2, 1, 1);

        deinterlaceModeBox = new QComboBox(groupBox_2);
        deinterlaceModeBox->setObjectName(QString::fromUtf8("deinterlaceModeBox"));
        sizePolicy.setHeightForWidth(deinterlaceModeBox->sizePolicy().hasHeightForWidth());
        deinterlaceModeBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(deinterlaceModeBox, 0, 3, 1, 1);

        arLine = new QLineEdit(groupBox_2);
        arLine->setObjectName(QString::fromUtf8("arLine"));

        gridLayout_1->addWidget(arLine, 1, 1, 1, 3);

        arLabel = new QLabel(groupBox_2);
        arLabel->setObjectName(QString::fromUtf8("arLabel"));

        gridLayout_1->addWidget(arLabel, 1, 0, 1, 1);


        videoZoneLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(videoZone);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dirLabel = new QLabel(groupBox);
        dirLabel->setObjectName(QString::fromUtf8("dirLabel"));

        gridLayout_2->addWidget(dirLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        snapshotsDirectory = new QLineEdit(groupBox);
        snapshotsDirectory->setObjectName(QString::fromUtf8("snapshotsDirectory"));

        gridLayout_2->addWidget(snapshotsDirectory, 0, 2, 1, 1);

        snapshotsDirectoryBrowse = new QPushButton(groupBox);
        snapshotsDirectoryBrowse->setObjectName(QString::fromUtf8("snapshotsDirectoryBrowse"));

        gridLayout_2->addWidget(snapshotsDirectoryBrowse, 0, 3, 1, 1);

        prefixLabel = new QLabel(groupBox);
        prefixLabel->setObjectName(QString::fromUtf8("prefixLabel"));

        gridLayout_2->addWidget(prefixLabel, 1, 0, 1, 1);

        snapshotsPrefix = new QLineEdit(groupBox);
        snapshotsPrefix->setObjectName(QString::fromUtf8("snapshotsPrefix"));

        gridLayout_2->addWidget(snapshotsPrefix, 1, 2, 1, 1);

        snapshotsSequentialNumbering = new QCheckBox(groupBox);
        snapshotsSequentialNumbering->setObjectName(QString::fromUtf8("snapshotsSequentialNumbering"));

        gridLayout_2->addWidget(snapshotsSequentialNumbering, 1, 3, 1, 1);

        formatLabel = new QLabel(groupBox);
        formatLabel->setObjectName(QString::fromUtf8("formatLabel"));

        gridLayout_2->addWidget(formatLabel, 2, 0, 1, 1);

        snapshotsFormat = new QComboBox(groupBox);
        snapshotsFormat->setObjectName(QString::fromUtf8("snapshotsFormat"));

        gridLayout_2->addWidget(snapshotsFormat, 2, 2, 1, 1);


        videoZoneLayout->addWidget(groupBox);


        verticalLayout_3->addWidget(videoZone);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        voutLabel->setBuddy(outputModule);
        dxDeviceLabel->setBuddy(dXdisplayDevice);
        kvaVideoModeLabel->setBuddy(kvaVideoMode);
        deinterLabel->setBuddy(deinterlaceBox);
        deinterModeLabel->setBuddy(deinterlaceModeBox);
        arLabel->setBuddy(arLine);
        dirLabel->setBuddy(snapshotsDirectory);
        prefixLabel->setBuddy(snapshotsPrefix);
        formatLabel->setBuddy(snapshotsFormat);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(enableVideo, fullscreen);
        QWidget::setTabOrder(fullscreen, overlay);
        QWidget::setTabOrder(overlay, hwYUVBox);
        QWidget::setTabOrder(hwYUVBox, alwaysOnTop);
        QWidget::setTabOrder(alwaysOnTop, windowDecorations);
        QWidget::setTabOrder(windowDecorations, outputModule);
        QWidget::setTabOrder(outputModule, dXdisplayDevice);
        QWidget::setTabOrder(dXdisplayDevice, kvaFixT23);
        QWidget::setTabOrder(kvaFixT23, kvaVideoMode);
        QWidget::setTabOrder(kvaVideoMode, deinterlaceBox);
        QWidget::setTabOrder(deinterlaceBox, deinterlaceModeBox);
        QWidget::setTabOrder(deinterlaceModeBox, arLine);
        QWidget::setTabOrder(arLine, snapshotsDirectory);
        QWidget::setTabOrder(snapshotsDirectory, snapshotsDirectoryBrowse);
        QWidget::setTabOrder(snapshotsDirectoryBrowse, snapshotsPrefix);
        QWidget::setTabOrder(snapshotsPrefix, snapshotsSequentialNumbering);
        QWidget::setTabOrder(snapshotsSequentialNumbering, snapshotsFormat);

        retranslateUi(SPrefsVideo);

        QMetaObject::connectSlotsByName(SPrefsVideo);
    } // setupUi

    void retranslateUi(QWidget *SPrefsVideo)
    {
        SPrefsVideo->setWindowTitle(Q_("Form", 0));
        enableVideo->setText(Q_("Enable video", 0));
        displayBox->setTitle(Q_("Display", 0));
        fullscreen->setText(Q_("Fullscreen", 0));
        overlay->setText(Q_("Accelerated video output (Overlay)", 0));
        hwYUVBox->setText(Q_("Use hardware YUV->RGB conversions", 0));
        alwaysOnTop->setText(Q_("Always on top", 0));
        windowDecorations->setText(Q_("Window decorations", 0));
        voutLabel->setText(Q_("Output", 0));
        directXBox->setTitle(Q_("DirectX", 0));
        dxDeviceLabel->setText(Q_("Display device", 0));
        kvaBox->setTitle(Q_("KVA", 0));
        kvaFixT23->setText(Q_("Enable a workaround for T23", 0));
        kvaVideoModeLabel->setText(Q_("Video mode", 0));
        groupBox_2->setTitle(Q_("Video", 0));
        deinterLabel->setText(Q_("Deinterlacing", 0));
        deinterModeLabel->setText(Q_("Mode", 0));
        arLabel->setText(Q_("Force Aspect Ratio", 0));
        groupBox->setTitle(Q_("Video snapshots", 0));
        dirLabel->setText(Q_("Directory", 0));
        snapshotsDirectoryBrowse->setText(Q_("Browse...", 0));
        prefixLabel->setText(Q_("Prefix", 0));
        snapshotsPrefix->setText(Q_("vlc-snap", 0));
        snapshotsSequentialNumbering->setText(Q_("Sequential numbering", 0));
        formatLabel->setText(Q_("Format", 0));
    } // retranslateUi

};

namespace Ui {
    class SPrefsVideo: public Ui_SPrefsVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_VIDEO_H
