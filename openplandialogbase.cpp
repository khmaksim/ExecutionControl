/****************************************************************************
** Form implementation generated from reading ui file 'openplandialogbase.ui'
**
** Created: Пт 4. мар 18:06:32 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "openplandialogbase.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qgroupbox.h>
#include <qtable.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a OpenPlanDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
OpenPlanDialogBase::OpenPlanDialogBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "OpenPlanDialogBase" );
    OpenPlanDialogBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "OpenPlanDialogBaseLayout"); 
    spacer10 = new QSpacerItem( 340, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    OpenPlanDialogBaseLayout->addItem( spacer10, 1, 0 );

    cancelButton = new QPushButton( this, "cancelButton" );
    cancelButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "block_16.png" ) ) );

    OpenPlanDialogBaseLayout->addWidget( cancelButton, 1, 2 );

    openButton = new QPushButton( this, "openButton" );
    openButton->setEnabled( FALSE );
    openButton->setDefault( TRUE );
    openButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "tick_16.png" ) ) );

    OpenPlanDialogBaseLayout->addWidget( openButton, 1, 1 );

    groupBox3 = new QGroupBox( this, "groupBox3" );
    groupBox3->setColumnLayout(0, Qt::Vertical );
    groupBox3->layout()->setSpacing( 6 );
    groupBox3->layout()->setMargin( 11 );
    groupBox3Layout = new QGridLayout( groupBox3->layout() );
    groupBox3Layout->setAlignment( Qt::AlignTop );

    planTable = new QTable( groupBox3, "planTable" );
    planTable->setMouseTracking( FALSE );
    planTable->setHScrollBarMode( QTable::Auto );
    planTable->setNumRows( 0 );
    planTable->setNumCols( 1 );
    planTable->setShowGrid( TRUE );
    planTable->setReadOnly( TRUE );
    planTable->setSelectionMode( QTable::NoSelection );
    planTable->setFocusStyle( QTable::FollowStyle );

    groupBox3Layout->addMultiCellWidget( planTable, 0, 0, 0, 2 );

    resetAllButton = new QPushButton( groupBox3, "resetAllButton" );
    resetAllButton->setEnabled( FALSE );

    groupBox3Layout->addWidget( resetAllButton, 1, 2 );

    selectAllButton = new QPushButton( groupBox3, "selectAllButton" );
    selectAllButton->setEnabled( FALSE );

    groupBox3Layout->addWidget( selectAllButton, 1, 1 );
    spacer14 = new QSpacerItem( 380, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    groupBox3Layout->addItem( spacer14, 1, 0 );

    OpenPlanDialogBaseLayout->addMultiCellWidget( groupBox3, 0, 0, 0, 2 );
    languageChange();
    resize( QSize(624, 346).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( openButton, SIGNAL( clicked() ), this, SLOT( accept() ) );

    // tab order
    setTabOrder( openButton, cancelButton );
}

/*
 *  Destroys the object and frees any allocated resources
 */
OpenPlanDialogBase::~OpenPlanDialogBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void OpenPlanDialogBase::languageChange()
{
    setCaption( trUtf8( "\xd0\x9e\xd1\x82\xd0\xba\xd1\x80\xd1\x8b\xd1\x82\xd1\x8c\x20\xd0\xbf\xd0\xbb\xd0\xb0\xd0\xbd" ) );
    cancelButton->setText( trUtf8( "\xd0\x9e\xd1\x82\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb0" ) );
    openButton->setText( trUtf8( "\xd0\x9e\xd1\x82\xd0\xba\xd1\x80\xd1\x8b\xd1\x82\xd1\x8c" ) );
    groupBox3->setTitle( trUtf8( "\xd0\xa1\xd0\xbf\xd0\xb8\xd1\x81\xd0\xbe\xd0\xba\x20\xd0\xbf\xd0\xbb\xd0\xb0\xd0\xbd\xd0\xbe\xd0\xb2" ) );
    resetAllButton->setText( trUtf8( "\xd0\xa1\xd0\xb1\xd1\x80\xd0\xbe\xd1\x81\xd0\xb8\xd1\x82\xd1\x8c\x20\xd0\xb2\xd1\x81\xd0\xb5" ) );
    selectAllButton->setText( trUtf8( "\xd0\x9e\xd1\x82\xd0\xbc\xd0\xb5\xd1\x82\xd0\xb8\xd1\x82\xd1\x8c\x20\xd0\xb2\xd1\x81\xd0\xb5" ) );
}

