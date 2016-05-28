/****************************************************************************
** MainForm meta object code from reading C++ file 'mainform.h'
**
** Created: ?? 4. ??? 18:06:38 2011
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../mainform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainForm::className() const
{
    return "MainForm";
}

QMetaObject *MainForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainForm( "MainForm", &MainForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = MainFormBase::staticMetaObject();
    static const QUMethod slot_0 = {"newPlanActivated", 0, 0 };
    static const QUMethod slot_1 = {"openPlanActivated", 0, 0 };
    static const QUMethod slot_2 = {"removePlanActivated", 0, 0 };
    static const QUMethod slot_3 = {"addTopicActivated", 0, 0 };
    static const QUMethod slot_4 = {"editTopicActivated", 0, 0 };
    static const QUMethod slot_5 = {"removeTopicActivated", 0, 0 };
    static const QUMethod slot_6 = {"filterActivated", 0, 0 };
    static const QUMethod slot_7 = {"openReferenceExecutiveActivated", 0, 0 };
    static const QUMethod slot_8 = {"openReferenceSkbActivated", 0, 0 };
    static const QUMethod slot_9 = {"outInWordActivated", 0, 0 };
    static const QUMethod slot_10 = {"settingsActivated", 0, 0 };
    static const QUMethod slot_11 = {"enableActActivated", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "newPlanActivated()", &slot_0, QMetaData::Private },
	{ "openPlanActivated()", &slot_1, QMetaData::Private },
	{ "removePlanActivated()", &slot_2, QMetaData::Private },
	{ "addTopicActivated()", &slot_3, QMetaData::Private },
	{ "editTopicActivated()", &slot_4, QMetaData::Private },
	{ "removeTopicActivated()", &slot_5, QMetaData::Private },
	{ "filterActivated()", &slot_6, QMetaData::Private },
	{ "openReferenceExecutiveActivated()", &slot_7, QMetaData::Private },
	{ "openReferenceSkbActivated()", &slot_8, QMetaData::Private },
	{ "outInWordActivated()", &slot_9, QMetaData::Private },
	{ "settingsActivated()", &slot_10, QMetaData::Private },
	{ "enableActActivated()", &slot_11, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainForm", parentObject,
	slot_tbl, 12,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainForm.setMetaObject( metaObj );
    return metaObj;
}

void* MainForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainForm" ) )
	return this;
    return MainFormBase::qt_cast( clname );
}

bool MainForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: newPlanActivated(); break;
    case 1: openPlanActivated(); break;
    case 2: removePlanActivated(); break;
    case 3: addTopicActivated(); break;
    case 4: editTopicActivated(); break;
    case 5: removeTopicActivated(); break;
    case 6: filterActivated(); break;
    case 7: openReferenceExecutiveActivated(); break;
    case 8: openReferenceSkbActivated(); break;
    case 9: outInWordActivated(); break;
    case 10: settingsActivated(); break;
    case 11: enableActActivated(); break;
    default:
	return MainFormBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainForm::qt_emit( int _id, QUObject* _o )
{
    return MainFormBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainForm::qt_property( int id, int f, QVariant* v)
{
    return MainFormBase::qt_property( id, f, v);
}

bool MainForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
