#include <qsqlquery.h>
#include <qtable.h>
#include <qpushbutton.h>

#include "openplandialog.h"

OpenPlanDialog::OpenPlanDialog(QWidget *parent, const char *name, bool modal, WFlags f):OpenPlanDialogBase(parent, name, modal, f)
{
	setPlanTable();
	
	connect(planTable, SIGNAL(clicked(int, int, int, const QPoint&)), this, SLOT(selectOne(int, int)));
	connect(planTable, SIGNAL(clicked(int, int, int, const QPoint&)), this, SLOT(enableOpenButton()));
	connect(resetAllButton, SIGNAL(clicked()), this, SLOT(resetAllClicked()));
	connect(selectAllButton, SIGNAL(clicked()), this, SLOT(selectAllClicked()));
}

//настройка отображения таблицы
void OpenPlanDialog::setPlanTable()
{
	planTable->setLeftMargin(0);
	planTable->setTopMargin(0);
	
	//загрузка списка планов
	int row = 0;
	
	QSqlQuery query;
	query.exec("SELECT name_plan FROM plan");
	while(query.next())
	{
		planTable->insertRows(row, 1);
		planTable->setItem(row, 0, new QCheckTableItem(planTable, query.value(0).toString()));
		row++;
	}
	
	if(planTable->numRows() > 0)
	{
		selectAllButton->setEnabled(true);
		resetAllButton->setEnabled(true);
	}
	
	planTable->adjustColumn(0);		//ширина колонки зависит от содержимого
}

//разрешить/запретить кнопку "открить"
void OpenPlanDialog::enableOpenButton()
{
	for(int row = 0; row < planTable->numRows(); row++)
		if(((QCheckTableItem*)planTable->item(row, 0))->isChecked())
		{
			openButton->setEnabled(true);
			return;
		}
		else
			openButton->setEnabled(false);
}

//отметить все
void OpenPlanDialog::selectAllClicked()
{
	for(int row = 0; row < planTable->numRows(); row++)
		((QCheckTableItem *)planTable->item(row, 0))->setChecked(true);
	openButton->setEnabled(true);

	return;
}

//сбросить все
void OpenPlanDialog::resetAllClicked()
{
	for(int row = 0; row < planTable->numRows(); row++)
		((QCheckTableItem *)planTable->item(row, 0))->setChecked(false);
	openButton->setEnabled(false);

	return;
}

//отметить один
void OpenPlanDialog::selectOne(int row, int col)
{
	if(((QCheckTableItem *)planTable->item(row, col))->isChecked())
		((QCheckTableItem *)planTable->item(row, col))->setChecked(false);
	else
		((QCheckTableItem *)planTable->item(row, col))->setChecked(true);
	return;
}