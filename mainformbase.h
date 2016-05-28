/****************************************************************************
** Form interface generated from reading ui file 'mainformbase.ui'
**
** Created: Пт 4. мар 18:06:37 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MAINFORMBASE_H
#define MAINFORMBASE_H

#include <qvariant.h>
#include <qmainwindow.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class QTable;

class MainFormBase : public QMainWindow
{
    Q_OBJECT

public:
    MainFormBase( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~MainFormBase();

    QTable* topicTable;

protected:
    QGridLayout* MainFormBaseLayout;

protected slots:
    virtual void languageChange();

};

#endif // MAINFORMBASE_H
