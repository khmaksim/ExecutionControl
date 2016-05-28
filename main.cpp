#include <qapplication.h>
#include <qtextcodec.h>
#include "mainform.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	
	QTextCodec *codec = QTextCodec::codecForName("CP1251");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);

	MainForm mainForm;
	app.setMainWidget(&mainForm);
    mainForm.show();
    app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
    return app.exec();
}
