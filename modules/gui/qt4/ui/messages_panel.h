#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'messages_panel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MESSAGES_PANEL_H
#define MESSAGES_PANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "util/customwidgets.hpp"

QT_BEGIN_NAMESPACE

class Ui_messagesPanelWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *mainTab;
    QWidget *tab;
    QGridLayout *msgLayout;
    QPlainTextEdit *messages;
    QLabel *label;
    QVLCDebugLevelSpinBox *verbosityBox;
    QLabel *label_2;
    QLineEdit *filterEdit;
    QPushButton *saveLogButton;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QTreeWidget *modulesTree;
    QDialogButtonBox *bottomButtonsBox;

    void setupUi(QWidget *messagesPanelWidget)
    {
        if (messagesPanelWidget->objectName().isEmpty())
            messagesPanelWidget->setObjectName(QString::fromUtf8("messagesPanelWidget"));
        messagesPanelWidget->resize(570, 440);
        verticalLayout_2 = new QVBoxLayout(messagesPanelWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mainTab = new QTabWidget(messagesPanelWidget);
        mainTab->setObjectName(QString::fromUtf8("mainTab"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        msgLayout = new QGridLayout(tab);
        msgLayout->setObjectName(QString::fromUtf8("msgLayout"));
        messages = new QPlainTextEdit(tab);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        messages->setReadOnly(true);

        msgLayout->addWidget(messages, 0, 0, 1, 6);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        msgLayout->addWidget(label, 1, 0, 1, 1);

        verbosityBox = new QVLCDebugLevelSpinBox(tab);
        verbosityBox->setObjectName(QString::fromUtf8("verbosityBox"));
        verbosityBox->setWrapping(true);
        verbosityBox->setMinimum(0);
        verbosityBox->setMaximum(2);
        verbosityBox->setValue(0);

        msgLayout->addWidget(verbosityBox, 1, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        msgLayout->addWidget(label_2, 1, 2, 1, 1);

        filterEdit = new QLineEdit(tab);
        filterEdit->setObjectName(QString::fromUtf8("filterEdit"));
        filterEdit->setMinimumSize(QSize(80, 0));

        msgLayout->addWidget(filterEdit, 1, 3, 1, 1);

        saveLogButton = new QPushButton(tab);
        saveLogButton->setObjectName(QString::fromUtf8("saveLogButton"));

        msgLayout->addWidget(saveLogButton, 1, 4, 1, 1);

        mainTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        modulesTree = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        modulesTree->setHeaderItem(__qtreewidgetitem);
        modulesTree->setObjectName(QString::fromUtf8("modulesTree"));

        gridLayout->addWidget(modulesTree, 0, 0, 1, 1);

        mainTab->addTab(tab_2, QString());

        verticalLayout_2->addWidget(mainTab);

        bottomButtonsBox = new QDialogButtonBox(messagesPanelWidget);
        bottomButtonsBox->setObjectName(QString::fromUtf8("bottomButtonsBox"));
        bottomButtonsBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout_2->addWidget(bottomButtonsBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(verbosityBox);
        label_2->setBuddy(filterEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(messagesPanelWidget);

        mainTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(messagesPanelWidget);
    } // setupUi

    void retranslateUi(QWidget *messagesPanelWidget)
    {
        messagesPanelWidget->setWindowTitle(Q_("Messages", 0));
        label->setText(Q_("&Verbosity:", 0));
        label_2->setText(Q_("&Filter:", 0));
        saveLogButton->setText(Q_("&Save as...", 0));
        mainTab->setTabText(mainTab->indexOf(tab), Q_("Messages", 0));
        mainTab->setTabText(mainTab->indexOf(tab_2), Q_("Modules Tree", 0));
    } // retranslateUi

};

namespace Ui {
    class messagesPanelWidget: public Ui_messagesPanelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MESSAGES_PANEL_H
