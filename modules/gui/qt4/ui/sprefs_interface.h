#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_interface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_INTERFACE_H
#define SPREFS_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "components/preferences_widgets.hpp"

QT_BEGIN_NAMESPACE

class Ui_SPrefsInterface
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *langBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *langCombo;
    QGroupBox *LooknfeelBox;
    QGridLayout *gridLayout;
    QRadioButton *skins;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *qt;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line;
    QStackedWidget *styleStackedWidget;
    QWidget *nativePage;
    QHBoxLayout *horizontalLayout_4;
    InterfacePreviewWidget *mainPreview;
    QWidget *native_zone;
    QGridLayout *gridLayout1;
    QCheckBox *resizingBox;
    QComboBox *notificationCombo;
    QComboBox *stylesCombo;
    QCheckBox *fsController;
    QCheckBox *pauseMinimizedBox;
    QLabel *notificationComboLabel;
    QCheckBox *minimalviewBox;
    QLabel *stylesLabel;
    QCheckBox *embedVideo;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *systrayBox;
    QWidget *skinsPage;
    QHBoxLayout *horizontalLayout_5;
    InterfacePreviewWidget *skinsPreview;
    QWidget *skins_zone;
    QGridLayout *gridLayout_7;
    QLabel *skinFileLabel;
    QLineEdit *fileSkin;
    QPushButton *skinBrowse;
    QLabel *skinsLabel;
    QGroupBox *OneInterfaceBox;
    QGridLayout *gridLayout_2;
    QCheckBox *OneInterfaceMode;
    QCheckBox *oneInstanceFromFile;
    QCheckBox *treePlaylist;
    QCheckBox *playPauseBox;
    QCheckBox *EnqueueOneInterfaceMode;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QSpinBox *updatesDays;
    QSpacerItem *horizontalSpacer_2;
    QLabel *filterLabel;
    QLineEdit *recentlyPlayedFilters;
    QCheckBox *saveRecentlyPlayed;
    QCheckBox *updatesBox;
    QCheckBox *MetadataNetworkAccessMode;
    QGroupBox *osGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *assocLabel;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *assoButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsInterface)
    {
        if (SPrefsInterface->objectName().isEmpty())
            SPrefsInterface->setObjectName(QString::fromUtf8("SPrefsInterface"));
        SPrefsInterface->resize(700, 640);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SPrefsInterface->sizePolicy().hasHeightForWidth());
        SPrefsInterface->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SPrefsInterface);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        langBox = new QGroupBox(SPrefsInterface);
        langBox->setObjectName(QString::fromUtf8("langBox"));
        horizontalLayout = new QHBoxLayout(langBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(langBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        langCombo = new QComboBox(langBox);
        langCombo->setObjectName(QString::fromUtf8("langCombo"));

        horizontalLayout->addWidget(langCombo);


        verticalLayout->addWidget(langBox);

        LooknfeelBox = new QGroupBox(SPrefsInterface);
        LooknfeelBox->setObjectName(QString::fromUtf8("LooknfeelBox"));
        gridLayout = new QGridLayout(LooknfeelBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        skins = new QRadioButton(LooknfeelBox);
        skins->setObjectName(QString::fromUtf8("skins"));

        gridLayout->addWidget(skins, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        qt = new QRadioButton(LooknfeelBox);
        qt->setObjectName(QString::fromUtf8("qt"));
        qt->setChecked(true);

        gridLayout->addWidget(qt, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        line = new QFrame(LooknfeelBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 2, 1, 3);

        styleStackedWidget = new QStackedWidget(LooknfeelBox);
        styleStackedWidget->setObjectName(QString::fromUtf8("styleStackedWidget"));
        nativePage = new QWidget();
        nativePage->setObjectName(QString::fromUtf8("nativePage"));
        horizontalLayout_4 = new QHBoxLayout(nativePage);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        mainPreview = new InterfacePreviewWidget(nativePage);
        mainPreview->setObjectName(QString::fromUtf8("mainPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainPreview->sizePolicy().hasHeightForWidth());
        mainPreview->setSizePolicy(sizePolicy1);
        mainPreview->setMinimumSize(QSize(122, 50));
        mainPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        mainPreview->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_4->addWidget(mainPreview);

        native_zone = new QWidget(nativePage);
        native_zone->setObjectName(QString::fromUtf8("native_zone"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(native_zone->sizePolicy().hasHeightForWidth());
        native_zone->setSizePolicy(sizePolicy2);
        gridLayout1 = new QGridLayout(native_zone);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(10, 0, -1, 0);
        resizingBox = new QCheckBox(native_zone);
        resizingBox->setObjectName(QString::fromUtf8("resizingBox"));

        gridLayout1->addWidget(resizingBox, 1, 2, 1, 2);

        notificationCombo = new QComboBox(native_zone);
        notificationCombo->setObjectName(QString::fromUtf8("notificationCombo"));

        gridLayout1->addWidget(notificationCombo, 5, 2, 1, 2);

        stylesCombo = new QComboBox(native_zone);
        stylesCombo->setObjectName(QString::fromUtf8("stylesCombo"));

        gridLayout1->addWidget(stylesCombo, 9, 2, 1, 2);

        fsController = new QCheckBox(native_zone);
        fsController->setObjectName(QString::fromUtf8("fsController"));

        gridLayout1->addWidget(fsController, 0, 0, 1, 5);

        pauseMinimizedBox = new QCheckBox(native_zone);
        pauseMinimizedBox->setObjectName(QString::fromUtf8("pauseMinimizedBox"));

        gridLayout1->addWidget(pauseMinimizedBox, 3, 2, 1, 2);

        notificationComboLabel = new QLabel(native_zone);
        notificationComboLabel->setObjectName(QString::fromUtf8("notificationComboLabel"));

        gridLayout1->addWidget(notificationComboLabel, 5, 0, 1, 1);

        minimalviewBox = new QCheckBox(native_zone);
        minimalviewBox->setObjectName(QString::fromUtf8("minimalviewBox"));

        gridLayout1->addWidget(minimalviewBox, 3, 0, 1, 1);

        stylesLabel = new QLabel(native_zone);
        stylesLabel->setObjectName(QString::fromUtf8("stylesLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stylesLabel->sizePolicy().hasHeightForWidth());
        stylesLabel->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(stylesLabel, 9, 0, 1, 1);

        embedVideo = new QCheckBox(native_zone);
        embedVideo->setObjectName(QString::fromUtf8("embedVideo"));

        gridLayout1->addWidget(embedVideo, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_7, 1, 4, 1, 1);

        systrayBox = new QCheckBox(native_zone);
        systrayBox->setObjectName(QString::fromUtf8("systrayBox"));

        gridLayout1->addWidget(systrayBox, 4, 0, 1, 2);


        horizontalLayout_4->addWidget(native_zone);

        styleStackedWidget->addWidget(nativePage);
        skinsPage = new QWidget();
        skinsPage->setObjectName(QString::fromUtf8("skinsPage"));
        horizontalLayout_5 = new QHBoxLayout(skinsPage);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        skinsPreview = new InterfacePreviewWidget(skinsPage);
        skinsPreview->setObjectName(QString::fromUtf8("skinsPreview"));
        sizePolicy1.setHeightForWidth(skinsPreview->sizePolicy().hasHeightForWidth());
        skinsPreview->setSizePolicy(sizePolicy1);
        skinsPreview->setMinimumSize(QSize(122, 50));
        skinsPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        skinsPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(skinsPreview);

        skins_zone = new QWidget(skinsPage);
        skins_zone->setObjectName(QString::fromUtf8("skins_zone"));
        skins_zone->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(skins_zone->sizePolicy().hasHeightForWidth());
        skins_zone->setSizePolicy(sizePolicy4);
        gridLayout_7 = new QGridLayout(skins_zone);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        skinFileLabel = new QLabel(skins_zone);
        skinFileLabel->setObjectName(QString::fromUtf8("skinFileLabel"));
        skinFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(skinFileLabel, 1, 1, 1, 1);

        fileSkin = new QLineEdit(skins_zone);
        fileSkin->setObjectName(QString::fromUtf8("fileSkin"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fileSkin->sizePolicy().hasHeightForWidth());
        fileSkin->setSizePolicy(sizePolicy5);

        gridLayout_7->addWidget(fileSkin, 1, 2, 1, 1);

        skinBrowse = new QPushButton(skins_zone);
        skinBrowse->setObjectName(QString::fromUtf8("skinBrowse"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(skinBrowse->sizePolicy().hasHeightForWidth());
        skinBrowse->setSizePolicy(sizePolicy6);

        gridLayout_7->addWidget(skinBrowse, 1, 3, 1, 1);

        skinsLabel = new QLabel(skins_zone);
        skinsLabel->setObjectName(QString::fromUtf8("skinsLabel"));
        sizePolicy4.setHeightForWidth(skinsLabel->sizePolicy().hasHeightForWidth());
        skinsLabel->setSizePolicy(sizePolicy4);
        skinsLabel->setFrameShape(QFrame::NoFrame);
        skinsLabel->setText(QString::fromUtf8("-This is the skinsLabel place-"));
        skinsLabel->setTextFormat(Qt::RichText);
        skinsLabel->setScaledContents(false);
        skinsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        skinsLabel->setWordWrap(true);
        skinsLabel->setMargin(5);
        skinsLabel->setOpenExternalLinks(true);

        gridLayout_7->addWidget(skinsLabel, 2, 1, 1, 3);


        horizontalLayout_5->addWidget(skins_zone);

        styleStackedWidget->addWidget(skinsPage);

        gridLayout->addWidget(styleStackedWidget, 2, 0, 6, 7);


        verticalLayout->addWidget(LooknfeelBox);

        OneInterfaceBox = new QGroupBox(SPrefsInterface);
        OneInterfaceBox->setObjectName(QString::fromUtf8("OneInterfaceBox"));
        gridLayout_2 = new QGridLayout(OneInterfaceBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        OneInterfaceMode = new QCheckBox(OneInterfaceBox);
        OneInterfaceMode->setObjectName(QString::fromUtf8("OneInterfaceMode"));

        gridLayout_2->addWidget(OneInterfaceMode, 0, 0, 1, 1);

        oneInstanceFromFile = new QCheckBox(OneInterfaceBox);
        oneInstanceFromFile->setObjectName(QString::fromUtf8("oneInstanceFromFile"));

        gridLayout_2->addWidget(oneInstanceFromFile, 1, 0, 1, 2);

        treePlaylist = new QCheckBox(OneInterfaceBox);
        treePlaylist->setObjectName(QString::fromUtf8("treePlaylist"));

        gridLayout_2->addWidget(treePlaylist, 2, 0, 1, 1);

        playPauseBox = new QCheckBox(OneInterfaceBox);
        playPauseBox->setObjectName(QString::fromUtf8("playPauseBox"));

        gridLayout_2->addWidget(playPauseBox, 2, 1, 1, 1);

        EnqueueOneInterfaceMode = new QCheckBox(OneInterfaceBox);
        EnqueueOneInterfaceMode->setObjectName(QString::fromUtf8("EnqueueOneInterfaceMode"));

        gridLayout_2->addWidget(EnqueueOneInterfaceMode, 0, 1, 1, 1);


        verticalLayout->addWidget(OneInterfaceBox);

        groupBox_2 = new QGroupBox(SPrefsInterface);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, -1, -1, 4);
        updatesDays = new QSpinBox(groupBox_2);
        updatesDays->setObjectName(QString::fromUtf8("updatesDays"));
        sizePolicy5.setHeightForWidth(updatesDays->sizePolicy().hasHeightForWidth());
        updatesDays->setSizePolicy(sizePolicy5);
        updatesDays->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(updatesDays, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        filterLabel = new QLabel(groupBox_2);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        filterLabel->setMargin(5);

        gridLayout_5->addWidget(filterLabel, 2, 2, 1, 1);

        recentlyPlayedFilters = new QLineEdit(groupBox_2);
        recentlyPlayedFilters->setObjectName(QString::fromUtf8("recentlyPlayedFilters"));
        sizePolicy5.setHeightForWidth(recentlyPlayedFilters->sizePolicy().hasHeightForWidth());
        recentlyPlayedFilters->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(recentlyPlayedFilters, 2, 3, 1, 2);

        saveRecentlyPlayed = new QCheckBox(groupBox_2);
        saveRecentlyPlayed->setObjectName(QString::fromUtf8("saveRecentlyPlayed"));
        saveRecentlyPlayed->setMinimumSize(QSize(220, 0));

        gridLayout_5->addWidget(saveRecentlyPlayed, 2, 0, 1, 1);

        updatesBox = new QCheckBox(groupBox_2);
        updatesBox->setObjectName(QString::fromUtf8("updatesBox"));
        updatesBox->setMinimumSize(QSize(220, 0));

        gridLayout_5->addWidget(updatesBox, 1, 0, 1, 1);

        MetadataNetworkAccessMode = new QCheckBox(groupBox_2);
        MetadataNetworkAccessMode->setObjectName(QString::fromUtf8("MetadataNetworkAccessMode"));

        gridLayout_5->addWidget(MetadataNetworkAccessMode, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        osGroupBox = new QGroupBox(SPrefsInterface);
        osGroupBox->setObjectName(QString::fromUtf8("osGroupBox"));
        gridLayout_4 = new QGridLayout(osGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        assocLabel = new QLabel(osGroupBox);
        assocLabel->setObjectName(QString::fromUtf8("assocLabel"));
        sizePolicy3.setHeightForWidth(assocLabel->sizePolicy().hasHeightForWidth());
        assocLabel->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(assocLabel, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 2, 1, 1, 1);

        assoButton = new QPushButton(osGroupBox);
        assoButton->setObjectName(QString::fromUtf8("assoButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(assoButton->sizePolicy().hasHeightForWidth());
        assoButton->setSizePolicy(sizePolicy7);
        assoButton->setMinimumSize(QSize(220, 0));

        gridLayout_4->addWidget(assoButton, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(135, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 2, 3, 1, 1);


        verticalLayout->addWidget(osGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(langCombo);
        notificationComboLabel->setBuddy(notificationCombo);
        stylesLabel->setBuddy(stylesCombo);
        skinFileLabel->setBuddy(fileSkin);
        filterLabel->setBuddy(recentlyPlayedFilters);
        assocLabel->setBuddy(assoButton);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(langCombo, qt);
        QWidget::setTabOrder(qt, skins);
        QWidget::setTabOrder(skins, fsController);
        QWidget::setTabOrder(fsController, embedVideo);
        QWidget::setTabOrder(embedVideo, minimalviewBox);
        QWidget::setTabOrder(minimalviewBox, systrayBox);
        QWidget::setTabOrder(systrayBox, resizingBox);
        QWidget::setTabOrder(resizingBox, pauseMinimizedBox);
        QWidget::setTabOrder(pauseMinimizedBox, notificationCombo);
        QWidget::setTabOrder(notificationCombo, stylesCombo);
        QWidget::setTabOrder(stylesCombo, OneInterfaceMode);
        QWidget::setTabOrder(OneInterfaceMode, oneInstanceFromFile);
        QWidget::setTabOrder(oneInstanceFromFile, treePlaylist);
        QWidget::setTabOrder(treePlaylist, EnqueueOneInterfaceMode);
        QWidget::setTabOrder(EnqueueOneInterfaceMode, playPauseBox);
        QWidget::setTabOrder(playPauseBox, updatesBox);
        QWidget::setTabOrder(updatesBox, saveRecentlyPlayed);
        QWidget::setTabOrder(saveRecentlyPlayed, updatesDays);
        QWidget::setTabOrder(updatesDays, recentlyPlayedFilters);
        QWidget::setTabOrder(recentlyPlayedFilters, assoButton);
        QWidget::setTabOrder(assoButton, skinBrowse);
        QWidget::setTabOrder(skinBrowse, fileSkin);

        retranslateUi(SPrefsInterface);

        styleStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SPrefsInterface);
    } // setupUi

    void retranslateUi(QWidget *SPrefsInterface)
    {
        SPrefsInterface->setWindowTitle(Q_("Form", 0));
        langBox->setTitle(Q_("Language", 0));
        label->setText(Q_("Menus language:", 0));
        LooknfeelBox->setTitle(Q_("Look and feel", 0));
        skins->setText(Q_("Use custom skin", 0));
#ifndef QT_NO_TOOLTIP
        qt->setToolTip(Q_("This is VLC's default interface, with a native look and feel.", 0));
#endif // QT_NO_TOOLTIP
        qt->setText(Q_("Use native style", 0));
        resizingBox->setText(Q_("Resize interface to video size", 0));
        fsController->setText(Q_("Show controls in full screen mode", 0));
        pauseMinimizedBox->setText(Q_("Pause playback when minimized", 0));
        notificationComboLabel->setText(Q_("Show media change popup:", 0));
        minimalviewBox->setText(Q_("Start in minimal view mode", 0));
        stylesLabel->setText(Q_("Force window style:", 0));
        embedVideo->setText(Q_("Integrate video in interface", 0));
        systrayBox->setText(Q_("Show systray icon", 0));
        skinFileLabel->setText(Q_("Skin resource file:", 0));
        skinBrowse->setText(Q_("Choose...", 0));
        OneInterfaceBox->setTitle(Q_("Playlist and Instances", 0));
        OneInterfaceMode->setText(Q_("Allow only one instance", 0));
        oneInstanceFromFile->setText(Q_("Use only one instance when started from file manager", 0));
        treePlaylist->setText(Q_("Display playlist tree", 0));
        playPauseBox->setText(Q_("Pause on the last frame of a video", 0));
        EnqueueOneInterfaceMode->setText(Q_("Enqueue items into playlist in one instance mode", 0));
        groupBox_2->setTitle(Q_("Privacy / Network Interaction", 0));
        updatesDays->setSuffix(Q_(" days", 0));
        updatesDays->setPrefix(Q_("Every ", 0));
        filterLabel->setText(Q_("Filter:", 0));
#ifndef QT_NO_TOOLTIP
        recentlyPlayedFilters->setToolTip(Q_("Separate words by | (without space)", 0));
#endif // QT_NO_TOOLTIP
        saveRecentlyPlayed->setText(Q_("Save recently played items", 0));
        updatesBox->setText(Q_("Activate updates notifier", 0));
        MetadataNetworkAccessMode->setText(Q_("Allow metadata network access", 0));
        osGroupBox->setTitle(Q_("Operating System Integration", 0));
        assocLabel->setText(Q_("File extensions association", 0));
        assoButton->setText(Q_("Set up associations...", 0));
    } // retranslateUi

};

namespace Ui {
    class SPrefsInterface: public Ui_SPrefsInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_INTERFACE_H
