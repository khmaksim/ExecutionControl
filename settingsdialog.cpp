#include <qpushbutton.h>
#include <qsqlquery.h>
#include <qlineedit.h>
#include <qtable.h>
#include <qsettings.h>
#include <qsqldatabase.h>
#include <qcheckbox.h>
#include <qmessagebox.h>

#include "settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent, const char *name, bool modal, WFlags f):SettingsDialogBase(parent, name, modal, f)
{
	readSettings();
	
	connect(saveButton, SIGNAL(clicked()), this, SLOT(saveClicked()));
	connect(hostNameLineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(enableSaveButton()));
	connect(userNameLineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(enableSaveButton()));
	connect(passwordLineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(enableSaveButton()));
}

//действия при нажатии кн. <Esc>
void SettingsDialog::keyPressEvent(QKeyEvent *event)
{
	if(event->key() == Key_Escape)
	{
		event->ignore();
		return;
	}
	QDialog::keyPressEvent(event);
}

//чтение настроек
void SettingsDialog::readSettings()
{
	QSettings settings;
	settings.setPath("pku.ru", "ExecutionControl");
	settings.beginGroup("/ExecutionControl");
		settings.beginGroup("/connectDatabase");
			hostNameLineEdit->setText(settings.readEntry("/hostname"));
			userNameLineEdit->setText(settings.readEntry("/username"));
			passwordLineEdit->setText(settings.readEntry("/password"));
		settings.endGroup();
	settings.endGroup();
	if(!hostNameLineEdit->text().isEmpty() && !userNameLineEdit->text().isEmpty() && !passwordLineEdit->text().isEmpty())
		saveButton->setEnabled(true);
}

//запись настроек
void SettingsDialog::writeSettings()
{
	QSettings settings;
	settings.setPath("pku.ru", "ExecutionControl");
	settings.beginGroup("/ExecutionControl");
		settings.beginGroup("/connectDatabase");
			settings.writeEntry("/hostname", hostNameLineEdit->text());
			settings.writeEntry("/username", userNameLineEdit->text());
			settings.writeEntry("/password", passwordLineEdit->text());
		settings.endGroup();
	settings.endGroup();
}

//разрешение/запрещение кнопки "подключиться"
void SettingsDialog::enableSaveButton()
{
	saveButton->setEnabled(!hostNameLineEdit->text().isEmpty() && !userNameLineEdit->text().isEmpty() && !passwordLineEdit->text().isEmpty());
}

void SettingsDialog::saveClicked()
{
	writeSettings();
}