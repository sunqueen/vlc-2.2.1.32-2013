#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ABOUT_H
#define ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *horizontalFrame;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *blablaPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *update;
    QHBoxLayout *updateLayout;
    QLabel *UpdateLabel;
    QPushButton *checkUpdates;
    QLabel *MainBlabla;
    QTextEdit *licensePage;
    QTextEdit *authorsPage;
    QTextEdit *creditPage;
    QLabel *VLCcone;
    QLabel *title;
    QLabel *version;
    QFrame *footer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *authorsButton;
    QLabel *licenseButton;
    QLabel *creditsButton;

    void setupUi(QWidget *aboutWidget)
    {
        if (aboutWidget->objectName().isEmpty())
            aboutWidget->setObjectName(QString::fromUtf8("aboutWidget"));
        aboutWidget->resize(744, 360);
        aboutWidget->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"     border: 1px solid #999999;\n"
"     background: white;\n"
"     width: 12px;\n"
"     margin: 5px 0 5px 2;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: #777777;\n"
"     min-height: 12px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     border: none;\n"
"     background: none;\n"
"     height: 0px;\n"
"     subcontrol-position: bottom;\n"
"     subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"     border: none;\n"
"     background: none;\n"
"     height: 0px;\n"
"     subcontrol-position: top;\n"
"     subcontrol-origin: margin;\n"
" }\n"
" QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"     border: none;\n"
"     width: 0px;\n"
"     height: 0px;\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }"));
        verticalLayout = new QVBoxLayout(aboutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalFrame = new QFrame(aboutWidget);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy);
        horizontalFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        gridLayout = new QGridLayout(horizontalFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(horizontalFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setLineWidth(0);
        blablaPage = new QWidget();
        blablaPage->setObjectName(QString::fromUtf8("blablaPage"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(blablaPage->sizePolicy().hasHeightForWidth());
        blablaPage->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(blablaPage);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        update = new QWidget(blablaPage);
        update->setObjectName(QString::fromUtf8("update"));
        updateLayout = new QHBoxLayout(update);
        updateLayout->setObjectName(QString::fromUtf8("updateLayout"));
        UpdateLabel = new QLabel(update);
        UpdateLabel->setObjectName(QString::fromUtf8("UpdateLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(UpdateLabel->sizePolicy().hasHeightForWidth());
        UpdateLabel->setSizePolicy(sizePolicy3);
        UpdateLabel->setStyleSheet(QString::fromUtf8("margin-bottom: 8px;margin-top: 4px;"));

        updateLayout->addWidget(UpdateLabel);

        checkUpdates = new QPushButton(update);
        checkUpdates->setObjectName(QString::fromUtf8("checkUpdates"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkUpdates->sizePolicy().hasHeightForWidth());
        checkUpdates->setSizePolicy(sizePolicy4);
        checkUpdates->setFlat(true);

        updateLayout->addWidget(checkUpdates);


        verticalLayout_2->addWidget(update);

        MainBlabla = new QLabel(blablaPage);
        MainBlabla->setObjectName(QString::fromUtf8("MainBlabla"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(MainBlabla->sizePolicy().hasHeightForWidth());
        MainBlabla->setSizePolicy(sizePolicy5);
        MainBlabla->setStyleSheet(QString::fromUtf8("padding-right: 20px;"));
        MainBlabla->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        MainBlabla->setWordWrap(true);
        MainBlabla->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(MainBlabla);

        stackedWidget->addWidget(blablaPage);
        licensePage = new QTextEdit();
        licensePage->setObjectName(QString::fromUtf8("licensePage"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(9);
        licensePage->setFont(font);
        licensePage->setFrameShadow(QFrame::Plain);
        licensePage->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        stackedWidget->addWidget(licensePage);
        authorsPage = new QTextEdit();
        authorsPage->setObjectName(QString::fromUtf8("authorsPage"));
        authorsPage->setFrameShadow(QFrame::Plain);
        authorsPage->setTextInteractionFlags(Qt::NoTextInteraction);
        stackedWidget->addWidget(authorsPage);
        creditPage = new QTextEdit();
        creditPage->setObjectName(QString::fromUtf8("creditPage"));
        creditPage->setFrameShadow(QFrame::Plain);
        creditPage->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        stackedWidget->addWidget(creditPage);

        gridLayout->addWidget(stackedWidget, 2, 2, 4, 1);

        VLCcone = new QLabel(horizontalFrame);
        VLCcone->setObjectName(QString::fromUtf8("VLCcone"));
        sizePolicy4.setHeightForWidth(VLCcone->sizePolicy().hasHeightForWidth());
        VLCcone->setSizePolicy(sizePolicy4);
        VLCcone->setMinimumSize(QSize(247, 300));
        VLCcone->setAutoFillBackground(false);
        VLCcone->setLineWidth(0);
        VLCcone->setTextFormat(Qt::PlainText);
        VLCcone->setPixmap(QPixmap(QString::fromUtf8(":/logo/vlc256.png")));
        VLCcone->setScaledContents(false);
        VLCcone->setMargin(20);

        gridLayout->addWidget(VLCcone, 0, 0, 6, 1);

        title = new QLabel(horizontalFrame);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy6);
        title->setMinimumSize(QSize(0, 50));
        title->setBaseSize(QSize(0, 0));
        title->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(title, 0, 2, 1, 1);

        version = new QLabel(horizontalFrame);
        version->setObjectName(QString::fromUtf8("version"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(version->sizePolicy().hasHeightForWidth());
        version->setSizePolicy(sizePolicy7);
        version->setCursor(QCursor(Qt::PointingHandCursor));
        version->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Sans Serif\";\n"
"margin-bottom: 6px;"));

        gridLayout->addWidget(version, 1, 2, 1, 1);


        verticalLayout->addWidget(horizontalFrame);

        footer = new QFrame(aboutWidget);
        footer->setObjectName(QString::fromUtf8("footer"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(footer->sizePolicy().hasHeightForWidth());
        footer->setSizePolicy(sizePolicy8);
        footer->setMinimumSize(QSize(0, 60));
        footer->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        horizontalLayout_2 = new QHBoxLayout(footer);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        authorsButton = new QLabel(footer);
        authorsButton->setObjectName(QString::fromUtf8("authorsButton"));
        authorsButton->setCursor(QCursor(Qt::PointingHandCursor));
        authorsButton->setStyleSheet(QString::fromUtf8("padding: 10px"));
        authorsButton->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(authorsButton);

        licenseButton = new QLabel(footer);
        licenseButton->setObjectName(QString::fromUtf8("licenseButton"));
        licenseButton->setCursor(QCursor(Qt::PointingHandCursor));
        licenseButton->setStyleSheet(QString::fromUtf8("padding: 10px"));
        licenseButton->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(licenseButton);

        creditsButton = new QLabel(footer);
        creditsButton->setObjectName(QString::fromUtf8("creditsButton"));
        creditsButton->setCursor(QCursor(Qt::PointingHandCursor));
        creditsButton->setStyleSheet(QString::fromUtf8("padding: 10px;"));
        creditsButton->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(creditsButton);


        verticalLayout->addWidget(footer);


        retranslateUi(aboutWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aboutWidget);
    } // setupUi

    void retranslateUi(QWidget *aboutWidget)
    {
        aboutWidget->setWindowTitle(Q_("Dialog", 0));
        UpdateLabel->setText(Q_("Update", 0));
        checkUpdates->setText(Q_("Update", 0));
        VLCcone->setText(QString());
        version->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aboutWidget: public Ui_aboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ABOUT_H
