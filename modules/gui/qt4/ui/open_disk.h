#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open_disk.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_DISK_H
#define OPEN_DISK_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenDisk
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *diskGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *dvdRadioButton;
    QSpacerItem *spacerItem;
    QRadioButton *bdRadioButton;
    QRadioButton *audioCDRadioButton;
    QSpacerItem *spacerItem1;
    QRadioButton *vcdRadioButton;
    QSpacerItem *spacerItem2;
    QCheckBox *dvdsimple;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *deviceLabel;
    QComboBox *deviceCombo;
    QToolButton *ejectButton;
    QPushButton *browseDiscButton;
    QSpacerItem *spacerItem3;
    QGroupBox *diskOptionBox;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpinBox *titleSpin;
    QSpacerItem *horizontalSpacer;
    QLabel *chapterLabel;
    QSpinBox *chapterSpin;
    QGroupBox *diskOptionBox_2;
    QGridLayout *gridLayout_2;
    QLabel *audioLabel;
    QSpinBox *audioSpin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *subtitlesLabel;
    QSpinBox *subtitlesSpin;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *OpenDisk)
    {
        if (OpenDisk->objectName().isEmpty())
            OpenDisk->setObjectName(QString::fromUtf8("OpenDisk"));
        OpenDisk->resize(500, 319);
        OpenDisk->setMinimumSize(QSize(500, 0));
        verticalLayout = new QVBoxLayout(OpenDisk);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        diskGroupBox = new QGroupBox(OpenDisk);
        diskGroupBox->setObjectName(QString::fromUtf8("diskGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diskGroupBox->sizePolicy().hasHeightForWidth());
        diskGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(diskGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dvdRadioButton = new QRadioButton(diskGroupBox);
        dvdRadioButton->setObjectName(QString::fromUtf8("dvdRadioButton"));
        dvdRadioButton->setLayoutDirection(Qt::LeftToRight);
        dvdRadioButton->setChecked(true);

        gridLayout->addWidget(dvdRadioButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        bdRadioButton = new QRadioButton(diskGroupBox);
        bdRadioButton->setObjectName(QString::fromUtf8("bdRadioButton"));

        gridLayout->addWidget(bdRadioButton, 0, 3, 1, 1);

        audioCDRadioButton = new QRadioButton(diskGroupBox);
        audioCDRadioButton->setObjectName(QString::fromUtf8("audioCDRadioButton"));

        gridLayout->addWidget(audioCDRadioButton, 0, 5, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 6, 1, 1);

        vcdRadioButton = new QRadioButton(diskGroupBox);
        vcdRadioButton->setObjectName(QString::fromUtf8("vcdRadioButton"));

        gridLayout->addWidget(vcdRadioButton, 0, 7, 1, 1);

        spacerItem2 = new QSpacerItem(31, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 8, 1, 1);

        dvdsimple = new QCheckBox(diskGroupBox);
        dvdsimple->setObjectName(QString::fromUtf8("dvdsimple"));

        gridLayout->addWidget(dvdsimple, 1, 1, 1, 4);

        line = new QFrame(diskGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 3, 1, 6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        deviceLabel = new QLabel(diskGroupBox);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));

        horizontalLayout_5->addWidget(deviceLabel);

        deviceCombo = new QComboBox(diskGroupBox);
        deviceCombo->setObjectName(QString::fromUtf8("deviceCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deviceCombo->sizePolicy().hasHeightForWidth());
        deviceCombo->setSizePolicy(sizePolicy1);
        deviceCombo->setEditable(true);

        horizontalLayout_5->addWidget(deviceCombo);

        ejectButton = new QToolButton(diskGroupBox);
        ejectButton->setObjectName(QString::fromUtf8("ejectButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ejectButton->sizePolicy().hasHeightForWidth());
        ejectButton->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(ejectButton);

        browseDiscButton = new QPushButton(diskGroupBox);
        browseDiscButton->setObjectName(QString::fromUtf8("browseDiscButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(browseDiscButton->sizePolicy().hasHeightForWidth());
        browseDiscButton->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(browseDiscButton);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 9);

        spacerItem3 = new QSpacerItem(16, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 0, 4, 1, 1);


        verticalLayout->addWidget(diskGroupBox);

        diskOptionBox = new QGroupBox(OpenDisk);
        diskOptionBox->setObjectName(QString::fromUtf8("diskOptionBox"));
        horizontalLayout = new QHBoxLayout(diskOptionBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(diskOptionBox);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        horizontalLayout->addWidget(titleLabel);

        titleSpin = new QSpinBox(diskOptionBox);
        titleSpin->setObjectName(QString::fromUtf8("titleSpin"));
        sizePolicy3.setHeightForWidth(titleSpin->sizePolicy().hasHeightForWidth());
        titleSpin->setSizePolicy(sizePolicy3);
        titleSpin->setAutoFillBackground(false);
        titleSpin->setAlignment(Qt::AlignRight);
        titleSpin->setValue(0);

        horizontalLayout->addWidget(titleSpin);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chapterLabel = new QLabel(diskOptionBox);
        chapterLabel->setObjectName(QString::fromUtf8("chapterLabel"));

        horizontalLayout->addWidget(chapterLabel);

        chapterSpin = new QSpinBox(diskOptionBox);
        chapterSpin->setObjectName(QString::fromUtf8("chapterSpin"));
        sizePolicy3.setHeightForWidth(chapterSpin->sizePolicy().hasHeightForWidth());
        chapterSpin->setSizePolicy(sizePolicy3);
        chapterSpin->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(chapterSpin);


        verticalLayout->addWidget(diskOptionBox);

        diskOptionBox_2 = new QGroupBox(OpenDisk);
        diskOptionBox_2->setObjectName(QString::fromUtf8("diskOptionBox_2"));
        gridLayout_2 = new QGridLayout(diskOptionBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        audioLabel = new QLabel(diskOptionBox_2);
        audioLabel->setObjectName(QString::fromUtf8("audioLabel"));

        gridLayout_2->addWidget(audioLabel, 0, 0, 1, 1);

        audioSpin = new QSpinBox(diskOptionBox_2);
        audioSpin->setObjectName(QString::fromUtf8("audioSpin"));
        sizePolicy3.setHeightForWidth(audioSpin->sizePolicy().hasHeightForWidth());
        audioSpin->setSizePolicy(sizePolicy3);
        audioSpin->setAlignment(Qt::AlignRight);
        audioSpin->setMinimum(-1);
        audioSpin->setMaximum(10);
        audioSpin->setValue(-1);

        gridLayout_2->addWidget(audioSpin, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        subtitlesLabel = new QLabel(diskOptionBox_2);
        subtitlesLabel->setObjectName(QString::fromUtf8("subtitlesLabel"));

        gridLayout_2->addWidget(subtitlesLabel, 0, 3, 1, 1);

        subtitlesSpin = new QSpinBox(diskOptionBox_2);
        subtitlesSpin->setObjectName(QString::fromUtf8("subtitlesSpin"));
        sizePolicy3.setHeightForWidth(subtitlesSpin->sizePolicy().hasHeightForWidth());
        subtitlesSpin->setSizePolicy(sizePolicy3);
        subtitlesSpin->setAutoFillBackground(false);
        subtitlesSpin->setAlignment(Qt::AlignRight);
        subtitlesSpin->setMinimum(-1);
        subtitlesSpin->setMaximum(31);
        subtitlesSpin->setValue(-1);

        gridLayout_2->addWidget(subtitlesSpin, 0, 4, 1, 1);


        verticalLayout->addWidget(diskOptionBox_2);

        spacerItem4 = new QSpacerItem(181, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(spacerItem4);

#ifndef QT_NO_SHORTCUT
        deviceLabel->setBuddy(deviceCombo);
        titleLabel->setBuddy(titleSpin);
        chapterLabel->setBuddy(chapterSpin);
        audioLabel->setBuddy(audioSpin);
        subtitlesLabel->setBuddy(subtitlesSpin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(dvdRadioButton, bdRadioButton);
        QWidget::setTabOrder(bdRadioButton, audioCDRadioButton);
        QWidget::setTabOrder(audioCDRadioButton, vcdRadioButton);
        QWidget::setTabOrder(vcdRadioButton, dvdsimple);
        QWidget::setTabOrder(dvdsimple, deviceCombo);
        QWidget::setTabOrder(deviceCombo, ejectButton);
        QWidget::setTabOrder(ejectButton, browseDiscButton);
        QWidget::setTabOrder(browseDiscButton, titleSpin);
        QWidget::setTabOrder(titleSpin, chapterSpin);
        QWidget::setTabOrder(chapterSpin, audioSpin);
        QWidget::setTabOrder(audioSpin, subtitlesSpin);

        retranslateUi(OpenDisk);

        QMetaObject::connectSlotsByName(OpenDisk);
    } // setupUi

    void retranslateUi(QWidget *OpenDisk)
    {
        OpenDisk->setWindowTitle(Q_("Form", 0));
        diskGroupBox->setTitle(Q_("Disc Selection", 0));
        dvdRadioButton->setText(Q_("DVD", 0));
        bdRadioButton->setText(Q_("Blu-ray", 0));
        audioCDRadioButton->setText(Q_("Audio CD", 0));
        vcdRadioButton->setText(Q_("SVCD/VCD", 0));
#ifndef QT_NO_TOOLTIP
        dvdsimple->setToolTip(Q_("Disable Disc Menus", 0));
#endif // QT_NO_TOOLTIP
        dvdsimple->setText(Q_("No disc menus", 0));
        deviceLabel->setText(Q_("Disc device", 0));
        browseDiscButton->setText(Q_("Browse...", 0));
        diskOptionBox->setTitle(Q_("Starting Position", 0));
        titleLabel->setText(Q_("Title", 0));
        chapterLabel->setText(Q_("Chapter", 0));
        diskOptionBox_2->setTitle(Q_("Audio and Subtitles", 0));
        audioLabel->setText(Q_("Audio track", 0));
        subtitlesLabel->setText(Q_("Subtitle track", 0));
        subtitlesSpin->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenDisk: public Ui_OpenDisk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_DISK_H
