/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vrwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    VRWidget *widgetVR;
    QVBoxLayout *verticalLayout;
    QPushButton *animationButton;
    QFrame *line_2;
    QLabel *label_2;
    QDial *fov;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *NouveauCube;
    QFormLayout *formLayout;
    QCheckBox *checkBox;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelX;
    QDoubleSpinBox *valeurX;
    QLabel *labelLacet;
    QDoubleSpinBox *valeurLacet;
    QGroupBox *horizontalGroupBox1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelY;
    QDoubleSpinBox *valeurY;
    QLabel *labelRoulis;
    QDoubleSpinBox *valeurRoulis;
    QGroupBox *horizontalGroupBox2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelZ;
    QDoubleSpinBox *valeurZ;
    QLabel *labelTangage;
    QDoubleSpinBox *valeurTangage;
    QComboBox *comboCorps;
    QPushButton *boutonCreeCube;
    QFrame *line_3;
    QGroupBox *formGroupBox;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QGroupBox *horizontalGroupBox3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *xLight;
    QDoubleSpinBox *yLight;
    QDoubleSpinBox *zLight;
    QPushButton *ambientButton;
    QPushButton *diffuseButton;
    QPushButton *specularButton;
    QLabel *label_4;
    QSlider *specCoeff;
    QFrame *line;
    QLabel *image;
    QCheckBox *checkBox_2;
    QPushButton *takePicture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 905);
        MainWindow->setMinimumSize(QSize(900, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widgetVR = new VRWidget(centralwidget);
        widgetVR->setObjectName("widgetVR");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetVR->sizePolicy().hasHeightForWidth());
        widgetVR->setSizePolicy(sizePolicy);
        widgetVR->setMinimumSize(QSize(600, 600));

        horizontalLayout->addWidget(widgetVR);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        animationButton = new QPushButton(centralwidget);
        animationButton->setObjectName("animationButton");
        animationButton->setMaximumSize(QSize(350, 16777215));
        animationButton->setCheckable(true);

        verticalLayout->addWidget(animationButton);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setMaximumSize(QSize(350, 16777215));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(350, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        fov = new QDial(centralwidget);
        fov->setObjectName("fov");
        fov->setMaximumSize(QSize(350, 16777215));
        fov->setMinimum(10);
        fov->setMaximum(120);
        fov->setSingleStep(5);
        fov->setValue(45);
        fov->setNotchesVisible(true);

        verticalLayout->addWidget(fov);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(350, 16777215));

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMaximumSize(QSize(350, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 268, 733));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        NouveauCube = new QGroupBox(scrollAreaWidgetContents_2);
        NouveauCube->setObjectName("NouveauCube");
        formLayout = new QFormLayout(NouveauCube);
        formLayout->setObjectName("formLayout");
        checkBox = new QCheckBox(NouveauCube);
        checkBox->setObjectName("checkBox");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, checkBox);

        horizontalGroupBox = new QGroupBox(NouveauCube);
        horizontalGroupBox->setObjectName("horizontalGroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalGroupBox->sizePolicy().hasHeightForWidth());
        horizontalGroupBox->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelX = new QLabel(horizontalGroupBox);
        labelX->setObjectName("labelX");

        horizontalLayout_5->addWidget(labelX);

        valeurX = new QDoubleSpinBox(horizontalGroupBox);
        valeurX->setObjectName("valeurX");

        horizontalLayout_5->addWidget(valeurX);

        labelLacet = new QLabel(horizontalGroupBox);
        labelLacet->setObjectName("labelLacet");

        horizontalLayout_5->addWidget(labelLacet);

        valeurLacet = new QDoubleSpinBox(horizontalGroupBox);
        valeurLacet->setObjectName("valeurLacet");

        horizontalLayout_5->addWidget(valeurLacet);


        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, horizontalGroupBox);

        horizontalGroupBox1 = new QGroupBox(NouveauCube);
        horizontalGroupBox1->setObjectName("horizontalGroupBox1");
        horizontalLayout_6 = new QHBoxLayout(horizontalGroupBox1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelY = new QLabel(horizontalGroupBox1);
        labelY->setObjectName("labelY");

        horizontalLayout_6->addWidget(labelY);

        valeurY = new QDoubleSpinBox(horizontalGroupBox1);
        valeurY->setObjectName("valeurY");

        horizontalLayout_6->addWidget(valeurY);

        labelRoulis = new QLabel(horizontalGroupBox1);
        labelRoulis->setObjectName("labelRoulis");

        horizontalLayout_6->addWidget(labelRoulis);

        valeurRoulis = new QDoubleSpinBox(horizontalGroupBox1);
        valeurRoulis->setObjectName("valeurRoulis");

        horizontalLayout_6->addWidget(valeurRoulis);


        formLayout->setWidget(2, QFormLayout::ItemRole::SpanningRole, horizontalGroupBox1);

        horizontalGroupBox2 = new QGroupBox(NouveauCube);
        horizontalGroupBox2->setObjectName("horizontalGroupBox2");
        horizontalLayout_7 = new QHBoxLayout(horizontalGroupBox2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        labelZ = new QLabel(horizontalGroupBox2);
        labelZ->setObjectName("labelZ");

        horizontalLayout_7->addWidget(labelZ);

        valeurZ = new QDoubleSpinBox(horizontalGroupBox2);
        valeurZ->setObjectName("valeurZ");

        horizontalLayout_7->addWidget(valeurZ);

        labelTangage = new QLabel(horizontalGroupBox2);
        labelTangage->setObjectName("labelTangage");

        horizontalLayout_7->addWidget(labelTangage);

        valeurTangage = new QDoubleSpinBox(horizontalGroupBox2);
        valeurTangage->setObjectName("valeurTangage");

        horizontalLayout_7->addWidget(valeurTangage);


        formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, horizontalGroupBox2);

        comboCorps = new QComboBox(NouveauCube);
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->addItem(QString());
        comboCorps->setObjectName("comboCorps");

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, comboCorps);

        boutonCreeCube = new QPushButton(NouveauCube);
        boutonCreeCube->setObjectName("boutonCreeCube");

        formLayout->setWidget(5, QFormLayout::ItemRole::SpanningRole, boutonCreeCube);


        verticalLayout_3->addWidget(NouveauCube);

        line_3 = new QFrame(scrollAreaWidgetContents_2);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_3);

        formGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setMinimumSize(QSize(0, 270));
        formGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"border: 1px solid grey;\n"
"color : rgb(255,255,255);\n"
"border-radius: 5px;"));
        verticalLayout_2 = new QVBoxLayout(formGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton = new QPushButton(formGroupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(150,150,150);\n"
"border: 1px solid black;\n"
"border-radius: 5px;"));
        pushButton->setCheckable(true);

        verticalLayout_2->addWidget(pushButton);

        horizontalGroupBox3 = new QGroupBox(formGroupBox);
        horizontalGroupBox3->setObjectName("horizontalGroupBox3");
        horizontalGroupBox3->setMinimumSize(QSize(0, 50));
        horizontalLayout_3 = new QHBoxLayout(horizontalGroupBox3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        xLight = new QDoubleSpinBox(horizontalGroupBox3);
        xLight->setObjectName("xLight");
        xLight->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(100,100,100);\n"
"border: 1px solid black;\n"
"border-radius: 5px;"));
        xLight->setMinimum(-100.000000000000000);
        xLight->setMaximum(100.000000000000000);
        xLight->setSingleStep(1.000000000000000);
        xLight->setValue(10.000000000000000);

        horizontalLayout_3->addWidget(xLight);

        yLight = new QDoubleSpinBox(horizontalGroupBox3);
        yLight->setObjectName("yLight");
        yLight->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(100,100,100);\n"
"border: 1px solid black;\n"
"border-radius: 5px;"));
        yLight->setMinimum(-100.000000000000000);
        yLight->setMaximum(100.000000000000000);

        horizontalLayout_3->addWidget(yLight);

        zLight = new QDoubleSpinBox(horizontalGroupBox3);
        zLight->setObjectName("zLight");
        zLight->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(100,100,100);\n"
"border: 1px solid black;\n"
"border-radius: 5px;"));
        zLight->setMinimum(-100.000000000000000);
        zLight->setMaximum(100.000000000000000);
        zLight->setValue(10.000000000000000);

        horizontalLayout_3->addWidget(zLight);


        verticalLayout_2->addWidget(horizontalGroupBox3);

        ambientButton = new QPushButton(formGroupBox);
        ambientButton->setObjectName("ambientButton");
        ambientButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255,255,255);\n"
"border: 1px solid black;\n"
"color: rgb(0,0,0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(ambientButton);

        diffuseButton = new QPushButton(formGroupBox);
        diffuseButton->setObjectName("diffuseButton");
        diffuseButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255,255, 255);\n"
"border: 1px solid black;\n"
"color: rgb(0,0,0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(diffuseButton);

        specularButton = new QPushButton(formGroupBox);
        specularButton->setObjectName("specularButton");
        specularButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255,255,255);\n"
"border: 1px solid black;\n"
"color: rgb(0,0,0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(specularButton);

        label_4 = new QLabel(formGroupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_4);

        specCoeff = new QSlider(formGroupBox);
        specCoeff->setObjectName("specCoeff");
        specCoeff->setValue(20);
        specCoeff->setOrientation(Qt::Orientation::Horizontal);
        specCoeff->setTickPosition(QSlider::TickPosition::TicksBelow);

        verticalLayout_2->addWidget(specCoeff);


        verticalLayout_3->addWidget(formGroupBox);

        line = new QFrame(scrollAreaWidgetContents_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        image = new QLabel(scrollAreaWidgetContents_2);
        image->setObjectName("image");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy2);
        image->setMinimumSize(QSize(130, 150));
        image->setPixmap(QPixmap(QString::fromUtf8(":/textures/wood.png")));
        image->setScaledContents(true);

        verticalLayout_3->addWidget(image);

        checkBox_2 = new QCheckBox(scrollAreaWidgetContents_2);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_3->addWidget(checkBox_2);

        takePicture = new QPushButton(scrollAreaWidgetContents_2);
        takePicture->setObjectName("takePicture");

        verticalLayout_3->addWidget(takePicture);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(animationButton, &QPushButton::clicked, widgetVR, qOverload<>(&VRWidget::startAnimation));
        QObject::connect(fov, SIGNAL(valueChanged(int)), widgetVR, SLOT(changeFov(int)));
        QObject::connect(boutonCreeCube, SIGNAL(clicked()), MainWindow, SLOT(createBody()));
        QObject::connect(checkBox, SIGNAL(clicked()), MainWindow, SLOT(setAleatoire()));
        QObject::connect(ambientButton, SIGNAL(clicked()), MainWindow, SLOT(changeAmbientLight()));
        QObject::connect(diffuseButton, SIGNAL(clicked()), MainWindow, SLOT(changeDiffuseLight()));
        QObject::connect(specularButton, SIGNAL(clicked()), MainWindow, SLOT(changeSpecularLight()));
        QObject::connect(xLight, SIGNAL(valueChanged(double)), widgetVR, SLOT(changeXLight(double)));
        QObject::connect(yLight, SIGNAL(valueChanged(double)), widgetVR, SLOT(changeYLight(double)));
        QObject::connect(zLight, SIGNAL(valueChanged(double)), widgetVR, SLOT(changeZLight(double)));
        QObject::connect(specCoeff, SIGNAL(valueChanged(int)), widgetVR, SLOT(changeSpecCoeff(int)));
        QObject::connect(pushButton, &QPushButton::clicked, widgetVR, qOverload<>(&VRWidget::startAnimationLight));
        QObject::connect(takePicture, SIGNAL(clicked()), MainWindow, SLOT(takePicture()));
        QObject::connect(checkBox_2, SIGNAL(clicked()), MainWindow, SLOT(setSaving()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        animationButton->setText(QCoreApplication::translate("MainWindow", "Animation", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ouverture focale", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Field of view", nullptr));
        NouveauCube->setTitle(QCoreApplication::translate("MainWindow", "Nouveau corps", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "placement al\303\251atoire", nullptr));
        labelX->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        labelLacet->setText(QCoreApplication::translate("MainWindow", "lacet", nullptr));
        labelY->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        labelRoulis->setText(QCoreApplication::translate("MainWindow", "roulis", nullptr));
        labelZ->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        labelTangage->setText(QCoreApplication::translate("MainWindow", "tangage", nullptr));
        comboCorps->setItemText(0, QCoreApplication::translate("MainWindow", "Cube", nullptr));
        comboCorps->setItemText(1, QCoreApplication::translate("MainWindow", "Cube Speculaire", nullptr));
        comboCorps->setItemText(2, QCoreApplication::translate("MainWindow", "Tore Speculaire", nullptr));
        comboCorps->setItemText(3, QCoreApplication::translate("MainWindow", "Sphere Speculaire", nullptr));
        comboCorps->setItemText(4, QCoreApplication::translate("MainWindow", "D\303\251", nullptr));
        comboCorps->setItemText(5, QCoreApplication::translate("MainWindow", "Cube textur\303\251", nullptr));
        comboCorps->setItemText(6, QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        comboCorps->setItemText(7, QCoreApplication::translate("MainWindow", "Planete", nullptr));
        comboCorps->setItemText(8, QCoreApplication::translate("MainWindow", "Tore", nullptr));
        comboCorps->setItemText(9, QCoreApplication::translate("MainWindow", "Plan", nullptr));

        boutonCreeCube->setText(QCoreApplication::translate("MainWindow", "Cr\303\251er ", nullptr));
        formGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Source lumineuse", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "animation", nullptr));
        ambientButton->setText(QCoreApplication::translate("MainWindow", "Couleur ambiante", nullptr));
        diffuseButton->setText(QCoreApplication::translate("MainWindow", "Couleur diffuse", nullptr));
        specularButton->setText(QCoreApplication::translate("MainWindow", "Couleur speculaire", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Coefficient de r\303\251flection sp\303\251culaire", nullptr));
        image->setText(QString());
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Save Picture ", nullptr));
        takePicture->setText(QCoreApplication::translate("MainWindow", "Take a picture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
