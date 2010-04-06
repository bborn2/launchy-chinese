/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created: Mon Apr 5 21:28:10 2010
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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Dlg)
    {
        if (Dlg->objectName().isEmpty())
            Dlg->setObjectName(QString::fromUtf8("Dlg"));
        Dlg->resize(354, 273);
        vboxLayout = new QVBoxLayout(Dlg);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        hboxLayout->addItem(verticalSpacer);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Dlg);

        QMetaObject::connectSlotsByName(Dlg);
    } // setupUi

    void retranslateUi(QWidget *Dlg)
    {
        Dlg->setWindowTitle(QApplication::translate("Dlg", "Verby - Adds verbs to commands", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dlg: public Ui_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H
