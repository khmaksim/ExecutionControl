/****************************************************************************
** Form interface generated from reading ui file 'openplandialogbase.ui'
**
** Created: Пт 4. мар 18:06:32 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef OPENPLANDIALOGBASE_H
#define OPENPLANDIALOGBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QGroupBox;
class QTable;

class OpenPlanDialogBase : public QDialog
{
    Q_OBJECT

public:
    OpenPlanDialogBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~OpenPlanDialogBase();

    QPushButton* cancelButton;
    QPushButton* openButton;
    QGroupBox* groupBox3;
    QTable* planTable;
    QPushButton* resetAllButton;
    QPushButton* selectAllButton;

protected:
    QGridLayout* OpenPlanDialogBaseLayout;
    QSpacerItem* spacer10;
    QGridLayout* groupBox3Layout;
    QSpacerItem* spacer14;

protected slots:
    virtual void languageChange();

};

#endif // OPENPLANDIALOGBASE_H
