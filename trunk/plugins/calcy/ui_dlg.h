/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created: Mon Apr 5 21:29:26 2010
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
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *txtRounding;
    QCheckBox *chkDigitGrouping;
    QCheckBox *chkCopyToClipboard;

    void setupUi(QWidget *Dlg)
    {
        if (Dlg->objectName().isEmpty())
            Dlg->setObjectName(QString::fromUtf8("Dlg"));
        Dlg->resize(464, 271);
        verticalLayout = new QVBoxLayout(Dlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(Dlg);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtRounding = new QSpinBox(Dlg);
        txtRounding->setObjectName(QString::fromUtf8("txtRounding"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtRounding);

        chkDigitGrouping = new QCheckBox(Dlg);
        chkDigitGrouping->setObjectName(QString::fromUtf8("chkDigitGrouping"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, chkDigitGrouping);

        chkCopyToClipboard = new QCheckBox(Dlg);
        chkCopyToClipboard->setObjectName(QString::fromUtf8("chkCopyToClipboard"));

        formLayout->setWidget(2, QFormLayout::LabelRole, chkCopyToClipboard);


        verticalLayout->addLayout(formLayout);


        retranslateUi(Dlg);

        QMetaObject::connectSlotsByName(Dlg);
    } // setupUi

    void retranslateUi(QWidget *Dlg)
    {
        Dlg->setWindowTitle(QApplication::translate("Dlg", "Calcy - Simple Calculator", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dlg", "Rounding", 0, QApplication::UnicodeUTF8));
        txtRounding->setSuffix(QApplication::translate("Dlg", " decimal places", 0, QApplication::UnicodeUTF8));
        txtRounding->setPrefix(QString());
        chkDigitGrouping->setText(QApplication::translate("Dlg", "Show digit grouping symbol", 0, QApplication::UnicodeUTF8));
        chkCopyToClipboard->setText(QApplication::translate("Dlg", "Copy result to clipboard when pressing Enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dlg: public Ui_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H
