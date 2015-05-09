#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SOUT_H
#define SOUT_H

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
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>
#include "components/sout/profile_selector.hpp"
#include "components/sout/sout_widgets.hpp"

QT_BEGIN_NAMESPACE

class Ui_Sout
{
public:
    QWizardPage *sourceWizardPage;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *helpEdit;
    SoutInputBox *inputBox;
    QWizardPage *destinationWizardPage;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *destTab;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *destBox;
    QPushButton *addButton;
    QCheckBox *localOutput;
    QWizardPage *wizardPage;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *transcodeBox;
    VLCProfileSelector *profileSelect;
    QWizardPage *optionsWizardPage;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QCheckBox *soutAll;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *mrlEdit;

    void setupUi(QWizard *Sout)
    {
        if (Sout->objectName().isEmpty())
            Sout->setObjectName(QString::fromUtf8("Sout"));
        Sout->resize(725, 445);
        Sout->setMinimumSize(QSize(400, 359));
        Sout->setWizardStyle(QWizard::ClassicStyle);
        sourceWizardPage = new QWizardPage();
        sourceWizardPage->setObjectName(QString::fromUtf8("sourceWizardPage"));
        gridLayout = new QGridLayout(sourceWizardPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        helpEdit = new QPlainTextEdit(sourceWizardPage);
        helpEdit->setObjectName(QString::fromUtf8("helpEdit"));
        helpEdit->setReadOnly(true);

        verticalLayout->addWidget(helpEdit);

        inputBox = new SoutInputBox(sourceWizardPage);
        inputBox->setObjectName(QString::fromUtf8("inputBox"));
        inputBox->setFlat(true);
        inputBox->setCheckable(false);

        verticalLayout->addWidget(inputBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Sout->addPage(sourceWizardPage);
        destinationWizardPage = new QWizardPage();
        destinationWizardPage->setObjectName(QString::fromUtf8("destinationWizardPage"));
        verticalLayout_4 = new QVBoxLayout(destinationWizardPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        destTab = new QTabWidget(destinationWizardPage);
        destTab->setObjectName(QString::fromUtf8("destTab"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setWordWrap(true);

        gridLayout_11->addWidget(label_4, 0, 0, 1, 3);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_11->addWidget(label_3, 1, 0, 1, 1);

        destBox = new QComboBox(tab);
        destBox->setObjectName(QString::fromUtf8("destBox"));

        gridLayout_11->addWidget(destBox, 1, 1, 1, 1);

        addButton = new QPushButton(tab);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);

        gridLayout_11->addWidget(addButton, 1, 2, 1, 1);

        localOutput = new QCheckBox(tab);
        localOutput->setObjectName(QString::fromUtf8("localOutput"));

        gridLayout_11->addWidget(localOutput, 2, 0, 1, 1);

        destTab->addTab(tab, QString());

        verticalLayout_4->addWidget(destTab);

        Sout->addPage(destinationWizardPage);
        wizardPage = new QWizardPage();
        wizardPage->setObjectName(QString::fromUtf8("wizardPage"));
        verticalLayout_3 = new QVBoxLayout(wizardPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        transcodeBox = new QCheckBox(wizardPage);
        transcodeBox->setObjectName(QString::fromUtf8("transcodeBox"));
        transcodeBox->setChecked(true);

        verticalLayout_3->addWidget(transcodeBox);

        profileSelect = new VLCProfileSelector(wizardPage);
        profileSelect->setObjectName(QString::fromUtf8("profileSelect"));

        verticalLayout_3->addWidget(profileSelect);

        Sout->addPage(wizardPage);
        optionsWizardPage = new QWizardPage();
        optionsWizardPage->setObjectName(QString::fromUtf8("optionsWizardPage"));
        verticalLayout_2 = new QVBoxLayout(optionsWizardPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(optionsWizardPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        soutAll = new QCheckBox(groupBox_3);
        soutAll->setObjectName(QString::fromUtf8("soutAll"));

        gridLayout_4->addWidget(soutAll, 0, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(optionsWizardPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mrlEdit = new QTextEdit(groupBox_4);
        mrlEdit->setObjectName(QString::fromUtf8("mrlEdit"));
        mrlEdit->setAcceptRichText(false);

        verticalLayout_5->addWidget(mrlEdit);


        verticalLayout_2->addWidget(groupBox_4);

        Sout->addPage(optionsWizardPage);

        retranslateUi(Sout);

        destTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sout);
    } // setupUi

    void retranslateUi(QWizard *Sout)
    {
        Sout->setWindowTitle(Q_("Stream Output", 0));
        sourceWizardPage->setTitle(Q_("Source", 0));
        sourceWizardPage->setSubTitle(Q_("Set up media sources to stream", 0));
        inputBox->setTitle(QString());
        destinationWizardPage->setTitle(Q_("Destination Setup", 0));
        destinationWizardPage->setSubTitle(Q_("Select destinations to stream to", 0));
        label_4->setText(Q_("Add destinations following the streaming methods you need. Be sure to check with transcoding that the format is compatible with the method used.", 0));
        label_3->setText(Q_("New destination", 0));
        addButton->setText(Q_("Add", 0));
        localOutput->setText(Q_("Display locally", 0));
        destTab->setTabText(destTab->indexOf(tab), QString());
        wizardPage->setTitle(Q_("Transcoding Options", 0));
        wizardPage->setSubTitle(Q_("Select and choose transcoding options", 0));
        transcodeBox->setText(Q_("Activate Transcoding", 0));
        optionsWizardPage->setTitle(Q_("Option Setup", 0));
        optionsWizardPage->setSubTitle(Q_("Set up any additional options for streaming", 0));
        groupBox_3->setTitle(Q_("Miscellaneous Options", 0));
        soutAll->setText(Q_("Stream all elementary streams", 0));
        groupBox_4->setTitle(Q_("Generated stream output string", 0));
    } // retranslateUi

};

namespace Ui {
    class Sout: public Ui_Sout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SOUT_H
