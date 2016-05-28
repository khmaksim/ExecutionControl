#ifndef OPENPLANDIALOG_H
#define OPENPLANDIALOG_H

#include "openplandialogbase.h"

class OpenPlanDialog:public OpenPlanDialogBase
{
	Q_OBJECT
	
	public:
		OpenPlanDialog(QWidget *parent = 0, const char *name = 0, bool modal = false, WFlags f = 0);
		
	private slots:
		void enableOpenButton();
		void selectAllClicked();
		void resetAllClicked();
		void selectOne(int, int);
	
	private:
		void setPlanTable();
};
#endif