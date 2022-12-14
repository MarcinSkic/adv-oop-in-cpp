//
// Created by marcinskic on 11/29/22.
//

#ifndef EX3_WINDOW_H
#define EX3_WINDOW_H

#include <QDebug>
#include <QWidget>
#include <QPushButton>
#include <QWidget>
#include <QTextBrowser>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QObject>
#include <QComboBox>
#include <QCheckBox>

#include <QString>
#include <QVector>
#include <QPair>
#include <QMap>

#include <sstream>
#include <iomanip>

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QWidget {
Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);

    ~Window() override;

private slots:
    void addCountry();
    void deleteCountry();
    void updateDisplay();
    void updateDisplay(int index);
private:

    void sortVector(QVector<QPair<QString,int>> &vector);
    void showFull();
    void showOnlyCountries();
    QMap<QString,int> countries;

    //Tworzenie państwa
    QPushButton* addCountryBtn;
    QLineEdit* countryName;
    QSpinBox* populationSize;

    //Usuwanie państa
    QLineEdit* countryToDelete;
    QPushButton* deleteCountryBtn;

    //Wyświetlanie
    QTextBrowser* display;
    QComboBox* whatToShow;
    QLabel* whatToShowLbl;

    //Sortowanie
    QLabel* sortLabel;
    QComboBox* sortType;

    //Zakres
    QLabel* rangeLbl;
    QCheckBox* doRange;
    QSpinBox* fromSB;
    QLabel* toLbl;
    QSpinBox* toSB;

};


#endif //EX3_WINDOW_H
