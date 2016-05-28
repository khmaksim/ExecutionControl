/****************************************************************************
** NewPlanDialog meta object code from reading C++ file 'newplandialog.h'
**
** Created: ?? 4. ??? 18:06:38 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../newplandialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *NewPlanDialog::className() const
{
    return "NewPlanDialog";
}

QMetaObject *NewPlanDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_NewPlanDialog( "NewPlanDialog", &NewPlanDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString NewPlanDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NewPlanDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString NewPlanDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NewPlanDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* NewPlanDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = NewPlanDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"addClicked", 0, 0 };
    static const QUMethod slot_1 = {"enableAddButton", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addClicked()", &slot_0, QMetaData::Public },
	{ "enableAddButton()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"NewPlanDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_NewPlanDialog.setMetaObject( metaObj );
    return metaObj;
}

void* NewPlanDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "NewPlanDialog" ) )
	return this;
    return NewPlanDialogBase::qt_cast( clname );
}

bool NewPlanDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addClicked(); break;
    case 1: enableAddButton(); break;
    default:
	return NewPlanDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool NewPlanDialog::qt_emit( int _id, QUObject* _o )
{
    return NewPlanDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool NewPlanDialog::qt_property( int id, int f, QVariant* v)
{
    return NewPlanDialogBase::qt_property( id, f, v);
}

bool NewPlanDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
