/****************************************************************************
** Form interface generated from reading ui file 'newplandialogbase.ui'
**
** Created: Пт 4. мар 18:06:36 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NEWPLANDIALOGBASE_H
#define NEWPLANDIALOGBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QPushButton;
class QTextEdit;

class NewPlanDialogBase : public QDialog
{
    Q_OBJECT

public:
    NewPlanDialogBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~NewPlanDialogBase();

    QLabel* textLabel1;
    QPushButton* cancelButton;
    QPushButton* addButton;
    QTextEdit* namePlanTextEdit;

protected:
    QGridLayout* NewPlanDialogBaseLayout;
    QSpacerItem* spacer10;
    QSpacerItem* spacer2;

protected slots:
    virtual void languageChange();

};

#endif // NEWPLANDIALOGBASE_H
