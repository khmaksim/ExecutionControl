/****************************************************************************
** Form implementation generated from reading ui file 'newplandialogbase.ui'
**
** Created: Пт 4. мар 18:06:36 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "newplandialogbase.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qtextedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a NewPlanDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
NewPlanDialogBase::NewPlanDialogBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "NewPlanDialogBase" );
    NewPlanDialogBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "NewPlanDialogBaseLayout"); 

    textLabel1 = new QLabel( this, "textLabel1" );
    textLabel1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, textLabel1->sizePolicy().hasHeightForWidth() ) );
    textLabel1->setAlignment( int( QLabel::AlignTop ) );

    NewPlanDialogBaseLayout->addWidget( textLabel1, 0, 0 );
    spacer10 = new QSpacerItem( 340, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    NewPlanDialogBaseLayout->addMultiCell( spacer10, 2, 2, 0, 1 );

    cancelButton = new QPushButton( this, "cancelButton" );
    cancelButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "block_16.png" ) ) );

    NewPlanDialogBaseLayout->addWidget( cancelButton, 2, 3 );

    addButton = new QPushButton( this, "addButton" );
    addButton->setEnabled( FALSE );
    addButton->setDefault( TRUE );
    addButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "plus_16.png" ) ) );

    NewPlanDialogBaseLayout->addWidget( addButton, 2, 2 );
    spacer2 = new QSpacerItem( 20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding );
    NewPlanDialogBaseLayout->addItem( spacer2, 1, 0 );

    namePlanTextEdit = new QTextEdit( this, "namePlanTextEdit" );
    namePlanTextEdit->setWordWrap( QTextEdit::WidgetWidth );
    namePlanTextEdit->setWrapPolicy( QTextEdit::Anywhere );

    NewPlanDialogBaseLayout->addMultiCellWidget( namePlanTextEdit, 0, 1, 1, 3 );
    languageChange();
    resize( QSize(543, 144).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( addButton, SIGNAL( clicked() ), this, SLOT( accept() ) );

    // tab order
    setTabOrder( addButton, cancelButton );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NewPlanDialogBase::~NewPlanDialogBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NewPlanDialogBase::languageChange()
{
    setCaption( trUtf8( "\xd0\x9d\xd0\xbe\xd0\xb2\xd1\x8b\xd0\xb9\x20\xd0\xbf\xd0\xbb\xd0\xb0\xd0\xbd" ) );
    textLabel1->setText( trUtf8( "\xd0\x92\xd0\xb2\xd0\xb5\xd0\xb4\xd0\xb8\xd1\x82\xd0\xb5\x20\xd0\xbd\xd0\xb0\xd0\xb8\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xb0\xd0\xbd\xd0\xb8\xd0\xb5\x20\xd0\xbf\xd0\xbb\xd0\xb0\xd0\xbd\xd0\xb0\x3a" ) );
    cancelButton->setText( trUtf8( "\xd0\x9e\xd1\x82\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb0" ) );
    addButton->setText( trUtf8( "\xd0\x94\xd0\xbe\xd0\xb1\xd0\xb0\xd0\xb2\xd0\xb8\xd1\x82\xd1\x8c" ) );
    namePlanTextEdit->setText( QString::null );
}

