/****************************************************************************
** RemovePlanDialog meta object code from reading C++ file 'removeplandialog.h'
**
** Created: ?? 4. ??? 18:06:38 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../removeplandialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RemovePlanDialog::className() const
{
    return "RemovePlanDialog";
}

QMetaObject *RemovePlanDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RemovePlanDialog( "RemovePlanDialog", &RemovePlanDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RemovePlanDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RemovePlanDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RemovePlanDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RemovePlanDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RemovePlanDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = RemovePlanDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"removeClicked", 0, 0 };
    static const QUMethod slot_1 = {"enableRemoveButton", 0, 0 };
    static const QUMethod slot_2 = {"selectAllClicked", 0, 0 };
    static const QUMethod slot_3 = {"resetAllClicked", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"selectOne", 2, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "removeClicked()", &slot_0, QMetaData::Public },
	{ "enableRemoveButton()", &slot_1, QMetaData::Public },
	{ "selectAllClicked()", &slot_2, QMetaData::Public },
	{ "resetAllClicked()", &slot_3, QMetaData::Public },
	{ "selectOne(int,int)", &slot_4, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"RemovePlanDialog", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RemovePlanDialog.setMetaObject( metaObj );
    return metaObj;
}

void* RemovePlanDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RemovePlanDialog" ) )
	return this;
    return RemovePlanDialogBase::qt_cast( clname );
}

bool RemovePlanDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: removeClicked(); break;
    case 1: enableRemoveButton(); break;
    case 2: selectAllClicked(); break;
    case 3: resetAllClicked(); break;
    case 4: selectOne((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return RemovePlanDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool RemovePlanDialog::qt_emit( int _id, QUObject* _o )
{
    return RemovePlanDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool RemovePlanDialog::qt_property( int id, int f, QVariant* v)
{
    return RemovePlanDialogBase::qt_property( id, f, v);
}

bool RemovePlanDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
