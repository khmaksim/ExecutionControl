/****************************************************************************
** ReferenceExecutionForm meta object code from reading C++ file 'referenceexecutionform.h'
**
** Created: ?? 4. ??? 18:06:37 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../referenceexecutionform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ReferenceExecutionForm::className() const
{
    return "ReferenceExecutionForm";
}

QMetaObject *ReferenceExecutionForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ReferenceExecutionForm( "ReferenceExecutionForm", &ReferenceExecutionForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ReferenceExecutionForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferenceExecutionForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ReferenceExecutionForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferenceExecutionForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ReferenceExecutionForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ReferenceExecutionFormBase::staticMetaObject();
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
	{ "addClicked()", &slot_0, QMetaData::Private },
	{ "editClicked()", &slot_1, QMetaData::Private },
	{ "removeClicked()", &slot_2, QMetaData::Private },
	{ "selectEntry(int,int)", &slot_3, QMetaData::Private },
	{ "enableAddButton(const QString&)", &slot_4, QMetaData::Private },
	{ "enableEditButton(const QString&)", &slot_5, QMetaData::Private },
	{ "enableRemoveButton()", &slot_6, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ReferenceExecutionForm", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ReferenceExecutionForm.setMetaObject( metaObj );
    return metaObj;
}

void* ReferenceExecutionForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ReferenceExecutionForm" ) )
	return this;
    return ReferenceExecutionFormBase::qt_cast( clname );
}

bool ReferenceExecutionForm::qt_invoke( int _id, QUObject* _o )
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
	return ReferenceExecutionFormBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ReferenceExecutionForm::qt_emit( int _id, QUObject* _o )
{
    return ReferenceExecutionFormBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ReferenceExecutionForm::qt_property( int id, int f, QVariant* v)
{
    return ReferenceExecutionFormBase::qt_property( id, f, v);
}

bool ReferenceExecutionForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
