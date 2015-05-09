#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'profiles.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PROFILES_H
#define PROFILES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "util/customwidgets.hpp"

QT_BEGIN_NAMESPACE

class Ui_Profiles
{
public:
    QFormLayout *formLayout_4;
    QTabWidget *tabWidget;
    QWidget *muxertab;
    QVBoxLayout *verticalLayout;
    QWidget *muxer;
    QGridLayout *gridLayout_5;
    QRadioButton *TSMux;
    QRadioButton *PSMux;
    QRadioButton *MPEG1Mux;
    QRadioButton *ASFMux;
    QRadioButton *WEBMux;
    QRadioButton *MJPEGMux;
    QRadioButton *MKVMux;
    QRadioButton *OggMux;
    QRadioButton *WAVMux;
    QRadioButton *RAWMux;
    QRadioButton *MOVMux;
    QRadioButton *FLVMux;
    QRadioButton *AVIMux;
    QGroupBox *muxcaps;
    QGridLayout *gridLayout_7;
    YesNoCheckBox *capsubs;
    YesNoCheckBox *capstream;
    YesNoCheckBox *capchaps;
    YesNoCheckBox *capaudio;
    YesNoCheckBox *capvideo;
    YesNoCheckBox *capmenu;
    QLabel *muxerwarning;
    QWidget *videoCodec;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *valueholder_video_enable;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *valueholder_video_copy;
    QTabWidget *transcodevideo;
    QWidget *tab_1;
    QFormLayout *formLayout_2;
    QLabel *vCodecLabel;
    QComboBox *valueholder_video_codec;
    QLabel *vBitrateLabel;
    QLabel *vFrameLabel;
    QDoubleSpinBox *valueholder_vcodec_framerate;
    QLabel *label_4;
    QLineEdit *valueholder_vcodec_custom;
    QLabel *label_3;
    QSpinBox *valueholder_vcodec_qp;
    QSpinBox *valueholder_vcodec_bitrate;
    QWidget *tab;
    QFormLayout *formLayout_6;
    QLabel *label;
    QLabel *vScaleLabel;
    QComboBox *valueholder_vcodec_scale;
    QLabel *Framesize;
    QHBoxLayout *horizontalLayout;
    QLabel *widthLabel;
    QSpinBox *valueholder_vcodec_width;
    QLabel *heightLabel;
    QSpinBox *valueholder_vcodec_height;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QListWidget *valueholder_video_filters;
    QWidget *audioCodec;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *valueholder_audio_enable;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *valueholder_audio_copy;
    QTabWidget *transcodeaudio;
    QWidget *tab_3;
    QFormLayout *formLayout;
    QLabel *aCodecLabel;
    QComboBox *valueholder_audio_codec;
    QLabel *aBitrateLabel;
    QLabel *aChannelsLabel;
    QSpinBox *valueholder_acodec_bitrate;
    QSpinBox *valueholder_acodec_channels;
    QLabel *aSampleLabel;
    QComboBox *valueholder_acodec_samplerate;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
    QListWidget *valueholder_audio_filters;
    QSpacerItem *verticalSpacer;
    QWidget *subtitles;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *valueholder_subtitles_enable;
    QFormLayout *formLayout_5;
    QLabel *label_2;
    QComboBox *valueholder_subtitles_codec;
    QCheckBox *valueholder_subtitles_overlay;
    QDialogButtonBox *buttonBox;
    QLineEdit *profileLine;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Profiles)
    {
        if (Profiles->objectName().isEmpty())
            Profiles->setObjectName(QString::fromUtf8("Profiles"));
        Profiles->resize(584, 471);
        formLayout_4 = new QFormLayout(Profiles);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        tabWidget = new QTabWidget(Profiles);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        muxertab = new QWidget();
        muxertab->setObjectName(QString::fromUtf8("muxertab"));
        verticalLayout = new QVBoxLayout(muxertab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        muxer = new QWidget(muxertab);
        muxer->setObjectName(QString::fromUtf8("muxer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(muxer->sizePolicy().hasHeightForWidth());
        muxer->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(muxer);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        TSMux = new QRadioButton(muxer);
        buttonGroup = new QButtonGroup(Profiles);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(TSMux);
        TSMux->setObjectName(QString::fromUtf8("TSMux"));
        TSMux->setChecked(true);

        gridLayout_5->addWidget(TSMux, 0, 0, 1, 1);

        PSMux = new QRadioButton(muxer);
        buttonGroup->addButton(PSMux);
        PSMux->setObjectName(QString::fromUtf8("PSMux"));

        gridLayout_5->addWidget(PSMux, 1, 0, 1, 1);

        MPEG1Mux = new QRadioButton(muxer);
        buttonGroup->addButton(MPEG1Mux);
        MPEG1Mux->setObjectName(QString::fromUtf8("MPEG1Mux"));

        gridLayout_5->addWidget(MPEG1Mux, 2, 0, 1, 1);

        ASFMux = new QRadioButton(muxer);
        buttonGroup->addButton(ASFMux);
        ASFMux->setObjectName(QString::fromUtf8("ASFMux"));

        gridLayout_5->addWidget(ASFMux, 3, 0, 1, 1);

        WEBMux = new QRadioButton(muxer);
        buttonGroup->addButton(WEBMux);
        WEBMux->setObjectName(QString::fromUtf8("WEBMux"));

        gridLayout_5->addWidget(WEBMux, 0, 1, 1, 1);

        MJPEGMux = new QRadioButton(muxer);
        buttonGroup->addButton(MJPEGMux);
        MJPEGMux->setObjectName(QString::fromUtf8("MJPEGMux"));

        gridLayout_5->addWidget(MJPEGMux, 1, 1, 1, 1);

        MKVMux = new QRadioButton(muxer);
        buttonGroup->addButton(MKVMux);
        MKVMux->setObjectName(QString::fromUtf8("MKVMux"));

        gridLayout_5->addWidget(MKVMux, 2, 1, 1, 1);

        OggMux = new QRadioButton(muxer);
        buttonGroup->addButton(OggMux);
        OggMux->setObjectName(QString::fromUtf8("OggMux"));

        gridLayout_5->addWidget(OggMux, 0, 2, 1, 1);

        WAVMux = new QRadioButton(muxer);
        buttonGroup->addButton(WAVMux);
        WAVMux->setObjectName(QString::fromUtf8("WAVMux"));

        gridLayout_5->addWidget(WAVMux, 1, 2, 1, 1);

        RAWMux = new QRadioButton(muxer);
        buttonGroup->addButton(RAWMux);
        RAWMux->setObjectName(QString::fromUtf8("RAWMux"));

        gridLayout_5->addWidget(RAWMux, 2, 2, 1, 1);

        MOVMux = new QRadioButton(muxer);
        buttonGroup->addButton(MOVMux);
        MOVMux->setObjectName(QString::fromUtf8("MOVMux"));

        gridLayout_5->addWidget(MOVMux, 0, 3, 1, 1);

        FLVMux = new QRadioButton(muxer);
        buttonGroup->addButton(FLVMux);
        FLVMux->setObjectName(QString::fromUtf8("FLVMux"));

        gridLayout_5->addWidget(FLVMux, 1, 3, 1, 1);

        AVIMux = new QRadioButton(muxer);
        buttonGroup->addButton(AVIMux);
        AVIMux->setObjectName(QString::fromUtf8("AVIMux"));

        gridLayout_5->addWidget(AVIMux, 2, 3, 1, 1);


        verticalLayout->addWidget(muxer);

        muxcaps = new QGroupBox(muxertab);
        muxcaps->setObjectName(QString::fromUtf8("muxcaps"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(muxcaps->sizePolicy().hasHeightForWidth());
        muxcaps->setSizePolicy(sizePolicy2);
        gridLayout_7 = new QGridLayout(muxcaps);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        capsubs = new YesNoCheckBox(muxcaps);
        capsubs->setObjectName(QString::fromUtf8("capsubs"));
        capsubs->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(capsubs, 0, 3, 1, 1);

        capstream = new YesNoCheckBox(muxcaps);
        capstream->setObjectName(QString::fromUtf8("capstream"));
        capstream->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(capstream, 0, 4, 1, 1);

        capchaps = new YesNoCheckBox(muxcaps);
        capchaps->setObjectName(QString::fromUtf8("capchaps"));
        capchaps->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(capchaps, 2, 4, 1, 1);

        capaudio = new YesNoCheckBox(muxcaps);
        capaudio->setObjectName(QString::fromUtf8("capaudio"));
        capaudio->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(capaudio, 2, 0, 1, 1);

        capvideo = new YesNoCheckBox(muxcaps);
        capvideo->setObjectName(QString::fromUtf8("capvideo"));
        capvideo->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(capvideo, 0, 0, 1, 1);

        capmenu = new YesNoCheckBox(muxcaps);
        capmenu->setObjectName(QString::fromUtf8("capmenu"));
        capmenu->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(capmenu, 2, 3, 1, 1);


        verticalLayout->addWidget(muxcaps);

        muxerwarning = new QLabel(muxertab);
        muxerwarning->setObjectName(QString::fromUtf8("muxerwarning"));
        sizePolicy2.setHeightForWidth(muxerwarning->sizePolicy().hasHeightForWidth());
        muxerwarning->setSizePolicy(sizePolicy2);
        muxerwarning->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(muxerwarning);

        tabWidget->addTab(muxertab, QString());
        videoCodec = new QWidget();
        videoCodec->setObjectName(QString::fromUtf8("videoCodec"));
        videoCodec->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(videoCodec);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        valueholder_video_enable = new QGroupBox(videoCodec);
        valueholder_video_enable->setObjectName(QString::fromUtf8("valueholder_video_enable"));
        valueholder_video_enable->setFlat(true);
        valueholder_video_enable->setCheckable(true);
        valueholder_video_enable->setChecked(true);
        verticalLayout_5 = new QVBoxLayout(valueholder_video_enable);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, 0, -1);
        valueholder_video_copy = new QCheckBox(valueholder_video_enable);
        valueholder_video_copy->setObjectName(QString::fromUtf8("valueholder_video_copy"));

        verticalLayout_5->addWidget(valueholder_video_copy);

        transcodevideo = new QTabWidget(valueholder_video_enable);
        transcodevideo->setObjectName(QString::fromUtf8("transcodevideo"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        formLayout_2 = new QFormLayout(tab_1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        vCodecLabel = new QLabel(tab_1);
        vCodecLabel->setObjectName(QString::fromUtf8("vCodecLabel"));
        vCodecLabel->setEnabled(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, vCodecLabel);

        valueholder_video_codec = new QComboBox(tab_1);
        valueholder_video_codec->setObjectName(QString::fromUtf8("valueholder_video_codec"));
        valueholder_video_codec->setEditable(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, valueholder_video_codec);

        vBitrateLabel = new QLabel(tab_1);
        vBitrateLabel->setObjectName(QString::fromUtf8("vBitrateLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, vBitrateLabel);

        vFrameLabel = new QLabel(tab_1);
        vFrameLabel->setObjectName(QString::fromUtf8("vFrameLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, vFrameLabel);

        valueholder_vcodec_framerate = new QDoubleSpinBox(tab_1);
        valueholder_vcodec_framerate->setObjectName(QString::fromUtf8("valueholder_vcodec_framerate"));
        valueholder_vcodec_framerate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, valueholder_vcodec_framerate);

        label_4 = new QLabel(tab_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        valueholder_vcodec_custom = new QLineEdit(tab_1);
        valueholder_vcodec_custom->setObjectName(QString::fromUtf8("valueholder_vcodec_custom"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, valueholder_vcodec_custom);

        label_3 = new QLabel(tab_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        valueholder_vcodec_qp = new QSpinBox(tab_1);
        valueholder_vcodec_qp->setObjectName(QString::fromUtf8("valueholder_vcodec_qp"));
        valueholder_vcodec_qp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, valueholder_vcodec_qp);

        valueholder_vcodec_bitrate = new QSpinBox(tab_1);
        valueholder_vcodec_bitrate->setObjectName(QString::fromUtf8("valueholder_vcodec_bitrate"));
        valueholder_vcodec_bitrate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        valueholder_vcodec_bitrate->setAccelerated(true);
        valueholder_vcodec_bitrate->setMinimum(0);
        valueholder_vcodec_bitrate->setMaximum(32768);
        valueholder_vcodec_bitrate->setSingleStep(16);
        valueholder_vcodec_bitrate->setValue(800);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, valueholder_vcodec_bitrate);

        transcodevideo->addTab(tab_1, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout_6 = new QFormLayout(tab);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setWordWrap(true);

        formLayout_6->setWidget(0, QFormLayout::SpanningRole, label);

        vScaleLabel = new QLabel(tab);
        vScaleLabel->setObjectName(QString::fromUtf8("vScaleLabel"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, vScaleLabel);

        valueholder_vcodec_scale = new QComboBox(tab);
        valueholder_vcodec_scale->setObjectName(QString::fromUtf8("valueholder_vcodec_scale"));
        valueholder_vcodec_scale->setEditable(true);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, valueholder_vcodec_scale);

        Framesize = new QLabel(tab);
        Framesize->setObjectName(QString::fromUtf8("Framesize"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, Framesize);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widthLabel = new QLabel(tab);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(widthLabel);

        valueholder_vcodec_width = new QSpinBox(tab);
        valueholder_vcodec_width->setObjectName(QString::fromUtf8("valueholder_vcodec_width"));
        valueholder_vcodec_width->setMaximum(9999);
        valueholder_vcodec_width->setSingleStep(8);

        horizontalLayout->addWidget(valueholder_vcodec_width);

        heightLabel = new QLabel(tab);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(heightLabel);

        valueholder_vcodec_height = new QSpinBox(tab);
        valueholder_vcodec_height->setObjectName(QString::fromUtf8("valueholder_vcodec_height"));
        valueholder_vcodec_height->setMaximum(9999);
        valueholder_vcodec_height->setSingleStep(8);

        horizontalLayout->addWidget(valueholder_vcodec_height);


        formLayout_6->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        transcodevideo->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        valueholder_video_filters = new QListWidget(tab_2);
        valueholder_video_filters->setObjectName(QString::fromUtf8("valueholder_video_filters"));

        gridLayout->addWidget(valueholder_video_filters, 0, 0, 2, 1);

        transcodevideo->addTab(tab_2, QString());

        verticalLayout_5->addWidget(transcodevideo);


        verticalLayout_2->addWidget(valueholder_video_enable);

        tabWidget->addTab(videoCodec, QString());
        audioCodec = new QWidget();
        audioCodec->setObjectName(QString::fromUtf8("audioCodec"));
        verticalLayout_3 = new QVBoxLayout(audioCodec);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        valueholder_audio_enable = new QGroupBox(audioCodec);
        valueholder_audio_enable->setObjectName(QString::fromUtf8("valueholder_audio_enable"));
        valueholder_audio_enable->setFlat(true);
        valueholder_audio_enable->setCheckable(true);
        verticalLayout_6 = new QVBoxLayout(valueholder_audio_enable);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, -1);
        valueholder_audio_copy = new QCheckBox(valueholder_audio_enable);
        valueholder_audio_copy->setObjectName(QString::fromUtf8("valueholder_audio_copy"));

        verticalLayout_6->addWidget(valueholder_audio_copy);

        transcodeaudio = new QTabWidget(valueholder_audio_enable);
        transcodeaudio->setObjectName(QString::fromUtf8("transcodeaudio"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayout = new QFormLayout(tab_3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        aCodecLabel = new QLabel(tab_3);
        aCodecLabel->setObjectName(QString::fromUtf8("aCodecLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, aCodecLabel);

        valueholder_audio_codec = new QComboBox(tab_3);
        valueholder_audio_codec->setObjectName(QString::fromUtf8("valueholder_audio_codec"));

        formLayout->setWidget(0, QFormLayout::FieldRole, valueholder_audio_codec);

        aBitrateLabel = new QLabel(tab_3);
        aBitrateLabel->setObjectName(QString::fromUtf8("aBitrateLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, aBitrateLabel);

        aChannelsLabel = new QLabel(tab_3);
        aChannelsLabel->setObjectName(QString::fromUtf8("aChannelsLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, aChannelsLabel);

        valueholder_acodec_bitrate = new QSpinBox(tab_3);
        valueholder_acodec_bitrate->setObjectName(QString::fromUtf8("valueholder_acodec_bitrate"));
        valueholder_acodec_bitrate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        valueholder_acodec_bitrate->setMinimum(8);
        valueholder_acodec_bitrate->setMaximum(512);
        valueholder_acodec_bitrate->setValue(128);

        formLayout->setWidget(1, QFormLayout::FieldRole, valueholder_acodec_bitrate);

        valueholder_acodec_channels = new QSpinBox(tab_3);
        valueholder_acodec_channels->setObjectName(QString::fromUtf8("valueholder_acodec_channels"));
        valueholder_acodec_channels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        valueholder_acodec_channels->setMinimum(1);
        valueholder_acodec_channels->setMaximum(10);
        valueholder_acodec_channels->setValue(2);

        formLayout->setWidget(2, QFormLayout::FieldRole, valueholder_acodec_channels);

        aSampleLabel = new QLabel(tab_3);
        aSampleLabel->setObjectName(QString::fromUtf8("aSampleLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, aSampleLabel);

        valueholder_acodec_samplerate = new QComboBox(tab_3);
        valueholder_acodec_samplerate->setObjectName(QString::fromUtf8("valueholder_acodec_samplerate"));

        formLayout->setWidget(3, QFormLayout::FieldRole, valueholder_acodec_samplerate);

        transcodeaudio->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        valueholder_audio_filters = new QListWidget(tab_4);
        valueholder_audio_filters->setObjectName(QString::fromUtf8("valueholder_audio_filters"));

        gridLayout_2->addWidget(valueholder_audio_filters, 0, 0, 2, 1);

        transcodeaudio->addTab(tab_4, QString());

        verticalLayout_6->addWidget(transcodeaudio);


        verticalLayout_3->addWidget(valueholder_audio_enable);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(audioCodec, QString());
        subtitles = new QWidget();
        subtitles->setObjectName(QString::fromUtf8("subtitles"));
        verticalLayout_4 = new QVBoxLayout(subtitles);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        valueholder_subtitles_enable = new QGroupBox(subtitles);
        valueholder_subtitles_enable->setObjectName(QString::fromUtf8("valueholder_subtitles_enable"));
        valueholder_subtitles_enable->setFlat(true);
        valueholder_subtitles_enable->setCheckable(true);
        formLayout_5 = new QFormLayout(valueholder_subtitles_enable);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_2 = new QLabel(valueholder_subtitles_enable);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_2);

        valueholder_subtitles_codec = new QComboBox(valueholder_subtitles_enable);
        valueholder_subtitles_codec->setObjectName(QString::fromUtf8("valueholder_subtitles_codec"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, valueholder_subtitles_codec);

        valueholder_subtitles_overlay = new QCheckBox(valueholder_subtitles_enable);
        valueholder_subtitles_overlay->setObjectName(QString::fromUtf8("valueholder_subtitles_overlay"));

        formLayout_5->setWidget(1, QFormLayout::SpanningRole, valueholder_subtitles_overlay);


        verticalLayout_4->addWidget(valueholder_subtitles_enable);

        tabWidget->addTab(subtitles, QString());

        formLayout_4->setWidget(3, QFormLayout::SpanningRole, tabWidget);

        buttonBox = new QDialogButtonBox(Profiles);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, buttonBox);

        profileLine = new QLineEdit(Profiles);
        profileLine->setObjectName(QString::fromUtf8("profileLine"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, profileLine);

        label_5 = new QLabel(Profiles);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_5);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_4->setItem(2, QFormLayout::SpanningRole, verticalSpacer_2);

#ifndef QT_NO_SHORTCUT
        vCodecLabel->setBuddy(valueholder_video_codec);
        vBitrateLabel->setBuddy(valueholder_vcodec_bitrate);
        vFrameLabel->setBuddy(valueholder_vcodec_framerate);
        label_4->setBuddy(valueholder_vcodec_custom);
        label_3->setBuddy(valueholder_vcodec_qp);
        vScaleLabel->setBuddy(valueholder_vcodec_scale);
        widthLabel->setBuddy(valueholder_vcodec_width);
        heightLabel->setBuddy(valueholder_vcodec_height);
        aCodecLabel->setBuddy(valueholder_audio_codec);
        aBitrateLabel->setBuddy(valueholder_acodec_bitrate);
        aChannelsLabel->setBuddy(valueholder_acodec_channels);
        aSampleLabel->setBuddy(valueholder_acodec_samplerate);
        label_2->setBuddy(valueholder_subtitles_codec);
        label_5->setBuddy(profileLine);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(profileLine, tabWidget);
        QWidget::setTabOrder(tabWidget, TSMux);
        QWidget::setTabOrder(TSMux, WEBMux);
        QWidget::setTabOrder(WEBMux, OggMux);
        QWidget::setTabOrder(OggMux, MOVMux);
        QWidget::setTabOrder(MOVMux, PSMux);
        QWidget::setTabOrder(PSMux, MJPEGMux);
        QWidget::setTabOrder(MJPEGMux, WAVMux);
        QWidget::setTabOrder(WAVMux, FLVMux);
        QWidget::setTabOrder(FLVMux, MPEG1Mux);
        QWidget::setTabOrder(MPEG1Mux, MKVMux);
        QWidget::setTabOrder(MKVMux, RAWMux);
        QWidget::setTabOrder(RAWMux, AVIMux);
        QWidget::setTabOrder(AVIMux, ASFMux);
        QWidget::setTabOrder(ASFMux, valueholder_video_enable);
        QWidget::setTabOrder(valueholder_video_enable, valueholder_video_copy);
        QWidget::setTabOrder(valueholder_video_copy, transcodevideo);
        QWidget::setTabOrder(transcodevideo, valueholder_video_codec);
        QWidget::setTabOrder(valueholder_video_codec, valueholder_vcodec_bitrate);
        QWidget::setTabOrder(valueholder_vcodec_bitrate, valueholder_vcodec_qp);
        QWidget::setTabOrder(valueholder_vcodec_qp, valueholder_vcodec_framerate);
        QWidget::setTabOrder(valueholder_vcodec_framerate, valueholder_vcodec_custom);
        QWidget::setTabOrder(valueholder_vcodec_custom, valueholder_vcodec_scale);
        QWidget::setTabOrder(valueholder_vcodec_scale, valueholder_vcodec_width);
        QWidget::setTabOrder(valueholder_vcodec_width, valueholder_vcodec_height);
        QWidget::setTabOrder(valueholder_vcodec_height, valueholder_video_filters);
        QWidget::setTabOrder(valueholder_video_filters, valueholder_audio_enable);
        QWidget::setTabOrder(valueholder_audio_enable, valueholder_audio_copy);
        QWidget::setTabOrder(valueholder_audio_copy, transcodeaudio);
        QWidget::setTabOrder(transcodeaudio, valueholder_audio_codec);
        QWidget::setTabOrder(valueholder_audio_codec, valueholder_acodec_bitrate);
        QWidget::setTabOrder(valueholder_acodec_bitrate, valueholder_acodec_channels);
        QWidget::setTabOrder(valueholder_acodec_channels, valueholder_acodec_samplerate);
        QWidget::setTabOrder(valueholder_acodec_samplerate, valueholder_audio_filters);
        QWidget::setTabOrder(valueholder_audio_filters, valueholder_subtitles_enable);
        QWidget::setTabOrder(valueholder_subtitles_enable, valueholder_subtitles_codec);
        QWidget::setTabOrder(valueholder_subtitles_codec, valueholder_subtitles_overlay);
        QWidget::setTabOrder(valueholder_subtitles_overlay, buttonBox);

        retranslateUi(Profiles);

        tabWidget->setCurrentIndex(0);
        transcodevideo->setCurrentIndex(0);
        transcodeaudio->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Profiles);
    } // setupUi

    void retranslateUi(QWidget *Profiles)
    {
        Profiles->setWindowTitle(Q_("Profile edition", 0));
        TSMux->setText(Q_("MPEG-TS", 0));
        PSMux->setText(Q_("MPEG-PS", 0));
        MPEG1Mux->setText(Q_("MPEG 1", 0));
        ASFMux->setText(Q_("ASF/WMV", 0));
        WEBMux->setText(Q_("Webm", 0));
        MJPEGMux->setText(Q_("MJPEG", 0));
        MKVMux->setText(Q_("MKV", 0));
        OggMux->setText(Q_("Ogg/Ogm", 0));
        WAVMux->setText(Q_("WAV", 0));
        RAWMux->setText(Q_("RAW", 0));
        MOVMux->setText(Q_("MP4/MOV", 0));
        FLVMux->setText(Q_("FLV", 0));
        AVIMux->setText(Q_("AVI", 0));
        muxcaps->setTitle(Q_("Features", 0));
        capsubs->setText(Q_("Subtitles", 0));
        capstream->setText(Q_("Streamable", 0));
        capchaps->setText(Q_("Chapters", 0));
        capaudio->setText(Q_("Audio", 0));
        capvideo->setText(Q_("Video", 0));
        capmenu->setText(Q_("Menus", 0));
        muxerwarning->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(muxertab), Q_("Encapsulation", 0));
        valueholder_video_enable->setTitle(Q_("Video", 0));
        valueholder_video_copy->setText(Q_("Keep original video track", 0));
        vCodecLabel->setText(Q_("Codec", 0));
        vBitrateLabel->setText(Q_("Bitrate", 0));
        vFrameLabel->setText(Q_("Frame Rate", 0));
        valueholder_vcodec_framerate->setSpecialValueText(Q_("Same as source", 0));
        valueholder_vcodec_framerate->setPrefix(QString());
        valueholder_vcodec_framerate->setSuffix(Q_(" fps", 0));
        label_4->setText(Q_("Custom options", 0));
        label_3->setText(Q_("Quality", 0));
        valueholder_vcodec_qp->setSpecialValueText(Q_("Not Used", 0));
        valueholder_vcodec_bitrate->setSpecialValueText(Q_("Not Used", 0));
        valueholder_vcodec_bitrate->setSuffix(Q_(" kb/s", 0));
        transcodevideo->setTabText(transcodevideo->indexOf(tab_1), Q_("Encoding parameters", 0));
        label->setText(Q_("You just need to fill one of the three following parameters, VLC will autodetect the other using the original aspect ratio", 0));
        vScaleLabel->setText(Q_("Scale", 0));
        Framesize->setText(Q_("Frame size", 0));
        widthLabel->setText(Q_("Width", 0));
        valueholder_vcodec_width->setSpecialValueText(Q_("Auto", 0));
        valueholder_vcodec_width->setSuffix(Q_("px", 0));
        heightLabel->setText(Q_("Height", 0));
        valueholder_vcodec_height->setSpecialValueText(Q_("Auto", 0));
        valueholder_vcodec_height->setSuffix(Q_("px", 0));
        transcodevideo->setTabText(transcodevideo->indexOf(tab), Q_("Resolution", 0));
        transcodevideo->setTabText(transcodevideo->indexOf(tab_2), Q_("Filters", 0));
        tabWidget->setTabText(tabWidget->indexOf(videoCodec), Q_("Video codec", 0));
        valueholder_audio_enable->setTitle(Q_("Audio", 0));
        valueholder_audio_copy->setText(Q_("Keep original audio track", 0));
        aCodecLabel->setText(Q_("Codec", 0));
        aBitrateLabel->setText(Q_("Bitrate", 0));
        aChannelsLabel->setText(Q_("Channels", 0));
        valueholder_acodec_bitrate->setSuffix(Q_(" kb/s", 0));
        aSampleLabel->setText(Q_("Sample Rate", 0));
        transcodeaudio->setTabText(transcodeaudio->indexOf(tab_3), Q_("Encoding parameters", 0));
        transcodeaudio->setTabText(transcodeaudio->indexOf(tab_4), Q_("Filters", 0));
        tabWidget->setTabText(tabWidget->indexOf(audioCodec), Q_("Audio codec", 0));
        valueholder_subtitles_enable->setTitle(Q_("Subtitles", 0));
        label_2->setText(Q_("Codec", 0));
        valueholder_subtitles_overlay->setText(Q_("Overlay subtitles on the video", 0));
        tabWidget->setTabText(tabWidget->indexOf(subtitles), Q_("Subtitles", 0));
        label_5->setText(Q_("Profile Name", 0));
    } // retranslateUi

};

namespace Ui {
    class Profiles: public Ui_Profiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PROFILES_H
