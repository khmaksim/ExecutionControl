/****************************************************************************
** Form interface generated from reading ui file 'removeplandialogbase.ui'
**
** Created: Пт 4. мар 18:06:35 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef REMOVEPLANDIALOGBASE_H
#define REMOVEPLANDIALOGBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QGroupBox;
class QTable;

class RemovePlanDialogBase : public QDialog
{
    Q_OBJECT

public:
    RemovePlanDialogBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~RemovePlanDialogBase();

    QPushButton* removeButton;
    QPushButton* cancelButton;
    QGroupBox* groupBox3;
    QTable* planTable;
    QPushButton* resetAllButton;
    QPushButton* selectAllButton;

protected:
    QGridLayout* RemovePlanDialogBaseLayout;
    QSpacerItem* spacer10;
    QGridLayout* groupBox3Layout;
    QSpacerItem* spacer14;

protected slots:
    virtual void languageChange();

};

#endif // REMOVEPLANDIALOGBASE_H
