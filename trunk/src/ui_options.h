/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created: Tue Apr 6 22:20:26 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "DropListWidget.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDlg
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *General;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout3;
    QCheckBox *genAlwaysShow;
    QCheckBox *genHideFocus;
    QCheckBox *genAlwaysTop;
    QCheckBox *genShowTrayIcon;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QCheckBox *genHCenter;
    QCheckBox *genVCenter;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *genShiftDrag;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *genModifierBox;
    QComboBox *genKeyBox;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_10;
    QVBoxLayout *vboxLayout4;
    QCheckBox *genDecorateText;
    QFormLayout *formLayout_2;
    QSpinBox *genAutoSuggestDelay;
    QSpinBox *genMaxViewable;
    QSpinBox *genNumResults;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QSpinBox *genNumHistory;
    QComboBox *genCondensed;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_11;
    QVBoxLayout *_14;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QSlider *genOpaqueness;
    QLabel *label_3;
    QSlider *genFadeIn;
    QLabel *label_4;
    QSlider *genFadeOut;
    QGroupBox *groupBox_12;
    QVBoxLayout *_15;
    QFormLayout *formLayout_4;
    QLabel *label_24;
    QLineEdit *genProxyHostname;
    QLabel *label_25;
    QLineEdit *genProxyPort;
    QGroupBox *groupBox_6;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout2;
    QCheckBox *genUpdateCatalog;
    QSpinBox *genUpdateMinutes;
    QCheckBox *genShowHidden;
    QCheckBox *genShowNetwork;
    QCheckBox *genUseWildcards;
    QCheckBox *genUpdateCheck;
    QCheckBox *genPortable;
    QSpacerItem *spacerItem1;
    QWidget *Skins;
    QVBoxLayout *vboxLayout6;
    QHBoxLayout *hboxLayout3;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout4;
    QListWidget *skinList;
    QGroupBox *groupBox_8;
    QVBoxLayout *vboxLayout7;
    QLabel *authorInfo;
    QGroupBox *groupBox_9;
    QVBoxLayout *vboxLayout8;
    QLabel *skinPreview;
    QWidget *Catalog;
    QVBoxLayout *vboxLayout9;
    QHBoxLayout *hboxLayout5;
    QVBoxLayout *vboxLayout10;
    QGroupBox *directoriesGroupBox;
    QVBoxLayout *vboxLayout11;
    DropListWidget *catDirectories;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem2;
    QPushButton *catDirPlus;
    QSpacerItem *spacerItem3;
    QPushButton *catDirMinus;
    QSpacerItem *spacerItem4;
    QGroupBox *fileTypesGroupBox;
    QVBoxLayout *vboxLayout12;
    QListWidget *catTypes;
    QHBoxLayout *horizontalLayout;
    QPushButton *catTypesPlus;
    QPushButton *catTypesMinus;
    QCheckBox *catCheckBinaries;
    QCheckBox *catCheckDirs;
    QHBoxLayout *hboxLayout7;
    QLabel *label_10;
    QSpinBox *catDepth;
    QVBoxLayout *vboxLayout13;
    QVBoxLayout *vboxLayout14;
    QHBoxLayout *hboxLayout8;
    QPushButton *catRescan;
    QSpacerItem *spacerItem5;
    QLabel *catSize;
    QSpacerItem *spacerItem6;
    QProgressBar *catProgress;
    QWidget *Plugins;
    QVBoxLayout *vboxLayout15;
    QHBoxLayout *hboxLayout9;
    QGroupBox *groupBox_7;
    QVBoxLayout *vboxLayout16;
    QListWidget *plugList;
    QGroupBox *plugBox;
    QVBoxLayout *vboxLayout17;
    QWidget *About;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *icon;
    QLabel *aboutVer;
    QLabel *aboutText;
    QLabel *label_2;
    QLabel *aboutText_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout10;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDlg)
    {
        if (OptionsDlg->objectName().isEmpty())
            OptionsDlg->setObjectName(QString::fromUtf8("OptionsDlg"));
        OptionsDlg->setWindowModality(Qt::NonModal);
        OptionsDlg->resize(678, 494);
        vboxLayout = new QVBoxLayout(OptionsDlg);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(OptionsDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        vboxLayout1 = new QVBoxLayout(General);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        groupBox_4 = new QGroupBox(General);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        vboxLayout3 = new QVBoxLayout(groupBox_4);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        genAlwaysShow = new QCheckBox(groupBox_4);
        genAlwaysShow->setObjectName(QString::fromUtf8("genAlwaysShow"));

        vboxLayout3->addWidget(genAlwaysShow);

        genHideFocus = new QCheckBox(groupBox_4);
        genHideFocus->setObjectName(QString::fromUtf8("genHideFocus"));

        vboxLayout3->addWidget(genHideFocus);

        genAlwaysTop = new QCheckBox(groupBox_4);
        genAlwaysTop->setObjectName(QString::fromUtf8("genAlwaysTop"));
        genAlwaysTop->setEnabled(true);

        vboxLayout3->addWidget(genAlwaysTop);

        genShowTrayIcon = new QCheckBox(groupBox_4);
        genShowTrayIcon->setObjectName(QString::fromUtf8("genShowTrayIcon"));

        vboxLayout3->addWidget(genShowTrayIcon);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        genHCenter = new QCheckBox(groupBox_4);
        genHCenter->setObjectName(QString::fromUtf8("genHCenter"));

        horizontalLayout_2->addWidget(genHCenter);

        genVCenter = new QCheckBox(groupBox_4);
        genVCenter->setObjectName(QString::fromUtf8("genVCenter"));

        horizontalLayout_2->addWidget(genVCenter);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        vboxLayout3->addLayout(horizontalLayout_2);

        genShiftDrag = new QCheckBox(groupBox_4);
        genShiftDrag->setObjectName(QString::fromUtf8("genShiftDrag"));

        vboxLayout3->addWidget(genShiftDrag);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        genModifierBox = new QComboBox(groupBox_4);
        genModifierBox->setObjectName(QString::fromUtf8("genModifierBox"));
        genModifierBox->setMinimumSize(QSize(80, 0));

        hboxLayout1->addWidget(genModifierBox);

        genKeyBox = new QComboBox(groupBox_4);
        genKeyBox->setObjectName(QString::fromUtf8("genKeyBox"));
        genKeyBox->setMinimumSize(QSize(80, 0));

        hboxLayout1->addWidget(genKeyBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout3->addLayout(hboxLayout1);


        vboxLayout2->addWidget(groupBox_4);


        hboxLayout->addLayout(vboxLayout2);

        groupBox_10 = new QGroupBox(General);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        vboxLayout4 = new QVBoxLayout(groupBox_10);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        genDecorateText = new QCheckBox(groupBox_10);
        genDecorateText->setObjectName(QString::fromUtf8("genDecorateText"));

        vboxLayout4->addWidget(genDecorateText);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        genAutoSuggestDelay = new QSpinBox(groupBox_10);
        genAutoSuggestDelay->setObjectName(QString::fromUtf8("genAutoSuggestDelay"));
        genAutoSuggestDelay->setMaximum(99999);
        genAutoSuggestDelay->setSingleStep(50);
        genAutoSuggestDelay->setValue(1000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, genAutoSuggestDelay);

        genMaxViewable = new QSpinBox(groupBox_10);
        genMaxViewable->setObjectName(QString::fromUtf8("genMaxViewable"));
        genMaxViewable->setMinimum(1);
        genMaxViewable->setMaximum(999);
        genMaxViewable->setValue(4);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, genMaxViewable);

        genNumResults = new QSpinBox(groupBox_10);
        genNumResults->setObjectName(QString::fromUtf8("genNumResults"));
        genNumResults->setMinimum(1);
        genNumResults->setMaximum(9999);
        genNumResults->setValue(20);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, genNumResults);

        label_11 = new QLabel(groupBox_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        label_8 = new QLabel(groupBox_10);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        genNumHistory = new QSpinBox(groupBox_10);
        genNumHistory->setObjectName(QString::fromUtf8("genNumHistory"));
        genNumHistory->setMaximum(999);
        genNumHistory->setValue(20);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, genNumHistory);

        genCondensed = new QComboBox(groupBox_10);
        genCondensed->setObjectName(QString::fromUtf8("genCondensed"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, genCondensed);

        label_12 = new QLabel(groupBox_10);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);


        vboxLayout4->addLayout(formLayout_2);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout4->addItem(horizontalSpacer);


        hboxLayout->addWidget(groupBox_10);


        vboxLayout1->addLayout(hboxLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_11 = new QGroupBox(General);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        sizePolicy.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy);
        _14 = new QVBoxLayout(groupBox_11);
        _14->setObjectName(QString::fromUtf8("_14"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_6 = new QLabel(groupBox_11);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        genOpaqueness = new QSlider(groupBox_11);
        genOpaqueness->setObjectName(QString::fromUtf8("genOpaqueness"));
        genOpaqueness->setMaximum(100);
        genOpaqueness->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, genOpaqueness);

        label_3 = new QLabel(groupBox_11);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        genFadeIn = new QSlider(groupBox_11);
        genFadeIn->setObjectName(QString::fromUtf8("genFadeIn"));
        genFadeIn->setMaximum(1000);
        genFadeIn->setSingleStep(10);
        genFadeIn->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, genFadeIn);

        label_4 = new QLabel(groupBox_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_4);

        genFadeOut = new QSlider(groupBox_11);
        genFadeOut->setObjectName(QString::fromUtf8("genFadeOut"));
        genFadeOut->setMaximum(1000);
        genFadeOut->setSingleStep(10);
        genFadeOut->setOrientation(Qt::Horizontal);
        genFadeOut->setTickPosition(QSlider::NoTicks);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, genFadeOut);


        _14->addLayout(formLayout_3);


        verticalLayout_6->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(General);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy2);
        _15 = new QVBoxLayout(groupBox_12);
        _15->setObjectName(QString::fromUtf8("_15"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_24 = new QLabel(groupBox_12);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_24);

        genProxyHostname = new QLineEdit(groupBox_12);
        genProxyHostname->setObjectName(QString::fromUtf8("genProxyHostname"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, genProxyHostname);

        label_25 = new QLabel(groupBox_12);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_25);

        genProxyPort = new QLineEdit(groupBox_12);
        genProxyPort->setObjectName(QString::fromUtf8("genProxyPort"));
        genProxyPort->setMaxLength(5);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, genProxyPort);


        _15->addLayout(formLayout_4);


        verticalLayout_6->addWidget(groupBox_12);


        horizontalLayout_4->addLayout(verticalLayout_6);

        groupBox_6 = new QGroupBox(General);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        vboxLayout5 = new QVBoxLayout(groupBox_6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        genUpdateCatalog = new QCheckBox(groupBox_6);
        genUpdateCatalog->setObjectName(QString::fromUtf8("genUpdateCatalog"));
        genUpdateCatalog->setChecked(true);

        hboxLayout2->addWidget(genUpdateCatalog);

        genUpdateMinutes = new QSpinBox(groupBox_6);
        genUpdateMinutes->setObjectName(QString::fromUtf8("genUpdateMinutes"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(genUpdateMinutes->sizePolicy().hasHeightForWidth());
        genUpdateMinutes->setSizePolicy(sizePolicy3);
        genUpdateMinutes->setMinimumSize(QSize(80, 0));
        genUpdateMinutes->setAccelerated(true);
        genUpdateMinutes->setMinimum(1);
        genUpdateMinutes->setMaximum(99999999);
        genUpdateMinutes->setValue(10);

        hboxLayout2->addWidget(genUpdateMinutes);


        vboxLayout5->addLayout(hboxLayout2);

        genShowHidden = new QCheckBox(groupBox_6);
        genShowHidden->setObjectName(QString::fromUtf8("genShowHidden"));

        vboxLayout5->addWidget(genShowHidden);

        genShowNetwork = new QCheckBox(groupBox_6);
        genShowNetwork->setObjectName(QString::fromUtf8("genShowNetwork"));

        vboxLayout5->addWidget(genShowNetwork);

        genUseWildcards = new QCheckBox(groupBox_6);
        genUseWildcards->setObjectName(QString::fromUtf8("genUseWildcards"));

        vboxLayout5->addWidget(genUseWildcards);

        genUpdateCheck = new QCheckBox(groupBox_6);
        genUpdateCheck->setObjectName(QString::fromUtf8("genUpdateCheck"));

        vboxLayout5->addWidget(genUpdateCheck);

        genPortable = new QCheckBox(groupBox_6);
        genPortable->setObjectName(QString::fromUtf8("genPortable"));

        vboxLayout5->addWidget(genPortable);

        spacerItem1 = new QSpacerItem(31, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout5->addItem(spacerItem1);


        horizontalLayout_4->addWidget(groupBox_6);


        vboxLayout1->addLayout(horizontalLayout_4);

        tabWidget->addTab(General, QString());
        Skins = new QWidget();
        Skins->setObjectName(QString::fromUtf8("Skins"));
        vboxLayout6 = new QVBoxLayout(Skins);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        groupBox_3 = new QGroupBox(Skins);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 0));
        groupBox_3->setMaximumSize(QSize(160, 16777215));
        hboxLayout4 = new QHBoxLayout(groupBox_3);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        skinList = new QListWidget(groupBox_3);
        skinList->setObjectName(QString::fromUtf8("skinList"));
        skinList->setMaximumSize(QSize(150, 16777215));

        hboxLayout4->addWidget(skinList);


        hboxLayout3->addWidget(groupBox_3);

        groupBox_8 = new QGroupBox(Skins);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(300, 166));
        vboxLayout7 = new QVBoxLayout(groupBox_8);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        authorInfo = new QLabel(groupBox_8);
        authorInfo->setObjectName(QString::fromUtf8("authorInfo"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(authorInfo->sizePolicy().hasHeightForWidth());
        authorInfo->setSizePolicy(sizePolicy4);
        authorInfo->setScaledContents(true);
        authorInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        vboxLayout7->addWidget(authorInfo);


        hboxLayout3->addWidget(groupBox_8);


        vboxLayout6->addLayout(hboxLayout3);

        groupBox_9 = new QGroupBox(Skins);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setMinimumSize(QSize(0, 150));
        vboxLayout8 = new QVBoxLayout(groupBox_9);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        skinPreview = new QLabel(groupBox_9);
        skinPreview->setObjectName(QString::fromUtf8("skinPreview"));
        skinPreview->setMinimumSize(QSize(0, 116));
        skinPreview->setAlignment(Qt::AlignCenter);

        vboxLayout8->addWidget(skinPreview);


        vboxLayout6->addWidget(groupBox_9);

        tabWidget->addTab(Skins, QString());
        Catalog = new QWidget();
        Catalog->setObjectName(QString::fromUtf8("Catalog"));
        vboxLayout9 = new QVBoxLayout(Catalog);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        vboxLayout10 = new QVBoxLayout();
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        directoriesGroupBox = new QGroupBox(Catalog);
        directoriesGroupBox->setObjectName(QString::fromUtf8("directoriesGroupBox"));
        vboxLayout11 = new QVBoxLayout(directoriesGroupBox);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        catDirectories = new DropListWidget(directoriesGroupBox);
        catDirectories->setObjectName(QString::fromUtf8("catDirectories"));

        vboxLayout11->addWidget(catDirectories);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem2);

        catDirPlus = new QPushButton(directoriesGroupBox);
        catDirPlus->setObjectName(QString::fromUtf8("catDirPlus"));

        hboxLayout6->addWidget(catDirPlus);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem3);

        catDirMinus = new QPushButton(directoriesGroupBox);
        catDirMinus->setObjectName(QString::fromUtf8("catDirMinus"));

        hboxLayout6->addWidget(catDirMinus);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem4);


        vboxLayout11->addLayout(hboxLayout6);


        vboxLayout10->addWidget(directoriesGroupBox);


        hboxLayout5->addLayout(vboxLayout10);

        fileTypesGroupBox = new QGroupBox(Catalog);
        fileTypesGroupBox->setObjectName(QString::fromUtf8("fileTypesGroupBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fileTypesGroupBox->sizePolicy().hasHeightForWidth());
        fileTypesGroupBox->setSizePolicy(sizePolicy5);
        fileTypesGroupBox->setMaximumSize(QSize(140, 16777215));
        vboxLayout12 = new QVBoxLayout(fileTypesGroupBox);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        catTypes = new QListWidget(fileTypesGroupBox);
        catTypes->setObjectName(QString::fromUtf8("catTypes"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(catTypes->sizePolicy().hasHeightForWidth());
        catTypes->setSizePolicy(sizePolicy6);
        catTypes->setMaximumSize(QSize(16777215, 16777215));

        vboxLayout12->addWidget(catTypes);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        catTypesPlus = new QPushButton(fileTypesGroupBox);
        catTypesPlus->setObjectName(QString::fromUtf8("catTypesPlus"));
        catTypesPlus->setMaximumSize(QSize(16777215, 13123213));

        horizontalLayout->addWidget(catTypesPlus);

        catTypesMinus = new QPushButton(fileTypesGroupBox);
        catTypesMinus->setObjectName(QString::fromUtf8("catTypesMinus"));
        catTypesMinus->setMaximumSize(QSize(16777215, 13123123));

        horizontalLayout->addWidget(catTypesMinus);


        vboxLayout12->addLayout(horizontalLayout);

        catCheckBinaries = new QCheckBox(fileTypesGroupBox);
        catCheckBinaries->setObjectName(QString::fromUtf8("catCheckBinaries"));

        vboxLayout12->addWidget(catCheckBinaries);

        catCheckDirs = new QCheckBox(fileTypesGroupBox);
        catCheckDirs->setObjectName(QString::fromUtf8("catCheckDirs"));

        vboxLayout12->addWidget(catCheckDirs);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        label_10 = new QLabel(fileTypesGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout7->addWidget(label_10);

        catDepth = new QSpinBox(fileTypesGroupBox);
        catDepth->setObjectName(QString::fromUtf8("catDepth"));
        catDepth->setMaximum(100000);
        catDepth->setValue(100);

        hboxLayout7->addWidget(catDepth);


        vboxLayout12->addLayout(hboxLayout7);


        hboxLayout5->addWidget(fileTypesGroupBox);

        vboxLayout13 = new QVBoxLayout();
        vboxLayout13->setObjectName(QString::fromUtf8("vboxLayout13"));

        hboxLayout5->addLayout(vboxLayout13);


        vboxLayout9->addLayout(hboxLayout5);

        vboxLayout14 = new QVBoxLayout();
        vboxLayout14->setObjectName(QString::fromUtf8("vboxLayout14"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        catRescan = new QPushButton(Catalog);
        catRescan->setObjectName(QString::fromUtf8("catRescan"));

        hboxLayout8->addWidget(catRescan);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem5);

        catSize = new QLabel(Catalog);
        catSize->setObjectName(QString::fromUtf8("catSize"));

        hboxLayout8->addWidget(catSize);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem6);


        vboxLayout14->addLayout(hboxLayout8);

        catProgress = new QProgressBar(Catalog);
        catProgress->setObjectName(QString::fromUtf8("catProgress"));
        catProgress->setMinimum(0);
        catProgress->setMaximum(100);
        catProgress->setValue(0);
        catProgress->setTextVisible(false);
        catProgress->setOrientation(Qt::Horizontal);

        vboxLayout14->addWidget(catProgress);


        vboxLayout9->addLayout(vboxLayout14);

        tabWidget->addTab(Catalog, QString());
        Plugins = new QWidget();
        Plugins->setObjectName(QString::fromUtf8("Plugins"));
        vboxLayout15 = new QVBoxLayout(Plugins);
        vboxLayout15->setObjectName(QString::fromUtf8("vboxLayout15"));
        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        groupBox_7 = new QGroupBox(Plugins);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMaximumSize(QSize(141, 16777215));
        vboxLayout16 = new QVBoxLayout(groupBox_7);
        vboxLayout16->setObjectName(QString::fromUtf8("vboxLayout16"));
        plugList = new QListWidget(groupBox_7);
        plugList->setObjectName(QString::fromUtf8("plugList"));
        plugList->setSelectionRectVisible(false);

        vboxLayout16->addWidget(plugList);


        hboxLayout9->addWidget(groupBox_7);

        plugBox = new QGroupBox(Plugins);
        plugBox->setObjectName(QString::fromUtf8("plugBox"));
        sizePolicy4.setHeightForWidth(plugBox->sizePolicy().hasHeightForWidth());
        plugBox->setSizePolicy(sizePolicy4);
        plugBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        vboxLayout17 = new QVBoxLayout(plugBox);
        vboxLayout17->setSpacing(0);
        vboxLayout17->setContentsMargins(0, 0, 0, 0);
        vboxLayout17->setObjectName(QString::fromUtf8("vboxLayout17"));

        hboxLayout9->addWidget(plugBox);


        vboxLayout15->addLayout(hboxLayout9);

        tabWidget->addTab(Plugins, QString());
        About = new QWidget();
        About->setObjectName(QString::fromUtf8("About"));
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(22);
        gridLayout_2->setContentsMargins(40, -1, 40, -1);
        icon = new QLabel(About);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setFrameShadow(QFrame::Plain);
        icon->setPixmap(QPixmap(QString::fromUtf8(":/resources/launchy128.png")));
        icon->setAlignment(Qt::AlignCenter);
        icon->setMargin(11);

        gridLayout_2->addWidget(icon, 0, 0, 1, 1);

        aboutVer = new QLabel(About);
        aboutVer->setObjectName(QString::fromUtf8("aboutVer"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        aboutVer->setFont(font);
        aboutVer->setAlignment(Qt::AlignCenter);
        aboutVer->setWordWrap(false);

        gridLayout_2->addWidget(aboutVer, 1, 0, 1, 1);

        aboutText = new QLabel(About);
        aboutText->setObjectName(QString::fromUtf8("aboutText"));
        aboutText->setMinimumSize(QSize(481, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        aboutText->setFont(font1);
        aboutText->setWordWrap(true);
        aboutText->setOpenExternalLinks(true);

        gridLayout_2->addWidget(aboutText, 2, 0, 1, 1);

        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(321, 0));
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_2->setOpenExternalLinks(true);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        aboutText_2 = new QLabel(About);
        aboutText_2->setObjectName(QString::fromUtf8("aboutText_2"));
        sizePolicy1.setHeightForWidth(aboutText_2->sizePolicy().hasHeightForWidth());
        aboutText_2->setSizePolicy(sizePolicy1);
        aboutText_2->setMinimumSize(QSize(211, 0));
        aboutText_2->setFont(font1);
        aboutText_2->setAlignment(Qt::AlignCenter);
        aboutText_2->setWordWrap(true);
        aboutText_2->setOpenExternalLinks(true);

        gridLayout_2->addWidget(aboutText_2, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        tabWidget->addTab(About, QString());

        vboxLayout->addWidget(tabWidget);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        buttonBox = new QDialogButtonBox(OptionsDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout10->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout10);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(genHCenter);
        label->setBuddy(genModifierBox);
        label_11->setBuddy(genAutoSuggestDelay);
        label_9->setBuddy(genMaxViewable);
        label_8->setBuddy(genNumResults);
        label_7->setBuddy(genNumHistory);
        label_12->setBuddy(genCondensed);
        label_6->setBuddy(genOpaqueness);
        label_3->setBuddy(genFadeIn);
        label_4->setBuddy(genFadeOut);
        label_24->setBuddy(genProxyHostname);
        label_25->setBuddy(genProxyPort);
        label_10->setBuddy(catDepth);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, genAlwaysShow);
        QWidget::setTabOrder(genAlwaysShow, genHideFocus);
        QWidget::setTabOrder(genHideFocus, genAlwaysTop);
        QWidget::setTabOrder(genAlwaysTop, genShowTrayIcon);
        QWidget::setTabOrder(genShowTrayIcon, genHCenter);
        QWidget::setTabOrder(genHCenter, genVCenter);
        QWidget::setTabOrder(genVCenter, genShiftDrag);
        QWidget::setTabOrder(genShiftDrag, genModifierBox);
        QWidget::setTabOrder(genModifierBox, genKeyBox);
        QWidget::setTabOrder(genKeyBox, genDecorateText);
        QWidget::setTabOrder(genDecorateText, genCondensed);
        QWidget::setTabOrder(genCondensed, genAutoSuggestDelay);
        QWidget::setTabOrder(genAutoSuggestDelay, genMaxViewable);
        QWidget::setTabOrder(genMaxViewable, genNumResults);
        QWidget::setTabOrder(genNumResults, genNumHistory);
        QWidget::setTabOrder(genNumHistory, genOpaqueness);
        QWidget::setTabOrder(genOpaqueness, genFadeIn);
        QWidget::setTabOrder(genFadeIn, genFadeOut);
        QWidget::setTabOrder(genFadeOut, genUpdateCatalog);
        QWidget::setTabOrder(genUpdateCatalog, genUpdateMinutes);
        QWidget::setTabOrder(genUpdateMinutes, genShowHidden);
        QWidget::setTabOrder(genShowHidden, genShowNetwork);
        QWidget::setTabOrder(genShowNetwork, genUpdateCheck);
        QWidget::setTabOrder(genUpdateCheck, genPortable);
        QWidget::setTabOrder(genPortable, genProxyHostname);
        QWidget::setTabOrder(genProxyHostname, genProxyPort);
        QWidget::setTabOrder(genProxyPort, skinList);
        QWidget::setTabOrder(skinList, catDirectories);
        QWidget::setTabOrder(catDirectories, catDirPlus);
        QWidget::setTabOrder(catDirPlus, catDirMinus);
        QWidget::setTabOrder(catDirMinus, catTypes);
        QWidget::setTabOrder(catTypes, catTypesPlus);
        QWidget::setTabOrder(catTypesPlus, catTypesMinus);
        QWidget::setTabOrder(catTypesMinus, catCheckBinaries);
        QWidget::setTabOrder(catCheckBinaries, catCheckDirs);
        QWidget::setTabOrder(catCheckDirs, catDepth);
        QWidget::setTabOrder(catDepth, catRescan);
        QWidget::setTabOrder(catRescan, plugList);
        QWidget::setTabOrder(plugList, buttonBox);

        retranslateUi(OptionsDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), OptionsDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OptionsDlg, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptionsDlg);
    } // setupUi

    void retranslateUi(QDialog *OptionsDlg)
    {
        OptionsDlg->setWindowTitle(QApplication::translate("OptionsDlg", "Launchy options", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("OptionsDlg", "User Interface", 0, QApplication::UnicodeUTF8));
        genAlwaysShow->setText(QApplication::translate("OptionsDlg", "Always display Launchy window", 0, QApplication::UnicodeUTF8));
        genHideFocus->setText(QApplication::translate("OptionsDlg", "Hide Launchy when it loses focus", 0, QApplication::UnicodeUTF8));
        genAlwaysTop->setText(QApplication::translate("OptionsDlg", "Always on top", 0, QApplication::UnicodeUTF8));
        genShowTrayIcon->setText(QApplication::translate("OptionsDlg", "Show tray icon", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OptionsDlg", "Always center Launchy", 0, QApplication::UnicodeUTF8));
        genHCenter->setText(QApplication::translate("OptionsDlg", "horizontally", 0, QApplication::UnicodeUTF8));
        genVCenter->setText(QApplication::translate("OptionsDlg", "vertically", 0, QApplication::UnicodeUTF8));
        genShiftDrag->setText(QApplication::translate("OptionsDlg", "Only allow dragging whilst Shift is pressed", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OptionsDlg", "&Hotkey:", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("OptionsDlg", "Suggestion List", 0, QApplication::UnicodeUTF8));
        genDecorateText->setText(QApplication::translate("OptionsDlg", "Underline matched text", 0, QApplication::UnicodeUTF8));
        genAutoSuggestDelay->setSuffix(QApplication::translate("OptionsDlg", " ms", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("OptionsDlg", "Auto open delay", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("OptionsDlg", "Simultaneously visible suggestions", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("OptionsDlg", "Maximum number of suggestions", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OptionsDlg", "Maximum number of history items", 0, QApplication::UnicodeUTF8));
        genCondensed->clear();
        genCondensed->insertItems(0, QStringList()
         << QApplication::translate("OptionsDlg", "Name and path", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OptionsDlg", "Path only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OptionsDlg", "Name only", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("OptionsDlg", "Suggestions display", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("OptionsDlg", "Visual Effects", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OptionsDlg", "Opaqueness", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OptionsDlg", "Fade in time", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OptionsDlg", "Fade out time", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("OptionsDlg", "Internet Proxy", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("OptionsDlg", "Hostname", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("OptionsDlg", "Port", 0, QApplication::UnicodeUTF8));
        genProxyPort->setInputMask(QString());
        groupBox_6->setTitle(QApplication::translate("OptionsDlg", "System Options", 0, QApplication::UnicodeUTF8));
        genUpdateCatalog->setText(QApplication::translate("OptionsDlg", "Auto update catalog every", 0, QApplication::UnicodeUTF8));
        genUpdateMinutes->setSuffix(QApplication::translate("OptionsDlg", " minutes", 0, QApplication::UnicodeUTF8));
        genShowHidden->setText(QApplication::translate("OptionsDlg", "Show hidden files in browse mode", 0, QApplication::UnicodeUTF8));
        genShowNetwork->setText(QApplication::translate("OptionsDlg", "Show network in browse mode", 0, QApplication::UnicodeUTF8));
        genUseWildcards->setText(QApplication::translate("OptionsDlg", "Allow wildcards in browse mode", 0, QApplication::UnicodeUTF8));
        genUpdateCheck->setText(QApplication::translate("OptionsDlg", "Check for new versions of Launchy on startup", 0, QApplication::UnicodeUTF8));
        genPortable->setText(QApplication::translate("OptionsDlg", "Portable mode (USB stick)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("OptionsDlg", "General", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("OptionsDlg", "Select a skin", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("OptionsDlg", "Author information", 0, QApplication::UnicodeUTF8));
        authorInfo->setText(QString());
        groupBox_9->setTitle(QApplication::translate("OptionsDlg", "Skin preview", 0, QApplication::UnicodeUTF8));
        skinPreview->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Skins), QApplication::translate("OptionsDlg", "Skins", 0, QApplication::UnicodeUTF8));
        directoriesGroupBox->setTitle(QApplication::translate("OptionsDlg", "Directories", 0, QApplication::UnicodeUTF8));
        catDirPlus->setText(QApplication::translate("OptionsDlg", "+", 0, QApplication::UnicodeUTF8));
        catDirMinus->setText(QApplication::translate("OptionsDlg", "-", 0, QApplication::UnicodeUTF8));
        fileTypesGroupBox->setTitle(QApplication::translate("OptionsDlg", "File Types", 0, QApplication::UnicodeUTF8));
        catTypesPlus->setText(QApplication::translate("OptionsDlg", "+", 0, QApplication::UnicodeUTF8));
        catTypesMinus->setText(QApplication::translate("OptionsDlg", "-", 0, QApplication::UnicodeUTF8));
        catCheckBinaries->setText(QApplication::translate("OptionsDlg", "Include executables", 0, QApplication::UnicodeUTF8));
        catCheckDirs->setText(QApplication::translate("OptionsDlg", "Include directories", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("OptionsDlg", "Depth:", 0, QApplication::UnicodeUTF8));
        catRescan->setText(QApplication::translate("OptionsDlg", "Rescan Catalog", 0, QApplication::UnicodeUTF8));
        catSize->setText(QApplication::translate("OptionsDlg", "Indexing 0 items", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Catalog), QApplication::translate("OptionsDlg", "Catalog", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("OptionsDlg", "Available plugins", 0, QApplication::UnicodeUTF8));
        plugBox->setTitle(QApplication::translate("OptionsDlg", "Plugin options", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Plugins), QApplication::translate("OptionsDlg", "Plugins", 0, QApplication::UnicodeUTF8));
        icon->setText(QString());
        aboutVer->setText(QString());
        aboutText->setText(QApplication::translate("OptionsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">I greatly enjoy developing Launchy, and I hope that you enjoy using it. It's free to use, but if you think Launchy is a worthwhile application, I would appreciate your </span><a href=\"http://www.launchy.net/#donate\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">donation.</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OptionsDlg", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Launchy's official homepage is <a href=\"http://www.launchy.net/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.launchy.net/</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        aboutText_2->setText(QApplication::translate("OptionsDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Credits</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Creator and Developer:  Josh Karlin</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\"><span style=\" font-size:8pt;\">Developer: Simon Capewell</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(About), QApplication::translate("OptionsDlg", "About Launchy", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDlg: public Ui_OptionsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
