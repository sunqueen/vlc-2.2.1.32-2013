#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'fingerprintdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FINGERPRINTDIALOG_H
#define FINGERPRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FingerprintDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *results;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *recordsList;
    QDialogButtonBox *buttonsBox;
    QWidget *error;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QWidget *wait;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QProgressBar *progressBar;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *FingerprintDialog)
    {
        if (FingerprintDialog->objectName().isEmpty())
            FingerprintDialog->setObjectName(QString::fromUtf8("FingerprintDialog"));
        FingerprintDialog->setWindowModality(Qt::WindowModal);
        FingerprintDialog->resize(499, 257);
        verticalLayout_3 = new QVBoxLayout(FingerprintDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stackedWidget = new QStackedWidget(FingerprintDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        results = new QWidget();
        results->setObjectName(QString::fromUtf8("results"));
        verticalLayout_2 = new QVBoxLayout(results);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(results);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        recordsList = new QListWidget(results);
        recordsList->setObjectName(QString::fromUtf8("recordsList"));

        verticalLayout_2->addWidget(recordsList);

        buttonsBox = new QDialogButtonBox(results);
        buttonsBox->setObjectName(QString::fromUtf8("buttonsBox"));
        buttonsBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout_2->addWidget(buttonsBox);

        stackedWidget->addWidget(results);
        error = new QWidget();
        error->setObjectName(QString::fromUtf8("error"));
        verticalLayout_4 = new QVBoxLayout(error);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(error);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        buttonBox = new QDialogButtonBox(error);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout_4->addWidget(buttonBox);

        stackedWidget->addWidget(error);
        wait = new QWidget();
        wait->setObjectName(QString::fromUtf8("wait"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wait->sizePolicy().hasHeightForWidth());
        wait->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(wait);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        progressBar = new QProgressBar(wait);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimum(0);
        progressBar->setMaximum(0);
        progressBar->setValue(-1);

        verticalLayout->addWidget(progressBar);

        label = new QLabel(wait);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        stackedWidget->addWidget(wait);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(FingerprintDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FingerprintDialog);
    } // setupUi

    void retranslateUi(QDialog *FingerprintDialog)
    {
        FingerprintDialog->setWindowTitle(Q_("Audio Fingerprinting", 0));
        label_3->setText(Q_("Select a matching identity", 0));
        label_2->setText(Q_("No fingerprint has been found", 0));
        label->setText(Q_("Fingerprinting track...", 0));
    } // retranslateUi

};

namespace Ui {
    class FingerprintDialog: public Ui_FingerprintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FINGERPRINTDIALOG_H
