/****************************************************************************
** ReferenceExecutionFormBase meta object code from reading C++ file 'referenceexecutionformbase.h'
**
** Created: ?? 4. ??? 18:06:33 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../referenceexecutionformbase.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ReferenceExecutionFormBase::className() const
{
    return "ReferenceExecutionFormBase";
}

QMetaObject *ReferenceExecutionFormBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ReferenceExecutionFormBase( "ReferenceExecutionFormBase", &ReferenceExecutionFormBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ReferenceExecutionFormBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferenceExecutionFormBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ReferenceExecutionFormBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferenceExecutionFormBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ReferenceExecutionFormBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ReferenceExecutionFormBase", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ReferenceExecutionFormBase.setMetaObject( metaObj );
    return metaObj;
}

void* ReferenceExecutionFormBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ReferenceExecutionFormBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ReferenceExecutionFormBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ReferenceExecutionFormBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ReferenceExecutionFormBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ReferenceExecutionFormBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
