/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QRadioButton *radioButton;
    QLabel *label_15;
    QLabel *label_14;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSlider *horizontalSlider_4;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_3;
    QSlider *horizontalSlider_5;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QSlider *horizontalSlider_7;
    QLabel *label_6;
    QSlider *horizontalSlider_2;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *horizontalSlider_6;
    QSpinBox *spinBox_7;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_6;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_9;
    QLabel *label_9;
    QSpinBox *spinBox_8;
    QSlider *horizontalSlider_9;
    QSlider *horizontalSlider_8;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QSpinBox *spinBox_10;
    QSlider *horizontalSlider_10;
    QLabel *label_12;
    QSpinBox *spinBox_11;
    QSlider *horizontalSlider_11;
    QLabel *label_13;
    QSpinBox *spinBox_12;
    QSlider *horizontalSlider_12;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_10;
    QLabel *label_16;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(403, 508);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(120, 407, 70, 17));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);
        radioButton->setChecked(true);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 430, 51, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(210, 430, 64, 16));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 430, 69, 17));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 80, 167, 274));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_4 = new QSlider(layoutWidget);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_4, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(100);

        gridLayout->addWidget(spinBox_2, 1, 2, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(100);

        gridLayout->addWidget(spinBox, 0, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(100);

        gridLayout->addWidget(spinBox_4, 3, 2, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(100);

        gridLayout->addWidget(spinBox_3, 2, 2, 1, 1);

        horizontalSlider_5 = new QSlider(layoutWidget);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_5, 3, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        spinBox_5 = new QSpinBox(layoutWidget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(100);

        gridLayout->addWidget(spinBox_5, 4, 2, 1, 1);

        horizontalSlider_7 = new QSlider(layoutWidget);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setMaximum(100);
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_7, 5, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 4, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        horizontalSlider_6 = new QSlider(layoutWidget);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(100);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_6, 7, 1, 1, 1);

        spinBox_7 = new QSpinBox(layoutWidget);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMaximum(100);

        gridLayout->addWidget(spinBox_7, 6, 2, 1, 1);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 6, 1, 1, 1);

        spinBox_6 = new QSpinBox(layoutWidget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMaximum(100);

        gridLayout->addWidget(spinBox_6, 5, 2, 1, 1);

        horizontalSlider_3 = new QSlider(layoutWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 8, 1, 1, 1);

        spinBox_9 = new QSpinBox(layoutWidget);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setMaximum(100);

        gridLayout->addWidget(spinBox_9, 8, 2, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        spinBox_8 = new QSpinBox(layoutWidget);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setMaximum(100);

        gridLayout->addWidget(spinBox_8, 7, 2, 1, 1);

        horizontalSlider_9 = new QSlider(layoutWidget);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setMaximum(100);
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_9, 2, 1, 1, 1);

        horizontalSlider_8 = new QSlider(layoutWidget);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setMaximum(100);
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_8, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 110, 86, 215));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        spinBox_10 = new QSpinBox(layoutWidget1);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setMaximum(100);

        verticalLayout->addWidget(spinBox_10);

        horizontalSlider_10 = new QSlider(layoutWidget1);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setMaximum(100);
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_10);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        spinBox_11 = new QSpinBox(layoutWidget1);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));
        spinBox_11->setMaximum(100);

        verticalLayout->addWidget(spinBox_11);

        horizontalSlider_11 = new QSlider(layoutWidget1);
        horizontalSlider_11->setObjectName(QStringLiteral("horizontalSlider_11"));
        horizontalSlider_11->setMaximum(100);
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_11);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout->addWidget(label_13);

        spinBox_12 = new QSpinBox(layoutWidget1);
        spinBox_12->setObjectName(QStringLiteral("spinBox_12"));
        spinBox_12->setMaximum(100);

        verticalLayout->addWidget(spinBox_12);

        horizontalSlider_12 = new QSlider(layoutWidget1);
        horizontalSlider_12->setObjectName(QStringLiteral("horizontalSlider_12"));
        horizontalSlider_12->setMaximum(100);
        horizontalSlider_12->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_12);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 400, 75, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 30, 101, 20));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(130, 30, 34, 16));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(130, 10, 151, 21));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_16->setFont(font);
        label_16->setScaledContents(false);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 380, 291, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        label_10->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        radioButton->raise();
        radioButton_2->raise();
        label_15->raise();
        label_14->raise();
        pushButton->raise();
        comboBox->raise();
        label_16->raise();
        line->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 403, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_8, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_9, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_7, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox_7, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), spinBox_8, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_9, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_10, SIGNAL(valueChanged(int)), spinBox_10, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_11, SIGNAL(valueChanged(int)), spinBox_11, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider_4, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_8, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), horizontalSlider_9, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), horizontalSlider_5, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), horizontalSlider_7, SLOT(setValue(int)));
        QObject::connect(spinBox_7, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_8, SIGNAL(valueChanged(int)), horizontalSlider_6, SLOT(setValue(int)));
        QObject::connect(spinBox_9, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));
        QObject::connect(spinBox_10, SIGNAL(valueChanged(int)), horizontalSlider_10, SLOT(setValue(int)));
        QObject::connect(spinBox_11, SIGNAL(valueChanged(int)), horizontalSlider_11, SLOT(setValue(int)));
        QObject::connect(spinBox_12, SIGNAL(valueChanged(int)), horizontalSlider_12, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_12, SIGNAL(valueChanged(int)), spinBox_12, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "Schema A", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Overall Score", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Schema B", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "HW 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "HW 2", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "HW 3", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "HW 4", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "HW 5", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "HW 6", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "HW 7", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "HW 8", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "HW 9", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Midterm 1", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Midterm 2", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Final Exam", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Calculate", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "PIC 10B", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PIC 10C", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("MainWindow", "Course", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Grade Calculator", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
