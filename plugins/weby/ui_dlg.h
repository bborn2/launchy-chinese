/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created: Mon Apr 5 21:28:36 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_H
#define UI_DLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "DropTableWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Dlg
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *booksFirefox;
    QCheckBox *booksIE;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QLabel *label_default;
    QPushButton *pushDefault;
    QPushButton *pushClearDefault;
    DropTableWidget *table;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *tableNew;
    QSpacerItem *spacerItem1;
    QPushButton *tableRemove;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *Dlg)
    {
        if (Dlg->objectName().isEmpty())
            Dlg->setObjectName(QString::fromUtf8("Dlg"));
        Dlg->resize(464, 271);
        verticalLayout = new QVBoxLayout(Dlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        booksFirefox = new QCheckBox(Dlg);
        booksFirefox->setObjectName(QString::fromUtf8("booksFirefox"));

        verticalLayout->addWidget(booksFirefox);

        booksIE = new QCheckBox(Dlg);
        booksIE->setObjectName(QString::fromUtf8("booksIE"));

        verticalLayout->addWidget(booksIE);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(Dlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(101, 16777215));

        hboxLayout->addWidget(label_2);

        label_default = new QLabel(Dlg);
        label_default->setObjectName(QString::fromUtf8("label_default"));
        label_default->setMinimumSize(QSize(201, 0));

        hboxLayout->addWidget(label_default);

        pushDefault = new QPushButton(Dlg);
        pushDefault->setObjectName(QString::fromUtf8("pushDefault"));

        hboxLayout->addWidget(pushDefault);

        pushClearDefault = new QPushButton(Dlg);
        pushClearDefault->setObjectName(QString::fromUtf8("pushClearDefault"));

        hboxLayout->addWidget(pushClearDefault);


        verticalLayout->addLayout(hboxLayout);

        table = new DropTableWidget(Dlg);
        if (table->columnCount() < 2)
            table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        table->setObjectName(QString::fromUtf8("table"));
        table->setColumnCount(2);

        verticalLayout->addWidget(table);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(28, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        tableNew = new QPushButton(Dlg);
        tableNew->setObjectName(QString::fromUtf8("tableNew"));

        hboxLayout1->addWidget(tableNew);

        spacerItem1 = new QSpacerItem(28, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        tableRemove = new QPushButton(Dlg);
        tableRemove->setObjectName(QString::fromUtf8("tableRemove"));

        hboxLayout1->addWidget(tableRemove);

        spacerItem2 = new QSpacerItem(28, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        verticalLayout->addLayout(hboxLayout1);


        retranslateUi(Dlg);

        QMetaObject::connectSlotsByName(Dlg);
    } // setupUi

    void retranslateUi(QWidget *Dlg)
    {
        Dlg->setWindowTitle(QApplication::translate("Dlg", "Weby - Launch your favorite websites", 0, QApplication::UnicodeUTF8));
        booksFirefox->setText(QApplication::translate("Dlg", "Firefox Bookmarks (See manual for Firefox 3)", 0, QApplication::UnicodeUTF8));
        booksIE->setText(QApplication::translate("Dlg", "Internet Explorer Bookmarks (Windows only)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dlg", "Default Search:", 0, QApplication::UnicodeUTF8));
        label_default->setText(QString());
        pushDefault->setText(QApplication::translate("Dlg", "Set Default", 0, QApplication::UnicodeUTF8));
        pushClearDefault->setText(QApplication::translate("Dlg", "Clear Default", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dlg", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dlg", "URL", 0, QApplication::UnicodeUTF8));
        tableNew->setText(QApplication::translate("Dlg", "+", 0, QApplication::UnicodeUTF8));
        tableRemove->setText(QApplication::translate("Dlg", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dlg: public Ui_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H
