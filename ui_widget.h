/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Connect;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_find;
    QListWidget *listWidget_users;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_reg;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *username;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *user_pm;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(579, 490);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 54, 12));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 531, 448));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Connect = new QPushButton(layoutWidget);
        pushButton_Connect->setObjectName(QString::fromUtf8("pushButton_Connect"));

        gridLayout->addWidget(pushButton_Connect, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_find = new QPushButton(layoutWidget);
        pushButton_find->setObjectName(QString::fromUtf8("pushButton_find"));

        verticalLayout->addWidget(pushButton_find);

        listWidget_users = new QListWidget(layoutWidget);
        listWidget_users->setObjectName(QString::fromUtf8("listWidget_users"));

        verticalLayout->addWidget(listWidget_users);

        pushButton_Send = new QPushButton(layoutWidget);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));

        verticalLayout->addWidget(pushButton_Send);


        gridLayout->addLayout(verticalLayout, 0, 4, 5, 1);

        pushButton_reg = new QPushButton(layoutWidget);
        pushButton_reg->setObjectName(QString::fromUtf8("pushButton_reg"));

        gridLayout->addWidget(pushButton_reg, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout->addWidget(username);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEnabled(true);
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 3);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 2, 0, 1, 3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        user_pm = new QLineEdit(layoutWidget);
        user_pm->setObjectName(QString::fromUtf8("user_pm"));

        gridLayout->addWidget(user_pm, 0, 3, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 4, 0, 1, 3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Client", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("Widget", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_find->setText(QCoreApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_reg->setText(QCoreApplication::translate("Widget", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H