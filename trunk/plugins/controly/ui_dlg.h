/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created: Mon Apr 5 21:27:49 2010
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
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg
{
public:
    QVBoxLayout *vboxLayout;

    void setupUi(QWidget *Dlg)
    {
        if (Dlg->objectName().isEmpty())
            Dlg->setObjectName(QString::fromUtf8("Dlg"));
        Dlg->resize(411, 271);
        vboxLayout = new QVBoxLayout(Dlg);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));

        retranslateUi(Dlg);

        QMetaObject::connectSlotsByName(Dlg);
    } // setupUi

    void retranslateUi(QWidget *Dlg)
    {
        Dlg->setWindowTitle(QApplication::translate("Dlg", "Controly - Index Control Panel applications", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dlg: public Ui_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H
