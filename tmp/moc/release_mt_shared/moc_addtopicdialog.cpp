/****************************************************************************
** AddTopicDialog meta object code from reading C++ file 'addtopicdialog.h'
**
** Created: ?? 4. ??? 18:06:38 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../addtopicdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AddTopicDialog::className() const
{
    return "AddTopicDialog";
}

QMetaObject *AddTopicDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AddTopicDialog( "AddTopicDialog", &AddTopicDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AddTopicDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AddTopicDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AddTopicDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AddTopicDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AddTopicDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = AddTopicDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"addClicked", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"enableAddButton", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "addClicked()", &slot_0, QMetaData::Private },
	{ "enableAddButton(const QString&)", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"AddTopicDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AddTopicDialog.setMetaObject( metaObj );
    return metaObj;
}

void* AddTopicDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AddTopicDialog" ) )
	return this;
    return AddTopicDialogBase::qt_cast( clname );
}

bool AddTopicDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addClicked(); break;
    case 1: enableAddButton((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return AddTopicDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AddTopicDialog::qt_emit( int _id, QUObject* _o )
{
    return AddTopicDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AddTopicDialog::qt_property( int id, int f, QVariant* v)
{
    return AddTopicDialogBase::qt_property( id, f, v);
}

bool AddTopicDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
