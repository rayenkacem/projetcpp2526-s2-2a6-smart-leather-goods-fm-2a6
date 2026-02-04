/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_main;
    QFrame *frame_sidebar;
    QVBoxLayout *verticalLayout_sidebar;
    QLabel *label_logo;
    QPushButton *btn_ajouter;
    QPushButton *btn_modifier;
    QPushButton *btn_supprimer;
    QPushButton *btn_rechercher;
    QSpacerItem *vSpacer;
    QPushButton *btn_pdf;
    QPushButton *btn_stat;
    QTabWidget *tabWidget;
    QWidget *tab_matieres;
    QVBoxLayout *verticalLayout_mp;
    QHBoxLayout *hl_forms;
    QGroupBox *gb_caract;
    QFormLayout *fl_caract;
    QLabel *label;
    QLineEdit *le_code_mp;
    QLabel *label1;
    QComboBox *cb_cat;
    QLabel *label2;
    QComboBox *cb_etat;
    QLabel *label3;
    QLineEdit *le_coul;
    QLabel *label4;
    QComboBox *cb_qual;
    QGroupBox *gb_log;
    QFormLayout *fl_log;
    QLabel *label5;
    QLineEdit *le_lot;
    QLabel *label6;
    QHBoxLayout *hl_qte;
    QDoubleSpinBox *sb_qte;
    QComboBox *cb_unite;
    QLabel *label7;
    QHBoxLayout *hl_zone;
    QComboBox *cb_zone;
    QComboBox *cb_allee;
    QLabel *label_type_stock;
    QComboBox *cb_type_stock;
    QLabel *label8;
    QDateEdit *de_rec;
    QGroupBox *gb_iot;
    QHBoxLayout *hl_iot;
    QLabel *label9;
    QLabel *lbl_iot_temp;
    QLabel *lbl_iot_hum;
    QSpacerItem *hSpacer;
    QPushButton *btn_compare;
    QPushButton *btn_besoin;
    QTableWidget *tableMP;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1300, 850);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"/* STYLE GLOBAL */\n"
"QMainWindow, QWidget#centralwidget { background-color: #f4f1ea; font-family: \"Segoe UI\"; color: #4e342e; }\n"
"\n"
"/* BARRE LATERALE (Restauration du menu global) */\n"
"QFrame#frame_sidebar { background-color: #3e2723; min-width: 230px; border-right: 1px solid #281a17; }\n"
"QLabel#label_logo { color: #ffffff; font-weight: bold; font-size: 18px; padding: 10px; background-color: rgba(255,255,255,0.05); border-radius: 10px; }\n"
"QPushButton.sidebar_btn { text-align: left; padding: 12px 20px; border: none; background-color: transparent; color: #efebe9; border-radius: 20px; font-weight: 500; margin-bottom: 5px; }\n"
"QPushButton.sidebar_btn:hover { background-color: #5d4037; color: #ffffff; }\n"
"\n"
"/* ONGLETS ET CARTES */\n"
"QTabBar::tab { background: #d7ccc8; color: #5d4037; padding: 10px 25px; font-weight: bold; border-top-left-radius: 15px; border-top-right-radius: 15px; margin-right: 5px; }\n"
"QTabBar::tab:selected { background: #ffffff; color: #3e2723; border-bottom: 3px "
                        "solid #3e2723; }\n"
"QGroupBox { background-color: #ffffff; border: 1px solid #d7ccc8; border-radius: 15px; margin-top: 30px; font-weight: bold; color: #3e2723; padding: 20px; border-bottom: 3px solid #d7ccc8; }\n"
"\n"
"/* CHAMPS ET BOUTONS SPECIFIQUES */\n"
"QLineEdit, QComboBox, QDoubleSpinBox, QDateEdit { background-color: #fffdf9; border: 1px solid #bcaaa4; border-radius: 15px; padding: 6px 15px; }\n"
"QPushButton#btn_compare { background-color: #00838f; color: white; border-radius: 20px; padding: 10px 25px; font-weight: bold; }\n"
"QPushButton#btn_besoin { background-color: #f9a825; color: white; border-radius: 20px; padding: 10px 25px; font-weight: bold; }\n"
"QLabel#lbl_iot_temp, QLabel#lbl_iot_hum { background-color: #3e2723; color: #fff176; border-radius: 15px; padding: 10px; font-family: \"Consolas\", monospace; font-weight: bold; border: 2px solid #5d4037; }\n"
"\n"
"/* TABLEAUX */\n"
"QHeaderView::section { background-color: #8d6e63; color: white; padding: 12px; font-weight: bold; border: none; }\n"
""
                        "   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_main = new QHBoxLayout(centralwidget);
        horizontalLayout_main->setSpacing(0);
        horizontalLayout_main->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_main->setObjectName("horizontalLayout_main");
        frame_sidebar = new QFrame(centralwidget);
        frame_sidebar->setObjectName("frame_sidebar");
        verticalLayout_sidebar = new QVBoxLayout(frame_sidebar);
        verticalLayout_sidebar->setSpacing(8);
        verticalLayout_sidebar->setContentsMargins(20, 20, 20, 20);
        verticalLayout_sidebar->setObjectName("verticalLayout_sidebar");
        label_logo = new QLabel(frame_sidebar);
        label_logo->setObjectName("label_logo");
        label_logo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_sidebar->addWidget(label_logo);

        btn_ajouter = new QPushButton(frame_sidebar);
        btn_ajouter->setObjectName("btn_ajouter");

        verticalLayout_sidebar->addWidget(btn_ajouter);

        btn_modifier = new QPushButton(frame_sidebar);
        btn_modifier->setObjectName("btn_modifier");

        verticalLayout_sidebar->addWidget(btn_modifier);

        btn_supprimer = new QPushButton(frame_sidebar);
        btn_supprimer->setObjectName("btn_supprimer");

        verticalLayout_sidebar->addWidget(btn_supprimer);

        btn_rechercher = new QPushButton(frame_sidebar);
        btn_rechercher->setObjectName("btn_rechercher");

        verticalLayout_sidebar->addWidget(btn_rechercher);

        vSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_sidebar->addItem(vSpacer);

        btn_pdf = new QPushButton(frame_sidebar);
        btn_pdf->setObjectName("btn_pdf");

        verticalLayout_sidebar->addWidget(btn_pdf);

        btn_stat = new QPushButton(frame_sidebar);
        btn_stat->setObjectName("btn_stat");

        verticalLayout_sidebar->addWidget(btn_stat);


        horizontalLayout_main->addWidget(frame_sidebar);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_matieres = new QWidget();
        tab_matieres->setObjectName("tab_matieres");
        verticalLayout_mp = new QVBoxLayout(tab_matieres);
        verticalLayout_mp->setSpacing(15);
        verticalLayout_mp->setContentsMargins(30, 30, 30, 30);
        verticalLayout_mp->setObjectName("verticalLayout_mp");
        hl_forms = new QHBoxLayout();
        hl_forms->setObjectName("hl_forms");
        gb_caract = new QGroupBox(tab_matieres);
        gb_caract->setObjectName("gb_caract");
        fl_caract = new QFormLayout(gb_caract);
        fl_caract->setObjectName("fl_caract");
        fl_caract->setVerticalSpacing(12);
        label = new QLabel(gb_caract);
        label->setObjectName("label");

        fl_caract->setWidget(0, QFormLayout::LabelRole, label);

        le_code_mp = new QLineEdit(gb_caract);
        le_code_mp->setObjectName("le_code_mp");

        fl_caract->setWidget(0, QFormLayout::FieldRole, le_code_mp);

        label1 = new QLabel(gb_caract);
        label1->setObjectName("label1");

        fl_caract->setWidget(1, QFormLayout::LabelRole, label1);

        cb_cat = new QComboBox(gb_caract);
        cb_cat->addItem(QString());
        cb_cat->setObjectName("cb_cat");

        fl_caract->setWidget(1, QFormLayout::FieldRole, cb_cat);

        label2 = new QLabel(gb_caract);
        label2->setObjectName("label2");

        fl_caract->setWidget(2, QFormLayout::LabelRole, label2);

        cb_etat = new QComboBox(gb_caract);
        cb_etat->addItem(QString());
        cb_etat->setObjectName("cb_etat");

        fl_caract->setWidget(2, QFormLayout::FieldRole, cb_etat);

        label3 = new QLabel(gb_caract);
        label3->setObjectName("label3");

        fl_caract->setWidget(3, QFormLayout::LabelRole, label3);

        le_coul = new QLineEdit(gb_caract);
        le_coul->setObjectName("le_coul");

        fl_caract->setWidget(3, QFormLayout::FieldRole, le_coul);

        label4 = new QLabel(gb_caract);
        label4->setObjectName("label4");

        fl_caract->setWidget(4, QFormLayout::LabelRole, label4);

        cb_qual = new QComboBox(gb_caract);
        cb_qual->addItem(QString());
        cb_qual->setObjectName("cb_qual");

        fl_caract->setWidget(4, QFormLayout::FieldRole, cb_qual);


        hl_forms->addWidget(gb_caract);

        gb_log = new QGroupBox(tab_matieres);
        gb_log->setObjectName("gb_log");
        fl_log = new QFormLayout(gb_log);
        fl_log->setObjectName("fl_log");
        fl_log->setVerticalSpacing(12);
        label5 = new QLabel(gb_log);
        label5->setObjectName("label5");

        fl_log->setWidget(0, QFormLayout::LabelRole, label5);

        le_lot = new QLineEdit(gb_log);
        le_lot->setObjectName("le_lot");

        fl_log->setWidget(0, QFormLayout::FieldRole, le_lot);

        label6 = new QLabel(gb_log);
        label6->setObjectName("label6");

        fl_log->setWidget(1, QFormLayout::LabelRole, label6);

        hl_qte = new QHBoxLayout();
        hl_qte->setObjectName("hl_qte");
        sb_qte = new QDoubleSpinBox(gb_log);
        sb_qte->setObjectName("sb_qte");

        hl_qte->addWidget(sb_qte);

        cb_unite = new QComboBox(gb_log);
        cb_unite->addItem(QString());
        cb_unite->setObjectName("cb_unite");

        hl_qte->addWidget(cb_unite);


        fl_log->setLayout(1, QFormLayout::FieldRole, hl_qte);

        label7 = new QLabel(gb_log);
        label7->setObjectName("label7");

        fl_log->setWidget(2, QFormLayout::LabelRole, label7);

        hl_zone = new QHBoxLayout();
        hl_zone->setObjectName("hl_zone");
        cb_zone = new QComboBox(gb_log);
        cb_zone->addItem(QString());
        cb_zone->setObjectName("cb_zone");

        hl_zone->addWidget(cb_zone);

        cb_allee = new QComboBox(gb_log);
        cb_allee->addItem(QString());
        cb_allee->setObjectName("cb_allee");

        hl_zone->addWidget(cb_allee);


        fl_log->setLayout(2, QFormLayout::FieldRole, hl_zone);

        label_type_stock = new QLabel(gb_log);
        label_type_stock->setObjectName("label_type_stock");

        fl_log->setWidget(3, QFormLayout::LabelRole, label_type_stock);

        cb_type_stock = new QComboBox(gb_log);
        cb_type_stock->addItem(QString());
        cb_type_stock->addItem(QString());
        cb_type_stock->addItem(QString());
        cb_type_stock->addItem(QString());
        cb_type_stock->setObjectName("cb_type_stock");

        fl_log->setWidget(3, QFormLayout::FieldRole, cb_type_stock);

        label8 = new QLabel(gb_log);
        label8->setObjectName("label8");

        fl_log->setWidget(4, QFormLayout::LabelRole, label8);

        de_rec = new QDateEdit(gb_log);
        de_rec->setObjectName("de_rec");
        de_rec->setCalendarPopup(true);

        fl_log->setWidget(4, QFormLayout::FieldRole, de_rec);


        hl_forms->addWidget(gb_log);


        verticalLayout_mp->addLayout(hl_forms);

        gb_iot = new QGroupBox(tab_matieres);
        gb_iot->setObjectName("gb_iot");
        hl_iot = new QHBoxLayout(gb_iot);
        hl_iot->setObjectName("hl_iot");
        label9 = new QLabel(gb_iot);
        label9->setObjectName("label9");

        hl_iot->addWidget(label9);

        lbl_iot_temp = new QLabel(gb_iot);
        lbl_iot_temp->setObjectName("lbl_iot_temp");

        hl_iot->addWidget(lbl_iot_temp);

        lbl_iot_hum = new QLabel(gb_iot);
        lbl_iot_hum->setObjectName("lbl_iot_hum");

        hl_iot->addWidget(lbl_iot_hum);

        hSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hl_iot->addItem(hSpacer);

        btn_compare = new QPushButton(gb_iot);
        btn_compare->setObjectName("btn_compare");

        hl_iot->addWidget(btn_compare);

        btn_besoin = new QPushButton(gb_iot);
        btn_besoin->setObjectName("btn_besoin");

        hl_iot->addWidget(btn_besoin);


        verticalLayout_mp->addWidget(gb_iot);

        tableMP = new QTableWidget(tab_matieres);
        if (tableMP->columnCount() < 8)
            tableMP->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableMP->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableMP->setObjectName("tableMP");
        tableMP->setAlternatingRowColors(true);

        verticalLayout_mp->addWidget(tableMP);

        tabWidget->addTab(tab_matieres, QString());

        horizontalLayout_main->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart Leather Factory - Mati\303\250res Premi\303\250res", nullptr));
        label_logo->setText(QCoreApplication::translate("MainWindow", "\360\237\221\234 FIL D'OR", nullptr));
        btn_ajouter->setText(QCoreApplication::translate("MainWindow", "\342\227\217   Ajouter", nullptr));
        btn_ajouter->setProperty("class", QVariant(QCoreApplication::translate("MainWindow", "sidebar_btn", nullptr)));
        btn_modifier->setText(QCoreApplication::translate("MainWindow", "\342\227\217   Modifier", nullptr));
        btn_modifier->setProperty("class", QVariant(QCoreApplication::translate("MainWindow", "sidebar_btn", nullptr)));
        btn_supprimer->setText(QCoreApplication::translate("MainWindow", "\342\227\217   Supprimer", nullptr));
        btn_supprimer->setProperty("class", QVariant(QCoreApplication::translate("MainWindow", "sidebar_btn", nullptr)));
        btn_rechercher->setText(QCoreApplication::translate("MainWindow", "\342\227\217   Rechercher", nullptr));
        btn_rechercher->setProperty("class", QVariant(QCoreApplication::translate("MainWindow", "sidebar_btn", nullptr)));
        btn_pdf->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204   PDF / Bon Commande", nullptr));
        btn_pdf->setProperty("class", QVariant(QCoreApplication::translate("MainWindow", "sidebar_btn", nullptr)));
        btn_stat->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212   Statistiques", nullptr));
        btn_stat->setProperty("class", QVariant(QCoreApplication::translate("MainWindow", "sidebar_btn", nullptr)));
        gb_caract->setTitle(QCoreApplication::translate("MainWindow", "Caract\303\251ristiques Mati\303\250re", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Code MP :", nullptr));
        le_code_mp->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: CUIR-V-001", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie :", nullptr));
        cb_cat->setItemText(0, QCoreApplication::translate("MainWindow", "Cuir", nullptr));

        label2->setText(QCoreApplication::translate("MainWindow", "\303\211tat :", nullptr));
        cb_etat->setItemText(0, QCoreApplication::translate("MainWindow", "BRUT", nullptr));

        label3->setText(QCoreApplication::translate("MainWindow", "Couleur :", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "Qualit\303\251 :", nullptr));
        cb_qual->setItemText(0, QCoreApplication::translate("MainWindow", "A (Premium)", nullptr));

        gb_log->setTitle(QCoreApplication::translate("MainWindow", "Logistique Stockage", nullptr));
        label5->setText(QCoreApplication::translate("MainWindow", "Num Lot :", nullptr));
        label6->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 :", nullptr));
        cb_unite->setItemText(0, QCoreApplication::translate("MainWindow", "M2", nullptr));

        label7->setText(QCoreApplication::translate("MainWindow", "Zone :", nullptr));
        cb_zone->setItemText(0, QCoreApplication::translate("MainWindow", "CUIR_BRUT", nullptr));

        cb_allee->setItemText(0, QCoreApplication::translate("MainWindow", "All\303\251e A", nullptr));

        label_type_stock->setText(QCoreApplication::translate("MainWindow", "Type Stockage :", nullptr));
        cb_type_stock->setItemText(0, QCoreApplication::translate("MainWindow", "Standard", nullptr));
        cb_type_stock->setItemText(1, QCoreApplication::translate("MainWindow", "R\303\251frig\303\251r\303\251", nullptr));
        cb_type_stock->setItemText(2, QCoreApplication::translate("MainWindow", "Temp\303\251r\303\251", nullptr));
        cb_type_stock->setItemText(3, QCoreApplication::translate("MainWindow", "Hygrom\303\251trie contr\303\264l\303\251e", nullptr));

        label8->setText(QCoreApplication::translate("MainWindow", "R\303\251ception :", nullptr));
        gb_iot->setTitle(QCoreApplication::translate("MainWindow", "Qualit\303\251 Cuir (IoT) Aide \303\240 l'Achat", nullptr));
        label9->setText(QCoreApplication::translate("MainWindow", "\360\237\223\241 Capteurs Arduino :", nullptr));
        lbl_iot_temp->setText(QCoreApplication::translate("MainWindow", "\360\237\214\241\357\270\217 22\302\260C (OK)", nullptr));
        lbl_iot_hum->setText(QCoreApplication::translate("MainWindow", "\360\237\222\247 45% (SEC)", nullptr));
        btn_compare->setText(QCoreApplication::translate("MainWindow", "\342\232\226\357\270\217 Comparer Fournisseurs", nullptr));
        btn_besoin->setText(QCoreApplication::translate("MainWindow", "\360\237\223\217 Calculer Besoin Surface", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableMP->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Code MP", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableMP->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableMP->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\303\211tat", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableMP->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Qualit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableMP->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableMP->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Type Stockage", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableMP->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Zone", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableMP->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Date R\303\251ception", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_matieres), QCoreApplication::translate("MainWindow", "Mati\303\250res Premi\303\250res", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
