/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created: Mon Apr 5 21:29:01 2010
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
    QVBoxLayout *vboxLayout;
    DropTableWidget *table;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *tableNew;
    QSpacerItem *spacerItem1;
    QPushButton *tableRemove;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QLabel *label_2;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *Dlg)
    {
        if (Dlg->objectName().isEmpty())
            Dlg->setObjectName(QString::fromUtf8("Dlg"));
        Dlg->resize(411, 271);
        Dlg->setCursor(QCursor(Qt::ArrowCursor));
        vboxLayout = new QVBoxLayout(Dlg);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        table = new DropTableWidget(Dlg);
        if (table->columnCount() < 3)
            table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table->setObjectName(QString::fromUtf8("table"));
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setSortingEnabled(false);
        table->setWordWrap(false);
        table->setColumnCount(3);
        table->verticalHeader()->setDefaultSectionSize(5);

        vboxLayout->addWidget(table);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        tableNew = new QPushButton(Dlg);
        tableNew->setObjectName(QString::fromUtf8("tableNew"));

        hboxLayout->addWidget(tableNew);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        tableRemove = new QPushButton(Dlg);
        tableRemove->setObjectName(QString::fromUtf8("tableRemove"));

        hboxLayout->addWidget(tableRemove);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        label_2 = new QLabel(Dlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(Dlg);

        QMetaObject::connectSlotsByName(Dlg);
    } // setupUi

    void retranslateUi(QWidget *Dlg)
    {
        Dlg->setWindowTitle(QApplication::translate("Dlg", "Runner - Launch custom commands", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dlg", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dlg", "Program", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Dlg", "Arguments", 0, QApplication::UnicodeUTF8));
        tableNew->setText(QApplication::translate("Dlg", "+", 0, QApplication::UnicodeUTF8));
        tableRemove->setText(QApplication::translate("Dlg", "-", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dlg", "Hint: Use $$ symbols to mark locations for user input", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dlg: public Ui_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H
