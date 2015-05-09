#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open_net.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_NET_H
#define OPEN_NET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenNetwork
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QLabel *examples;
    QComboBox *urlComboBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *OpenNetwork)
    {
        if (OpenNetwork->objectName().isEmpty())
            OpenNetwork->setObjectName(QString::fromUtf8("OpenNetwork"));
        OpenNetwork->resize(487, 273);
        vboxLayout = new QVBoxLayout(OpenNetwork);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OpenNetwork);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        examples = new QLabel(groupBox);
        examples->setObjectName(QString::fromUtf8("examples"));
        examples->setStyleSheet(QString::fromUtf8("color: #838383; "));
        examples->setText(QString::fromUtf8("http://www.example.com/stream.avi\n"
"rtp://@:1234\n"
"mms://mms.examples.com/stream.asx\n"
"rtsp://server.example.org:8080/test.sdp\n"
"http://www.yourtube.com/watch?v=gg64x"));
        examples->setMargin(5);
        examples->setIndent(10);

        gridLayout->addWidget(examples, 2, 0, 1, 1);

        urlComboBox = new QComboBox(groupBox);
        urlComboBox->setObjectName(QString::fromUtf8("urlComboBox"));
        urlComboBox->setMaximumSize(QSize(600, 16777215));
        urlComboBox->setEditable(true);
        urlComboBox->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(urlComboBox, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(OpenNetwork);

        QMetaObject::connectSlotsByName(OpenNetwork);
    } // setupUi

    void retranslateUi(QWidget *OpenNetwork)
    {
        OpenNetwork->setWindowTitle(Q_("Form", 0));
        groupBox->setTitle(Q_("Network Protocol", 0));
        label_1->setText(Q_("Please enter a network URL:", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenNetwork: public Ui_OpenNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_NET_H
