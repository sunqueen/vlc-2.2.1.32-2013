#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'vlm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VLM_H
#define VLM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vlm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mediaConfBox;
    QGridLayout *gridLayout1;
    QComboBox *mediaType;
    QFrame *line;
    QLabel *nameLabel;
    QLineEdit *nameLedit;
    QCheckBox *enableCheck;
    QLabel *inputLabel;
    QLineEdit *inputLedit;
    QPushButton *inputButton;
    QLabel *outputLabel;
    QLineEdit *outputLedit;
    QPushButton *outputButton;
    QGroupBox *schedBox;
    QGroupBox *vodBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *muxLedit;
    QSpacerItem *spacerItem;
    QCheckBox *loopBCast;
    QSpacerItem *spacerItem1;
    QPushButton *addButton;
    QPushButton *clearButton;
    QPushButton *saveButton;
    QSpacerItem *spacerItem2;
    QGroupBox *mediaBox;
    QGridLayout *gridLayout2;
    QListWidget *vlmListItem;
    QFrame *line_2;
    QScrollArea *vlmItemScroll;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Vlm)
    {
        if (Vlm->objectName().isEmpty())
            Vlm->setObjectName(QString::fromUtf8("Vlm"));
        Vlm->setWindowModality(Qt::NonModal);
        Vlm->resize(738, 693);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Vlm->sizePolicy().hasHeightForWidth());
        Vlm->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Vlm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mediaConfBox = new QGroupBox(Vlm);
        mediaConfBox->setObjectName(QString::fromUtf8("mediaConfBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mediaConfBox->sizePolicy().hasHeightForWidth());
        mediaConfBox->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(mediaConfBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mediaType = new QComboBox(mediaConfBox);
        mediaType->setObjectName(QString::fromUtf8("mediaType"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mediaType->sizePolicy().hasHeightForWidth());
        mediaType->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(mediaType, 0, 0, 1, 3);

        line = new QFrame(mediaConfBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 1, 0, 1, 3);

        nameLabel = new QLabel(mediaConfBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout1->addWidget(nameLabel, 2, 0, 1, 1);

        nameLedit = new QLineEdit(mediaConfBox);
        nameLedit->setObjectName(QString::fromUtf8("nameLedit"));

        gridLayout1->addWidget(nameLedit, 2, 1, 1, 1);

        enableCheck = new QCheckBox(mediaConfBox);
        enableCheck->setObjectName(QString::fromUtf8("enableCheck"));
        enableCheck->setChecked(true);

        gridLayout1->addWidget(enableCheck, 2, 2, 1, 1);

        inputLabel = new QLabel(mediaConfBox);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));

        gridLayout1->addWidget(inputLabel, 3, 0, 1, 1);

        inputLedit = new QLineEdit(mediaConfBox);
        inputLedit->setObjectName(QString::fromUtf8("inputLedit"));

        gridLayout1->addWidget(inputLedit, 3, 1, 1, 1);

        inputButton = new QPushButton(mediaConfBox);
        inputButton->setObjectName(QString::fromUtf8("inputButton"));

        gridLayout1->addWidget(inputButton, 3, 2, 1, 1);

        outputLabel = new QLabel(mediaConfBox);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));

        gridLayout1->addWidget(outputLabel, 4, 0, 1, 1);

        outputLedit = new QLineEdit(mediaConfBox);
        outputLedit->setObjectName(QString::fromUtf8("outputLedit"));

        gridLayout1->addWidget(outputLedit, 4, 1, 1, 1);

        outputButton = new QPushButton(mediaConfBox);
        outputButton->setObjectName(QString::fromUtf8("outputButton"));

        gridLayout1->addWidget(outputButton, 4, 2, 1, 1);

        schedBox = new QGroupBox(mediaConfBox);
        schedBox->setObjectName(QString::fromUtf8("schedBox"));

        gridLayout1->addWidget(schedBox, 5, 0, 1, 3);

        vodBox = new QGroupBox(mediaConfBox);
        vodBox->setObjectName(QString::fromUtf8("vodBox"));
        hboxLayout = new QHBoxLayout(vodBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(vodBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMargin(3);

        hboxLayout->addWidget(label);

        muxLedit = new QLineEdit(vodBox);
        muxLedit->setObjectName(QString::fromUtf8("muxLedit"));

        hboxLayout->addWidget(muxLedit);

        spacerItem = new QSpacerItem(411, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout1->addWidget(vodBox, 6, 0, 1, 3);

        loopBCast = new QCheckBox(mediaConfBox);
        loopBCast->setObjectName(QString::fromUtf8("loopBCast"));

        gridLayout1->addWidget(loopBCast, 7, 0, 1, 2);


        gridLayout->addWidget(mediaConfBox, 0, 0, 5, 3);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        addButton = new QPushButton(Vlm);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 1, 3, 1, 1);

        clearButton = new QPushButton(Vlm);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        gridLayout->addWidget(clearButton, 2, 3, 1, 1);

        saveButton = new QPushButton(Vlm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 3, 3, 1, 1);

        spacerItem2 = new QSpacerItem(80, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 4, 3, 1, 1);

        mediaBox = new QGroupBox(Vlm);
        mediaBox->setObjectName(QString::fromUtf8("mediaBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(mediaBox->sizePolicy().hasHeightForWidth());
        mediaBox->setSizePolicy(sizePolicy3);
        gridLayout2 = new QGridLayout(mediaBox);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        vlmListItem = new QListWidget(mediaBox);
        vlmListItem->setObjectName(QString::fromUtf8("vlmListItem"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(vlmListItem->sizePolicy().hasHeightForWidth());
        vlmListItem->setSizePolicy(sizePolicy4);
        vlmListItem->setMaximumSize(QSize(200, 16777215));

        gridLayout2->addWidget(vlmListItem, 0, 0, 1, 1);

        line_2 = new QFrame(mediaBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout2->addWidget(line_2, 0, 1, 1, 1);

        vlmItemScroll = new QScrollArea(mediaBox);
        vlmItemScroll->setObjectName(QString::fromUtf8("vlmItemScroll"));
        sizePolicy4.setHeightForWidth(vlmItemScroll->sizePolicy().hasHeightForWidth());
        vlmItemScroll->setSizePolicy(sizePolicy4);
        vlmItemScroll->setMinimumSize(QSize(300, 0));

        gridLayout2->addWidget(vlmItemScroll, 0, 2, 1, 1);


        gridLayout->addWidget(mediaBox, 5, 0, 1, 4);

        buttonBox = new QDialogButtonBox(Vlm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout->addWidget(buttonBox, 6, 2, 1, 2);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLedit);
        inputLabel->setBuddy(inputLedit);
        outputLabel->setBuddy(outputLedit);
        label->setBuddy(muxLedit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mediaType, nameLedit);
        QWidget::setTabOrder(nameLedit, enableCheck);
        QWidget::setTabOrder(enableCheck, inputLedit);
        QWidget::setTabOrder(inputLedit, inputButton);
        QWidget::setTabOrder(inputButton, outputLedit);
        QWidget::setTabOrder(outputLedit, outputButton);
        QWidget::setTabOrder(outputButton, addButton);
        QWidget::setTabOrder(addButton, clearButton);
        QWidget::setTabOrder(clearButton, saveButton);
        QWidget::setTabOrder(saveButton, muxLedit);
        QWidget::setTabOrder(muxLedit, loopBCast);
        QWidget::setTabOrder(loopBCast, vlmListItem);
        QWidget::setTabOrder(vlmListItem, vlmItemScroll);
        QWidget::setTabOrder(vlmItemScroll, buttonBox);

        retranslateUi(Vlm);

        QMetaObject::connectSlotsByName(Vlm);
    } // setupUi

    void retranslateUi(QWidget *Vlm)
    {
        Vlm->setWindowTitle(Q_("VLM configurator", 0));
        mediaConfBox->setTitle(Q_("Media Manager Edition", 0));
        nameLabel->setText(Q_("Name:", 0));
        enableCheck->setText(Q_("Enable", 0));
        inputLabel->setText(Q_("Input:", 0));
        inputButton->setText(Q_("Select Input", 0));
        outputLabel->setText(Q_("Output:", 0));
        outputButton->setText(Q_("Select Output", 0));
        schedBox->setTitle(Q_("Time Control", 0));
        vodBox->setTitle(Q_("Mux Control", 0));
        label->setText(Q_("Muxer:", 0));
        muxLedit->setInputMask(Q_("AAAA; ", 0));
        loopBCast->setText(Q_("Loop", 0));
        addButton->setText(Q_("Add", 0));
        clearButton->setText(Q_("Clear", 0));
        saveButton->setText(Q_("Save", 0));
        mediaBox->setTitle(Q_("Media Manager List", 0));
    } // retranslateUi

};

namespace Ui {
    class Vlm: public Ui_Vlm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VLM_H
