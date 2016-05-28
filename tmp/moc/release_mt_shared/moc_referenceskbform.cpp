/****************************************************************************
** ReferenceSkbForm meta object code from reading C++ file 'referenceskbform.h'
**
** Created: ?? 4. ??? 18:06:37 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../referenceskbform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ReferenceSkbForm::className() const
{
    return "ReferenceSkbForm";
}

QMetaObject *ReferenceSkbForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ReferenceSkbForm( "ReferenceSkbForm", &ReferenceSkbForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ReferenceSkbForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferenceSkbForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ReferenceSkbForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferenceSkbForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ReferenceSkbForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ReferenceSkbFormBase::staticMetaObject();
    static const QUMethod slot_0 = {"addClicked", 0, 0 };
    static const QUMethod slot_1 = {"editClicked", 0, 0 };
    static const QUMethod slot_2 = {"removeClicked", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"selectEntry", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"enableAddButton", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"enableEditButton", 1, param_slot_5 };
    static const QUMethod slot_6 = {"enableRemoveButton", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addClicked()", &slot_0, QMetaData::Public },
	{ "editClicked()", &slot_1, QMetaData::Public },
	{ "removeClicked()", &slot_2, QMetaData::Public },
	{ "selectEntry(int,int)", &slot_3, QMetaData::Public },
	{ "enableAddButton(const QString&)", &slot_4, QMetaData::Public },
	{ "enableEditButton(const QString&)", &slot_5, QMetaData::Public },
	{ "enableRemoveButton()", &slot_6, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ReferenceSkbForm", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ReferenceSkbForm.setMetaObject( metaObj );
    return metaObj;
}

void* ReferenceSkbForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ReferenceSkbForm" ) )
	return this;
    return ReferenceSkbFormBase::qt_cast( clname );
}

bool ReferenceSkbForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addClicked(); break;
    case 1: editClicked(); break;
    case 2: removeClicked(); break;
    case 3: selectEntry((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: enableAddButton((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: enableEditButton((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: enableRemoveButton(); break;
    default:
	return ReferenceSkbFormBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ReferenceSkbForm::qt_emit( int _id, QUObject* _o )
{
    return ReferenceSkbFormBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ReferenceSkbForm::qt_property( int id, int f, QVariant* v)
{
    return ReferenceSkbFormBase::qt_property( id, f, v);
}

bool ReferenceSkbForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
