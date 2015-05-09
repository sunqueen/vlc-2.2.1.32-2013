#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'streampanel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef STREAMPANEL_H
#define STREAMPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BroadcastPanel
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *inputList;
    QGroupBox *statsBox;
    QGroupBox *stuffBox;
    QHBoxLayout *hboxLayout;
    QPushButton *deleteButton;
    QPushButton *editStreamingButton;
    QGroupBox *controlBox;
    QGridLayout *gridLayout1;
    QRadioButton *manualRadio;
    QPushButton *doScheduleButton;
    QRadioButton *scheduleRadio;
    QGroupBox *statusBox;
    QHBoxLayout *hboxLayout1;
    QPushButton *playPauseButton;
    QPushButton *stopButton;
    QPushButton *nextButton;
    QPushButton *prevButton;
    QSlider *horizontalSlider;
    QPushButton *addInputButton;
    QPushButton *editInputButton;
    QPushButton *clearInputsButton;

    void setupUi(QWidget *BroadcastPanel)
    {
        if (BroadcastPanel->objectName().isEmpty())
            BroadcastPanel->setObjectName(QString::fromUtf8("BroadcastPanel"));
        BroadcastPanel->resize(757, 373);
        gridLayout = new QGridLayout(BroadcastPanel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inputList = new QTreeWidget(BroadcastPanel);
        inputList->setObjectName(QString::fromUtf8("inputList"));

        gridLayout->addWidget(inputList, 0, 0, 3, 3);

        statsBox = new QGroupBox(BroadcastPanel);
        statsBox->setObjectName(QString::fromUtf8("statsBox"));

        gridLayout->addWidget(statsBox, 2, 3, 2, 1);

        stuffBox = new QGroupBox(BroadcastPanel);
        stuffBox->setObjectName(QString::fromUtf8("stuffBox"));
        hboxLayout = new QHBoxLayout(stuffBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        deleteButton = new QPushButton(stuffBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        hboxLayout->addWidget(deleteButton);

        editStreamingButton = new QPushButton(stuffBox);
        editStreamingButton->setObjectName(QString::fromUtf8("editStreamingButton"));

        hboxLayout->addWidget(editStreamingButton);


        gridLayout->addWidget(stuffBox, 0, 3, 1, 1);

        controlBox = new QGroupBox(BroadcastPanel);
        controlBox->setObjectName(QString::fromUtf8("controlBox"));
        gridLayout1 = new QGridLayout(controlBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        manualRadio = new QRadioButton(controlBox);
        manualRadio->setObjectName(QString::fromUtf8("manualRadio"));

        gridLayout1->addWidget(manualRadio, 0, 0, 1, 1);

        doScheduleButton = new QPushButton(controlBox);
        doScheduleButton->setObjectName(QString::fromUtf8("doScheduleButton"));

        gridLayout1->addWidget(doScheduleButton, 1, 1, 1, 1);

        scheduleRadio = new QRadioButton(controlBox);
        scheduleRadio->setObjectName(QString::fromUtf8("scheduleRadio"));

        gridLayout1->addWidget(scheduleRadio, 1, 0, 1, 1);


        gridLayout->addWidget(controlBox, 1, 3, 1, 1);

        statusBox = new QGroupBox(BroadcastPanel);
        statusBox->setObjectName(QString::fromUtf8("statusBox"));
        hboxLayout1 = new QHBoxLayout(statusBox);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        playPauseButton = new QPushButton(statusBox);
        playPauseButton->setObjectName(QString::fromUtf8("playPauseButton"));

        hboxLayout1->addWidget(playPauseButton);

        stopButton = new QPushButton(statusBox);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        hboxLayout1->addWidget(stopButton);

        nextButton = new QPushButton(statusBox);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        hboxLayout1->addWidget(nextButton);

        prevButton = new QPushButton(statusBox);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));

        hboxLayout1->addWidget(prevButton);

        horizontalSlider = new QSlider(statusBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        hboxLayout1->addWidget(horizontalSlider);


        gridLayout->addWidget(statusBox, 4, 0, 1, 4);

        addInputButton = new QPushButton(BroadcastPanel);
        addInputButton->setObjectName(QString::fromUtf8("addInputButton"));

        gridLayout->addWidget(addInputButton, 3, 0, 1, 1);

        editInputButton = new QPushButton(BroadcastPanel);
        editInputButton->setObjectName(QString::fromUtf8("editInputButton"));

        gridLayout->addWidget(editInputButton, 3, 1, 1, 1);

        clearInputsButton = new QPushButton(BroadcastPanel);
        clearInputsButton->setObjectName(QString::fromUtf8("clearInputsButton"));

        gridLayout->addWidget(clearInputsButton, 3, 2, 1, 1);


        retranslateUi(BroadcastPanel);

        QMetaObject::connectSlotsByName(BroadcastPanel);
    } // setupUi

    void retranslateUi(QWidget *BroadcastPanel)
    {
        BroadcastPanel->setWindowTitle(Q_("Form", 0));
        QTreeWidgetItem *___qtreewidgetitem = inputList->headerItem();
        ___qtreewidgetitem->setText(0, Q_("1", 0));
        statsBox->setTitle(Q_("Statistics", 0));
        stuffBox->setTitle(Q_("Stuff", 0));
        deleteButton->setText(Q_("Delete", 0));
        editStreamingButton->setText(Q_("Edit settings", 0));
        controlBox->setTitle(Q_("Control", 0));
        manualRadio->setText(Q_("Run manually", 0));
        doScheduleButton->setText(Q_("Setup schedule", 0));
        scheduleRadio->setText(Q_("Run on schedule", 0));
        statusBox->setTitle(Q_("Status", 0));
        playPauseButton->setText(Q_("P/P", 0));
        stopButton->setText(Q_("Stop", 0));
        nextButton->setText(Q_("Next", 0));
        prevButton->setText(Q_("Prev", 0));
        addInputButton->setText(Q_("Add Input", 0));
        editInputButton->setText(Q_("Edit Input", 0));
        clearInputsButton->setText(Q_("Clear List", 0));
    } // retranslateUi

};

namespace Ui {
    class BroadcastPanel: public Ui_BroadcastPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STREAMPANEL_H
