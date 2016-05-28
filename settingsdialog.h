#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include "settingsdialogbase.h"

class SettingsDialog:public SettingsDialogBase
{
	Q_OBJECT
	
	public:
		SettingsDialog(QWidget *parent = 0, const char *name = 0, bool modal = false, WFlags f = 0);
		
	protected:
		void keyPressEvent(QKeyEvent*);
	
	private slots:
		void saveClicked();
		void enableSaveButton();
		
	private:
		void readSettings();
		void writeSettings();
};
#endif