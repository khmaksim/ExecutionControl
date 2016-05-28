/****************************************************************************
** FilterDialog meta object code from reading C++ file 'filterdialog.h'
**
** Created: ?? 4. ??? 18:06:37 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../filterdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FilterDialog::className() const
{
    return "FilterDialog";
}

QMetaObject *FilterDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FilterDialog( "FilterDialog", &FilterDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FilterDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FilterDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FilterDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FilterDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FilterDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = FilterDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"applyClicked", 0, 0 };
    static const QUMethod slot_1 = {"cancelClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "applyClicked()", &slot_0, QMetaData::Public },
	{ "cancelClicked()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"FilterDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FilterDialog.setMetaObject( metaObj );
    return metaObj;
}

void* FilterDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FilterDialog" ) )
	return this;
    return FilterDialogBase::qt_cast( clname );
}

bool FilterDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: applyClicked(); break;
    case 1: cancelClicked(); break;
    default:
	return FilterDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FilterDialog::qt_emit( int _id, QUObject* _o )
{
    return FilterDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FilterDialog::qt_property( int id, int f, QVariant* v)
{
    return FilterDialogBase::qt_property( id, f, v);
}

bool FilterDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
