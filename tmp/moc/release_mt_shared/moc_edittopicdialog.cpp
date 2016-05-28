/****************************************************************************
** EditTopicDialog meta object code from reading C++ file 'edittopicdialog.h'
**
** Created: ?? 4. ??? 18:06:38 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../edittopicdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EditTopicDialog::className() const
{
    return "EditTopicDialog";
}

QMetaObject *EditTopicDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditTopicDialog( "EditTopicDialog", &EditTopicDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditTopicDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditTopicDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditTopicDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditTopicDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditTopicDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = EditTopicDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"editClicked", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"enableEditButton", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "editClicked()", &slot_0, QMetaData::Public },
	{ "enableEditButton(const QString&)", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"EditTopicDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditTopicDialog.setMetaObject( metaObj );
    return metaObj;
}

void* EditTopicDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditTopicDialog" ) )
	return this;
    return EditTopicDialogBase::qt_cast( clname );
}

bool EditTopicDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: editClicked(); break;
    case 1: enableEditButton((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return EditTopicDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EditTopicDialog::qt_emit( int _id, QUObject* _o )
{
    return EditTopicDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool EditTopicDialog::qt_property( int id, int f, QVariant* v)
{
    return EditTopicDialogBase::qt_property( id, f, v);
}

bool EditTopicDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
