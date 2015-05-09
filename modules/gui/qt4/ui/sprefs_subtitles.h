#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_subtitles.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_SUBTITLES_H
#define SPREFS_SUBTITLES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsSubtitles
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QCheckBox *OSDBox;
    QCheckBox *OSDTitleBox;
    QComboBox *OSDTitlePos;
    QLabel *OSDTitlePosLabel;
    QCheckBox *spuActiveBox;
    QWidget *spuZone;
    QVBoxLayout *spuZoneLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *subLangLabel;
    QComboBox *encoding;
    QLineEdit *preferredLanguage;
    QLabel *encodLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *fontLabel;
    QLabel *fontSizeLabel;
    QComboBox *fontSize;
    QSpacerItem *horizontalSpacer;
    QLabel *fontColorLabel;
    QPushButton *fontColor;
    QLabel *fontEffectLabel;
    QComboBox *effect;
    QLabel *outlineColorLabel;
    QPushButton *outlineColor;
    QCheckBox *shadowCheck;
    QLabel *subsPosLabel;
    QSpinBox *subsPosition;
    QFontComboBox *font;
    QCheckBox *backgroundCheck;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsSubtitles)
    {
        if (SPrefsSubtitles->objectName().isEmpty())
            SPrefsSubtitles->setObjectName(QString::fromUtf8("SPrefsSubtitles"));
        SPrefsSubtitles->resize(741, 416);
        verticalLayout = new QVBoxLayout(SPrefsSubtitles);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(SPrefsSubtitles);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        OSDBox = new QCheckBox(groupBox_3);
        OSDBox->setObjectName(QString::fromUtf8("OSDBox"));

        gridLayout->addWidget(OSDBox, 0, 0, 1, 1);

        OSDTitleBox = new QCheckBox(groupBox_3);
        OSDTitleBox->setObjectName(QString::fromUtf8("OSDTitleBox"));

        gridLayout->addWidget(OSDTitleBox, 1, 0, 1, 1);

        OSDTitlePos = new QComboBox(groupBox_3);
        OSDTitlePos->setObjectName(QString::fromUtf8("OSDTitlePos"));

        gridLayout->addWidget(OSDTitlePos, 1, 2, 1, 1);

        OSDTitlePosLabel = new QLabel(groupBox_3);
        OSDTitlePosLabel->setObjectName(QString::fromUtf8("OSDTitlePosLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OSDTitlePosLabel->sizePolicy().hasHeightForWidth());
        OSDTitlePosLabel->setSizePolicy(sizePolicy);
        OSDTitlePosLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(OSDTitlePosLabel, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        spuActiveBox = new QCheckBox(SPrefsSubtitles);
        spuActiveBox->setObjectName(QString::fromUtf8("spuActiveBox"));

        verticalLayout->addWidget(spuActiveBox);

        spuZone = new QWidget(SPrefsSubtitles);
        spuZone->setObjectName(QString::fromUtf8("spuZone"));
        spuZoneLayout = new QVBoxLayout(spuZone);
        spuZoneLayout->setObjectName(QString::fromUtf8("spuZoneLayout"));
        spuZoneLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(spuZone);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        subLangLabel = new QLabel(groupBox_2);
        subLangLabel->setObjectName(QString::fromUtf8("subLangLabel"));
        subLangLabel->setMinimumSize(QSize(250, 0));

        gridLayout1->addWidget(subLangLabel, 0, 0, 1, 1);

        encoding = new QComboBox(groupBox_2);
        encoding->setObjectName(QString::fromUtf8("encoding"));
        encoding->setMaxVisibleItems(12);

        gridLayout1->addWidget(encoding, 1, 1, 1, 1);

        preferredLanguage = new QLineEdit(groupBox_2);
        preferredLanguage->setObjectName(QString::fromUtf8("preferredLanguage"));

        gridLayout1->addWidget(preferredLanguage, 0, 1, 1, 1);

        encodLabel = new QLabel(groupBox_2);
        encodLabel->setObjectName(QString::fromUtf8("encodLabel"));
        encodLabel->setMinimumSize(QSize(250, 0));

        gridLayout1->addWidget(encodLabel, 1, 0, 1, 1);


        spuZoneLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(spuZone);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fontLabel = new QLabel(groupBox);
        fontLabel->setObjectName(QString::fromUtf8("fontLabel"));
        fontLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(fontLabel, 0, 0, 1, 1);

        fontSizeLabel = new QLabel(groupBox);
        fontSizeLabel->setObjectName(QString::fromUtf8("fontSizeLabel"));
        fontSizeLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(fontSizeLabel, 1, 0, 1, 1);

        fontSize = new QComboBox(groupBox);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontSize->sizePolicy().hasHeightForWidth());
        fontSize->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(fontSize, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        fontColorLabel = new QLabel(groupBox);
        fontColorLabel->setObjectName(QString::fromUtf8("fontColorLabel"));

        gridLayout_2->addWidget(fontColorLabel, 1, 3, 1, 1);

        fontColor = new QPushButton(groupBox);
        fontColor->setObjectName(QString::fromUtf8("fontColor"));

        gridLayout_2->addWidget(fontColor, 1, 4, 1, 1);

        fontEffectLabel = new QLabel(groupBox);
        fontEffectLabel->setObjectName(QString::fromUtf8("fontEffectLabel"));
        fontEffectLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(fontEffectLabel, 2, 0, 1, 1);

        effect = new QComboBox(groupBox);
        effect->setObjectName(QString::fromUtf8("effect"));
        sizePolicy2.setHeightForWidth(effect->sizePolicy().hasHeightForWidth());
        effect->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(effect, 2, 1, 1, 1);

        outlineColorLabel = new QLabel(groupBox);
        outlineColorLabel->setObjectName(QString::fromUtf8("outlineColorLabel"));

        gridLayout_2->addWidget(outlineColorLabel, 2, 3, 1, 1);

        outlineColor = new QPushButton(groupBox);
        outlineColor->setObjectName(QString::fromUtf8("outlineColor"));

        gridLayout_2->addWidget(outlineColor, 2, 4, 1, 1);

        shadowCheck = new QCheckBox(groupBox);
        shadowCheck->setObjectName(QString::fromUtf8("shadowCheck"));

        gridLayout_2->addWidget(shadowCheck, 3, 0, 1, 1);

        subsPosLabel = new QLabel(groupBox);
        subsPosLabel->setObjectName(QString::fromUtf8("subsPosLabel"));
        subsPosLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(subsPosLabel, 4, 0, 1, 1);

        subsPosition = new QSpinBox(groupBox);
        subsPosition->setObjectName(QString::fromUtf8("subsPosition"));
        subsPosition->setMaximumSize(QSize(16777215, 16777215));
        subsPosition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        subsPosition->setMinimum(-1024);
        subsPosition->setMaximum(1024);

        gridLayout_2->addWidget(subsPosition, 4, 1, 1, 1);

        font = new QFontComboBox(groupBox);
        font->setObjectName(QString::fromUtf8("font"));

        gridLayout_2->addWidget(font, 0, 1, 1, 4);

        backgroundCheck = new QCheckBox(groupBox);
        backgroundCheck->setObjectName(QString::fromUtf8("backgroundCheck"));

        gridLayout_2->addWidget(backgroundCheck, 3, 1, 1, 1);


        spuZoneLayout->addWidget(groupBox);


        verticalLayout->addWidget(spuZone);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        OSDTitlePosLabel->setBuddy(OSDTitlePos);
        subLangLabel->setBuddy(preferredLanguage);
        encodLabel->setBuddy(encoding);
        fontLabel->setBuddy(font);
        fontSizeLabel->setBuddy(fontSize);
        fontColorLabel->setBuddy(fontColor);
        fontEffectLabel->setBuddy(effect);
        outlineColorLabel->setBuddy(outlineColor);
        subsPosLabel->setBuddy(subsPosition);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(OSDBox, OSDTitleBox);
        QWidget::setTabOrder(OSDTitleBox, OSDTitlePos);
        QWidget::setTabOrder(OSDTitlePos, preferredLanguage);
        QWidget::setTabOrder(preferredLanguage, encoding);
        QWidget::setTabOrder(encoding, font);
        QWidget::setTabOrder(font, fontSize);
        QWidget::setTabOrder(fontSize, fontColor);
        QWidget::setTabOrder(fontColor, effect);
        QWidget::setTabOrder(effect, outlineColor);
        QWidget::setTabOrder(outlineColor, shadowCheck);
        QWidget::setTabOrder(shadowCheck, subsPosition);

        retranslateUi(SPrefsSubtitles);

        QMetaObject::connectSlotsByName(SPrefsSubtitles);
    } // setupUi

    void retranslateUi(QWidget *SPrefsSubtitles)
    {
        SPrefsSubtitles->setWindowTitle(Q_("Form", 0));
        groupBox_3->setTitle(Q_("On Screen Display", 0));
        OSDBox->setText(Q_("Enable On Screen Display (OSD)", 0));
        OSDTitleBox->setText(Q_("Show media title on video start", 0));
        OSDTitlePosLabel->setText(Q_("Position", 0));
        spuActiveBox->setText(Q_("Enable subtitles", 0));
        groupBox_2->setTitle(Q_("Subtitle Language", 0));
        subLangLabel->setText(Q_("Preferred subtitle language", 0));
        encodLabel->setText(Q_("Default encoding", 0));
        groupBox->setTitle(Q_("Subtitle effects", 0));
        fontLabel->setText(Q_("Font", 0));
        fontSizeLabel->setText(Q_("Font size", 0));
        fontColorLabel->setText(Q_("Font color", 0));
        fontEffectLabel->setText(Q_("Outline thickness", 0));
        outlineColorLabel->setText(Q_("Outline color", 0));
        shadowCheck->setText(Q_("Add a shadow", 0));
        subsPosLabel->setText(Q_("Force subtitle position", 0));
        subsPosition->setSuffix(Q_(" px", 0));
        backgroundCheck->setText(Q_("Add a background", 0));
    } // retranslateUi

};

namespace Ui {
    class SPrefsSubtitles: public Ui_SPrefsSubtitles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_SUBTITLES_H
