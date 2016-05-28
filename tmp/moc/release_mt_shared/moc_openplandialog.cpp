/****************************************************************************
** OpenPlanDialog meta object code from reading C++ file 'openplandialog.h'
**
** Created: ?? 4. ??? 18:06:37 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../openplandialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OpenPlanDialog::className() const
{
    return "OpenPlanDialog";
}

QMetaObject *OpenPlanDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OpenPlanDialog( "OpenPlanDialog", &OpenPlanDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OpenPlanDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OpenPlanDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OpenPlanDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OpenPlanDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OpenPlanDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = OpenPlanDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"enableOpenButton", 0, 0 };
    static const QUMethod slot_1 = {"selectAllClicked", 0, 0 };
    static const QUMethod slot_2 = {"resetAllClicked", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"selectOne", 2, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "enableOpenButton()", &slot_0, QMetaData::Private },
	{ "selectAllClicked()", &slot_1, QMetaData::Private },
	{ "resetAllClicked()", &slot_2, QMetaData::Private },
	{ "selectOne(int,int)", &slot_3, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"OpenPlanDialog", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OpenPlanDialog.setMetaObject( metaObj );
    return metaObj;
}

void* OpenPlanDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OpenPlanDialog" ) )
	return this;
    return OpenPlanDialogBase::qt_cast( clname );
}

bool OpenPlanDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: enableOpenButton(); break;
    case 1: selectAllClicked(); break;
    case 2: resetAllClicked(); break;
    case 3: selectOne((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return OpenPlanDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool OpenPlanDialog::qt_emit( int _id, QUObject* _o )
{
    return OpenPlanDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OpenPlanDialog::qt_property( int id, int f, QVariant* v)
{
    return OpenPlanDialogBase::qt_property( id, f, v);
}

bool OpenPlanDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
