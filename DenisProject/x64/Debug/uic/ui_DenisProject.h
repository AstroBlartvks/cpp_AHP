/********************************************************************************
** Form generated from reading UI file 'DenisProject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENISPROJECT_H
#define UI_DENISPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_DenisProjectClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_9;
    QFrame *frame_16;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QLabel *label_18;
    QLabel *label_17;
    QFrame *line_3;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame_11;
    QFrame *frame_17;
    QPushButton *pushButton_4;
    QPlainTextEdit *plainTextEdit;
    QFrame *line;
    QLabel *label;
    QTableWidget *tableWidget;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_12;
    QPushButton *pushButton_5;
    QLabel *label_20;
    QComboBox *comboBox;
    QPlainTextEdit *plainTextEdit_2;
    QFrame *line_2;
    QLabel *label_2;
    QTableWidget *tableWidget_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_3;
    QFrame *line_5;
    QPushButton *pushButton_3;
    QFrame *line_6;
    QTableWidget *tableWidget_3;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_7;
    QFrame *line_4;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QComboBox *comboBox_2;
    QCustomPlot *widget;

    void setupUi(QMainWindow *DenisProjectClass)
    {
        if (DenisProjectClass->objectName().isEmpty())
            DenisProjectClass->setObjectName(QString::fromUtf8("DenisProjectClass"));
        DenisProjectClass->resize(967, 542);
        DenisProjectClass->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        centralWidget = new QWidget(DenisProjectClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("/* \320\236\320\261\321\211\320\270\320\265 \321\201\321\202\320\270\320\273\320\270 */\n"
"QWidget {\n"
"    background-color: #ffffff; /* \320\261\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: #333333; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    selection-background-color: #0078d4; /* \321\206\320\262\320\265\321\202 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"QPushButton {\n"
"    background-color: #0078d4; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #0078d4; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px; /* \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    "
                        "color: #ffffff; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 5px 10px; /* \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #005a9e; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border: 2px solid #005a9e; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003d6a; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 2px solid #003d6a; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320"
                        "\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\274\320\265\321\202\320\276\320\272 */\n"
"QLabel {\n"
"    color: #0078d4; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \321\201\320\277\320\270\320\275\320\261\320\276\320\272\321\201\320\260 */\n"
"QSpinBox {\n"
"    background-color: #f0f0f0; /* \321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #0078d4; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px; /* \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    color: #0078d4; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 2p"
                        "x; /* \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 */\n"
"QTableWidget {\n"
"    alternate-background-color: #f0f0f0; /* \321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 \321\207\320\265\321\202\320\275\321\213\321\205 \321\201\321\202\321\200\320\276\320\272 */\n"
"    selection-background-color: #0078d4; /* \321\206\320\262\320\265\321\202 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"QPlainTextEdit {\n"
"    background-color: #f0f0f0; /* \321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #0078d4; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260"
                        " */\n"
"    color: #333333; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\272\320\276\320\274\320\261\320\276-\320\261\320\276\320\272\321\201\320\260 */\n"
"QComboBox {\n"
"    background-color: #f0f0f0; /* \321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #0078d4; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px; /* \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    color: #0078d4; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"\n"
"/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \320\274\320\275\320\276\320\263\320\276\321\201\321\202\321\200\320\276\321\207"
                        "\320\275\320\276\320\263\320\276 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"QPlainTextEdit {\n"
"    background-color: #f0f0f0; /* \321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #0078d4; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    color: #333333; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPlainTextEdit:hover {\n"
"    background-color: #e5e5e5; /* \321\201\320\265\321\200\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPlainTextEdit:focus {\n"
"    border: 2px solid #005a9e; /* \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 0, 0);
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(960, 40));
        frame->setMaximumSize(QSize(2000, 40));
        frame->setStyleSheet(QString::fromUtf8("/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\277\320\260\320\275\320\265\320\273\321\214\320\275\321\213\321\205 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"QPushButton {\n"
"    background-color: transparent; /* \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"    color: #0078d4; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 5px 10px; /* \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e5f1fb; /* \321\201\320\262\320\265\321\202\320\273\320\276-\320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"border: n"
                        "one; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #cde4f9; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_2->addWidget(pushButton_9);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(page);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(960, 0));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_2);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_9 = new QFrame(frame_2);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(200, 0));
        frame_9->setMaximumSize(QSize(200, 16777215));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_16 = new QFrame(frame_9);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setGeometry(QRect(0, 0, 200, 331));
        frame_16->setMinimumSize(QSize(200, 331));
        frame_16->setMaximumSize(QSize(16777215, 332));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame_16);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 260, 181, 40));
        pushButton_2->setMinimumSize(QSize(40, 0));
        pushButton_2->setMaximumSize(QSize(16777215, 40));
        spinBox = new QSpinBox(frame_16);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(10, 70, 181, 30));
        spinBox->setMaximumSize(QSize(16777215, 30));
        spinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox->setMinimum(3);
        spinBox->setMaximum(16);
        spinBox_2 = new QSpinBox(frame_16);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(10, 170, 181, 30));
        spinBox_2->setMaximumSize(QSize(16777215, 30));
        spinBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox_2->setMinimum(3);
        spinBox_2->setMaximum(16);
        pushButton = new QPushButton(frame_16);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 210, 181, 40));
        pushButton->setMinimumSize(QSize(40, 0));
        pushButton->setMaximumSize(QSize(16777215, 40));
        label_18 = new QLabel(frame_16);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 110, 181, 50));
        label_18->setMaximumSize(QSize(16777215, 50));
        label_18->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(frame_16);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 10, 181, 50));
        label_17->setMaximumSize(QSize(16777215, 50));
        label_17->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(frame_16);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 0, 10000, 4));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(frame_9);

        frame_10 = new QFrame(frame_2);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_10);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tableWidget_4 = new QTableWidget(frame_10);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->horizontalHeader()->setVisible(true);
        tableWidget_4->verticalHeader()->setVisible(true);

        verticalLayout_6->addWidget(tableWidget_4);


        horizontalLayout_6->addWidget(frame_10);


        verticalLayout->addWidget(frame_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 0, 0);
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(960, 40));
        frame_3->setMaximumSize(QSize(2000, 40));
        frame_3->setStyleSheet(QString::fromUtf8("/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\277\320\260\320\275\320\265\320\273\321\214\320\275\321\213\321\205 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"QPushButton {\n"
"    background-color: transparent; /* \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"    color: #0078d4; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 5px 10px; /* \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e5f1fb; /* \321\201\320\262\320\265\321\202\320\273\320\276-\320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"border: n"
                        "one; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #cde4f9; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(frame_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_3->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(frame_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_3->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(frame_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_3->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(frame_3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        horizontalLayout_3->addWidget(pushButton_13);


        verticalLayout_2->addWidget(frame_3);

        frame_6 = new QFrame(page_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMaximumSize(QSize(16777215, 16777215));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame_11 = new QFrame(frame_6);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setMinimumSize(QSize(200, 500));
        frame_11->setMaximumSize(QSize(200, 16777215));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        frame_17 = new QFrame(frame_11);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(0, 0, 200, 250));
        frame_17->setMinimumSize(QSize(200, 250));
        frame_17->setMaximumSize(QSize(16777215, 250));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_17);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 100, 181, 41));
        plainTextEdit = new QPlainTextEdit(frame_17);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 181, 81));
        plainTextEdit->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font-size: 14px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 85, 255);"));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setUndoRedoEnabled(true);
        plainTextEdit->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setBackgroundVisible(false);
        line = new QFrame(frame_17);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 10000, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(frame_17);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 150, 181, 51));
        label->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font-size: 12px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout_7->addWidget(frame_11);

        tableWidget = new QTableWidget(frame_6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_7->addWidget(tableWidget);


        verticalLayout_2->addWidget(frame_6);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 0, 0, 0);
        frame_4 = new QFrame(page_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(960, 40));
        frame_4->setMaximumSize(QSize(2000, 40));
        frame_4->setStyleSheet(QString::fromUtf8("/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\277\320\260\320\275\320\265\320\273\321\214\320\275\321\213\321\205 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"QPushButton {\n"
"    background-color: transparent; /* \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"    color: #0078d4; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 5px 10px; /* \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e5f1fb; /* \321\201\320\262\320\265\321\202\320\273\320\276-\320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"border: n"
                        "one; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #cde4f9; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(frame_4);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        horizontalLayout_4->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(frame_4);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        horizontalLayout_4->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(frame_4);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        horizontalLayout_4->addWidget(pushButton_20);

        pushButton_21 = new QPushButton(frame_4);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        horizontalLayout_4->addWidget(pushButton_21);


        verticalLayout_4->addWidget(frame_4);

        frame_7 = new QFrame(page_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMaximumSize(QSize(16777215, 16777215));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_7);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_12 = new QFrame(frame_7);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setMinimumSize(QSize(200, 500));
        frame_12->setMaximumSize(QSize(200, 16777215));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        pushButton_5 = new QPushButton(frame_12);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 280, 181, 41));
        label_20 = new QLabel(frame_12);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 10, 181, 51));
        label_20->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(frame_12);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 70, 181, 31));
        plainTextEdit_2 = new QPlainTextEdit(frame_12);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(10, 110, 181, 161));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font-size: 14px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 85, 255);"));
        plainTextEdit_2->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_2->setReadOnly(true);
        plainTextEdit_2->setBackgroundVisible(false);
        line_2 = new QFrame(frame_12);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 0, 10000, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame_12);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 330, 181, 51));
        label_2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font-size: 12px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout_8->addWidget(frame_12);

        tableWidget_2 = new QTableWidget(frame_7);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        horizontalLayout_8->addWidget(tableWidget_2);


        verticalLayout_4->addWidget(frame_7);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_5 = new QVBoxLayout(page_4);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 0, 0, 0);
        frame_5 = new QFrame(page_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(960, 40));
        frame_5->setMaximumSize(QSize(2000, 40));
        frame_5->setStyleSheet(QString::fromUtf8("/* \320\241\321\202\320\270\320\273\320\270 \320\264\320\273\321\217 \320\277\320\260\320\275\320\265\320\273\321\214\320\275\321\213\321\205 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"QPushButton {\n"
"    background-color: transparent; /* \320\277\321\200\320\276\320\267\321\200\320\260\321\207\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"    color: #0078d4; /* \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 5px 10px; /* \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e5f1fb; /* \321\201\320\262\320\265\321\202\320\273\320\276-\320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"border: n"
                        "one; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #cde4f9; /* \320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"border: none; /* \321\203\320\261\320\270\321\200\320\260\320\265\320\274 \320\263\321\200\320\260\320\275\320\270\321\206\321\203 */\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QPushButton(frame_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        horizontalLayout_5->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(frame_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        horizontalLayout_5->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(frame_5);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        horizontalLayout_5->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(frame_5);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        horizontalLayout_5->addWidget(pushButton_17);


        verticalLayout_5->addWidget(frame_5);

        frame_8 = new QFrame(page_4);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMaximumSize(QSize(16777215, 16777215));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_8);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_13 = new QFrame(frame_8);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setMinimumSize(QSize(300, 500));
        frame_13->setMaximumSize(QSize(300, 16777215));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_13);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        line_5 = new QFrame(frame_13);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        pushButton_3 = new QPushButton(frame_13);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(298, 40));
        pushButton_3->setMaximumSize(QSize(298, 40));

        verticalLayout_3->addWidget(pushButton_3);

        line_6 = new QFrame(frame_13);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_6);

        tableWidget_3 = new QTableWidget(frame_13);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGridStyle(Qt::DashLine);
        tableWidget_3->horizontalHeader()->setVisible(false);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(148);
        tableWidget_3->horizontalHeader()->setStretchLastSection(false);
        tableWidget_3->verticalHeader()->setVisible(false);
        tableWidget_3->verticalHeader()->setDefaultSectionSize(40);

        verticalLayout_3->addWidget(tableWidget_3);


        horizontalLayout_9->addWidget(frame_13);

        frame_15 = new QFrame(frame_8);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_15);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        line_4 = new QFrame(frame_15);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        frame_14 = new QFrame(frame_15);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setMinimumSize(QSize(661, 42));
        frame_14->setMaximumSize(QSize(16777215, 42));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_14);
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(frame_14);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(120, 35));
        label_22->setMaximumSize(QSize(120, 35));
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_22);

        comboBox_2 = new QComboBox(frame_14);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_10->addWidget(comboBox_2);


        verticalLayout_7->addWidget(frame_14);

        widget = new QCustomPlot(frame_15);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_7->addWidget(widget);


        horizontalLayout_9->addWidget(frame_15);


        verticalLayout_5->addWidget(frame_8);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);

        DenisProjectClass->setCentralWidget(centralWidget);

        retranslateUi(DenisProjectClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DenisProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *DenisProjectClass)
    {
        DenisProjectClass->setWindowTitle(QApplication::translate("DenisProjectClass", "\320\234\320\265\321\202\320\276\320\264 \320\260\320\275\320\260\320\273\320\270\320\267\320\260 \320\270\320\265\321\200\320\260\321\200\321\205\320\270\320\265\320\271", nullptr));
        pushButton_6->setText(QApplication::translate("DenisProjectClass", "\320\237\321\200\320\265\321\202\320\265\320\275\320\264\320\265\320\275\321\202\321\213", nullptr));
        pushButton_7->setText(QApplication::translate("DenisProjectClass", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 \320\277\320\260\321\200\320\275\321\213\321\205 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271", nullptr));
        pushButton_8->setText(QApplication::translate("DenisProjectClass", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262", nullptr));
        pushButton_9->setText(QApplication::translate("DenisProjectClass", "\320\230\321\202\320\276\320\263", nullptr));
        pushButton_2->setText(QApplication::translate("DenisProjectClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("DenisProjectClass", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_18->setText(QApplication::translate("DenisProjectClass", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\n"
"\320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262", nullptr));
        label_17->setText(QApplication::translate("DenisProjectClass", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\n"
"\320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262", nullptr));
        pushButton_10->setText(QApplication::translate("DenisProjectClass", "\320\237\321\200\320\265\321\202\320\265\320\275\320\264\320\265\320\275\321\202\321\213", nullptr));
        pushButton_11->setText(QApplication::translate("DenisProjectClass", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 \320\277\320\260\321\200\320\275\321\213\321\205 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271", nullptr));
        pushButton_12->setText(QApplication::translate("DenisProjectClass", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262", nullptr));
        pushButton_13->setText(QApplication::translate("DenisProjectClass", "\320\230\321\202\320\276\320\263", nullptr));
        pushButton_4->setText(QApplication::translate("DenisProjectClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("DenisProjectClass", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 \320\277\320\260\321\200\320\275\321\213\321\205 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271 - \321\215\321\202\320\260\320\277 \320\234\320\220\320\230 \321\201 \321\200\320\260\321\201\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\276\320\271 \320\277\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202\320\276\320\262 \321\201\321\200\320\265\320\264\320\270 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\265\320\262", nullptr));
        label->setText(QApplication::translate("DenisProjectClass", "\320\230\320\241: 0.0\n"
"\320\236\320\241: 0.0%\n"
"\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\277\320\276\320\264\321\205\320\276\320\264\320\270\321\202", nullptr));
        pushButton_18->setText(QApplication::translate("DenisProjectClass", "\320\237\321\200\320\265\321\202\320\265\320\275\320\264\320\265\320\275\321\202\321\213", nullptr));
        pushButton_19->setText(QApplication::translate("DenisProjectClass", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 \320\277\320\260\321\200\320\275\321\213\321\205 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271", nullptr));
        pushButton_20->setText(QApplication::translate("DenisProjectClass", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262", nullptr));
        pushButton_21->setText(QApplication::translate("DenisProjectClass", "\320\230\321\202\320\276\320\263", nullptr));
        pushButton_5->setText(QApplication::translate("DenisProjectClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_20->setText(QApplication::translate("DenisProjectClass", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271\n"
"\320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\271:", nullptr));
        plainTextEdit_2->setPlainText(QApplication::translate("DenisProjectClass", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262 - \320\277\320\276\320\276\321\207\320\265\321\200\320\265\320\264\320\275\320\276\320\265 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\262\321\201\320\265\321\205 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262 \320\277\320\276 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\321\213\320\274 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\321\217\320\274, \320\264\320\273\321\217 \320\262\321\213\321\217\320\262\320\273\320\265\320\275\320\270\321\217 \320\272\320\276\321\215\321\204\320\270\321\206\320\265\320\275\321\202\320\276\320\262 \320\262\320\273\320\270\321\217\320\275\320\270\321\217", nullptr));
        label_2->setText(QApplication::translate("DenisProjectClass", "\320\230\320\241: 0.0\n"
"\320\236\320\241: 0.0%\n"
"\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\277\320\276\320\264\321\205\320\276\320\264\320\270\321\202", nullptr));
        pushButton_14->setText(QApplication::translate("DenisProjectClass", "\320\237\321\200\320\265\321\202\320\265\320\275\320\264\320\265\320\275\321\202\321\213", nullptr));
        pushButton_15->setText(QApplication::translate("DenisProjectClass", "\320\234\320\260\321\202\321\200\320\270\321\206\320\260 \320\277\320\260\321\200\320\275\321\213\321\205 \321\201\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\271", nullptr));
        pushButton_16->setText(QApplication::translate("DenisProjectClass", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\260\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262", nullptr));
        pushButton_17->setText(QApplication::translate("DenisProjectClass", "\320\230\321\202\320\276\320\263", nullptr));
        pushButton_3->setText(QApplication::translate("DenisProjectClass", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\234\320\220\320\230:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DenisProjectClass", "\320\220\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DenisProjectClass", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_22->setText(QApplication::translate("DenisProjectClass", "\320\242\320\270\320\277 \320\263\321\200\320\260\321\204\320\270\320\272\320\260:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("DenisProjectClass", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DenisProjectClass: public Ui_DenisProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENISPROJECT_H
