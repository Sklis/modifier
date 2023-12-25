/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QWidget *centralwidget;
    QLabel *test;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *period_3;
    QSpinBox *spinBox;
    QLabel *deletion;
    QLabel *path_save_3;
    QLabel *label;
    QLabel *same_names_2;
    QPushButton *path_save;
    QComboBox *path_save_2;
    QLabel *error;
    QLabel *path_save_6;
    QLabel *mask_3;
    QLabel *del_sav_fike_3;
    QLabel *period;
    QLineEdit *variable;
    QCheckBox *timer;
    QLabel *mask_6;
    QLabel *path_save_4;
    QCheckBox *checkBox;
    QPushButton *modify;
    QLabel *path_save_8;
    QPushButton *modify_2;
    QLabel *path_save_5;
    QLabel *path_save_7;
    QPushButton *choice;
    QLabel *del_sav_fike_4;
    QLineEdit *mask_2;
    QComboBox *mask;
    QLabel *mask_4;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(666, 621);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        test = new QLabel(centralwidget);
        test->setObjectName("test");
        test->setGeometry(QRect(20, 530, 211, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 631, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        period_3 = new QLabel(layoutWidget);
        period_3->setObjectName("period_3");
        period_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(period_3, 6, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(5);
        spinBox->setMaximum(20);
        spinBox->setSingleStep(5);

        gridLayout->addWidget(spinBox, 6, 3, 1, 1);

        deletion = new QLabel(layoutWidget);
        deletion->setObjectName("deletion");
        deletion->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(deletion, 2, 4, 1, 1);

        path_save_3 = new QLabel(layoutWidget);
        path_save_3->setObjectName("path_save_3");
        path_save_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(path_save_3, 3, 3, 1, 4);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 6, 4, 1, 1);

        same_names_2 = new QLabel(layoutWidget);
        same_names_2->setObjectName("same_names_2");
        same_names_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(same_names_2, 4, 2, 1, 2);

        path_save = new QPushButton(layoutWidget);
        path_save->setObjectName("path_save");
        path_save->setMinimumSize(QSize(40, 0));
        path_save->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(path_save, 3, 1, 1, 1);

        path_save_2 = new QComboBox(layoutWidget);
        path_save_2->addItem(QString());
        path_save_2->addItem(QString());
        path_save_2->setObjectName("path_save_2");
        path_save_2->setMinimumSize(QSize(30, 0));
        path_save_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(path_save_2, 4, 1, 1, 1);

        error = new QLabel(layoutWidget);
        error->setObjectName("error");
        error->setStyleSheet(QString::fromUtf8("color: red; \n"
""));

        gridLayout->addWidget(error, 7, 2, 1, 5);

        path_save_6 = new QLabel(layoutWidget);
        path_save_6->setObjectName("path_save_6");
        path_save_6->setMaximumSize(QSize(90, 16777215));
        path_save_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(path_save_6, 3, 2, 1, 1);

        mask_3 = new QLabel(layoutWidget);
        mask_3->setObjectName("mask_3");

        gridLayout->addWidget(mask_3, 0, 0, 1, 1);

        del_sav_fike_3 = new QLabel(layoutWidget);
        del_sav_fike_3->setObjectName("del_sav_fike_3");

        gridLayout->addWidget(del_sav_fike_3, 2, 0, 1, 1);

        period = new QLabel(layoutWidget);
        period->setObjectName("period");
        period->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(period, 6, 2, 1, 1);

        variable = new QLineEdit(layoutWidget);
        variable->setObjectName("variable");
        variable->setMaximumSize(QSize(100, 16777215));
        variable->setMaxLength(8);
        variable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(variable, 7, 1, 1, 1);

        timer = new QCheckBox(layoutWidget);
        timer->setObjectName("timer");

        gridLayout->addWidget(timer, 6, 1, 1, 1);

        mask_6 = new QLabel(layoutWidget);
        mask_6->setObjectName("mask_6");
        mask_6->setMaximumSize(QSize(150, 16777215));
        mask_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mask_6, 7, 0, 1, 1);

        path_save_4 = new QLabel(layoutWidget);
        path_save_4->setObjectName("path_save_4");

        gridLayout->addWidget(path_save_4, 3, 0, 1, 1);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 2, 1, 1, 1);

        modify = new QPushButton(layoutWidget);
        modify->setObjectName("modify");
        modify->setMinimumSize(QSize(0, 40));
        modify->setMaximumSize(QSize(16777215, 24));

        gridLayout->addWidget(modify, 8, 0, 1, 1);

        path_save_8 = new QLabel(layoutWidget);
        path_save_8->setObjectName("path_save_8");
        path_save_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(path_save_8, 4, 0, 1, 1);

        modify_2 = new QPushButton(layoutWidget);
        modify_2->setObjectName("modify_2");
        modify_2->setMinimumSize(QSize(0, 40));
        modify_2->setMaximumSize(QSize(16777215, 24));

        gridLayout->addWidget(modify_2, 8, 2, 1, 1);

        path_save_5 = new QLabel(layoutWidget);
        path_save_5->setObjectName("path_save_5");
        path_save_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(path_save_5, 1, 3, 1, 4);

        path_save_7 = new QLabel(layoutWidget);
        path_save_7->setObjectName("path_save_7");
        path_save_7->setMaximumSize(QSize(80, 16777215));
        path_save_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(path_save_7, 1, 2, 1, 1);

        choice = new QPushButton(layoutWidget);
        choice->setObjectName("choice");
        choice->setMaximumSize(QSize(140, 16777215));

        gridLayout->addWidget(choice, 1, 1, 1, 1);

        del_sav_fike_4 = new QLabel(layoutWidget);
        del_sav_fike_4->setObjectName("del_sav_fike_4");
        del_sav_fike_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(del_sav_fike_4, 1, 0, 1, 1);

        mask_2 = new QLineEdit(layoutWidget);
        mask_2->setObjectName("mask_2");
        mask_2->setMaximumSize(QSize(100, 16777215));
        mask_2->setMaxLength(8);
        mask_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mask_2, 0, 1, 1, 1);

        mask = new QComboBox(layoutWidget);
        mask->addItem(QString());
        mask->addItem(QString());
        mask->setObjectName("mask");
        mask->setMinimumSize(QSize(30, 0));
        mask->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(mask, 0, 4, 1, 1);

        mask_4 = new QLabel(layoutWidget);
        mask_4->setObjectName("mask_4");
        mask_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mask_4, 0, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 666, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        test->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        period_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \320\277\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\321\203?", nullptr));
        deletion->setText(QString());
        path_save_3->setText(QCoreApplication::translate("MainWindow", "\320\275/\320\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\321\201\320\265\320\272\321\203\320\275\320\264", nullptr));
        same_names_2->setText(QString());
        path_save->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214", nullptr));
        path_save_2->setItemText(0, QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        path_save_2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));

        error->setText(QString());
        path_save_6->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\321\203:", nullptr));
        mask_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\321\213\321\202\320\265 \320\274\320\260\321\201\320\272\321\203 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        del_sav_fike_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\204\320\260\320\271\320\273:", nullptr));
        period->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265\n"
"\320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214:", nullptr));
        variable->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        timer->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        mask_6->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265\n"
"\320\264\320\273\321\217 \320\261\320\270\320\275\320\260\321\200\320\275\320\276\320\271 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270\n"
"\320\274\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \321\204\320\260\320\271\320\273\320\260", nullptr));
        path_save_4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\263\320\264\320\265 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214\n"
" \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\270\321\200\321\203\321\216\321\211\320\270\320\271 \321\204\320\260\320\271\320\273:", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        modify->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\270\321\204\320\270\321\206\321\213\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        path_save_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214\n"
" \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\270\321\200\321\203\321\216\321\211\320\270\320\265 \321\204\320\260\320\271\320\273\321\213\n"
"\321\201 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\321\213\320\274 \320\270\320\274\320\265\320\275\320\265\320\274?", nullptr));
        modify_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214\n"
"\320\274\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\216", nullptr));
        path_save_5->setText(QCoreApplication::translate("MainWindow", "\320\275/\320\264", nullptr));
        path_save_7->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \320\277\320\260\320\277\320\272\320\265:", nullptr));
        choice->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214", nullptr));
        del_sav_fike_4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\320\277\320\272\321\203\n"
"\321\201 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\274\320\270 \321\204\320\260\320\271\320\273\320\260\320\274\320\270", nullptr));
        mask_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "txt", nullptr));
        mask->setItemText(0, QCoreApplication::translate("MainWindow", "txt", nullptr));
        mask->setItemText(1, QCoreApplication::translate("MainWindow", "bin", nullptr));

        mask_4->setText(QCoreApplication::translate("MainWindow", "\320\270\320\273\320\270 \320\262\321\213\320\261\320\265\321\200\320\265\321\202\320\265\n"
"\320\270\320\267 \320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\275\321\213\321\205", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
