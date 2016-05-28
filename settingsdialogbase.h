/****************************************************************************
** Form interface generated from reading ui file 'settingsdialogbase.ui'
**
** Created: Пт 4. мар 18:06:30 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SETTINGSDIALOGBASE_H
#define SETTINGSDIALOGBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QGroupBox;
class QLabel;
class QLineEdit;

class SettingsDialogBase : public QDialog
{
    Q_OBJECT

public:
    SettingsDialogBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SettingsDialogBase();

    QPushButton* cancelButton;
    QPushButton* saveButton;
    QGroupBox* groupBox1;
    QLabel* textLabel2_2;
    QLabel* textLabel2;
    QLabel* textLabel2_3;
    QLineEdit* hostNameLineEdit;
    QLineEdit* userNameLineEdit;
    QLineEdit* passwordLineEdit;

protected:
    QGridLayout* SettingsDialogBaseLayout;
    QSpacerItem* spacer1;
    QGridLayout* groupBox1Layout;
    QSpacerItem* spacer31;
    QSpacerItem* spacer3;

protected slots:
    virtual void languageChange();

};

#endif // SETTINGSDIALOGBASE_H
