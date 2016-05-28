/****************************************************************************
** SettingsDialog meta object code from reading C++ file 'settingsdialog.h'
**
** Created: ?? 4. ??? 18:06:37 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../settingsdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SettingsDialog::className() const
{
    return "SettingsDialog";
}

QMetaObject *SettingsDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SettingsDialog( "SettingsDialog", &SettingsDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SettingsDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SettingsDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SettingsDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SettingsDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SettingsDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = SettingsDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"saveClicked", 0, 0 };
    static const QUMethod slot_1 = {"enableSaveButton", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "saveClicked()", &slot_0, QMetaData::Private },
	{ "enableSaveButton()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"SettingsDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SettingsDialog.setMetaObject( metaObj );
    return metaObj;
}

void* SettingsDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SettingsDialog" ) )
	return this;
    return SettingsDialogBase::qt_cast( clname );
}

bool SettingsDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: saveClicked(); break;
    case 1: enableSaveButton(); break;
    default:
	return SettingsDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SettingsDialog::qt_emit( int _id, QUObject* _o )
{
    return SettingsDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SettingsDialog::qt_property( int id, int f, QVariant* v)
{
    return SettingsDialogBase::qt_property( id, f, v);
}

bool SettingsDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
