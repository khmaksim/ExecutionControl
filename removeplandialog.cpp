#include <qpushbutton.h>
#include <qsqlquery.h>
#include <qtable.h>
#include <qmessagebox.h>

#include "removeplandialog.h"

RemovePlanDialog::RemovePlanDialog(QWidget *parent, const char *name, bool modal, WFlags f):RemovePlanDialogBase(parent, name, modal, f)
{
	setPlanTable();
	
	connect(planTable, SIGNAL(clicked(int, int, int, const QPoint&)), this, SLOT(selectOne(int, int)));
	connect(planTable, SIGNAL(clicked(int, int, int, const QPoint&)), this, SLOT(enableRemoveButton()));
	connect(resetAllButton, SIGNAL(clicked()), this, SLOT(resetAllClicked()));
	connect(selectAllButton, SIGNAL(clicked()), this, SLOT(selectAllClicked()));
	connect(removeButton, SIGNAL(clicked()), this, SLOT(removeClicked()));
}

//��������� ����������� �������
void RemovePlanDialog::setPlanTable()
{
	planTable->setLeftMargin(0);
	planTable->setTopMargin(0);
	
	//�������� ������ ������
	int row = 0;
	QSqlQuery query;
	
	query.exec("SELECT name_plan FROM plan");
	while(query.next())
	{
		planTable->insertRows(row, 1);
		planTable->setItem(row, 0, new QCheckTableItem(planTable, query.value(0).toString()));
		row++;
	}
	
	if(planTable->numRows() > 1)
	{
		selectAllButton->setEnabled(true);
		resetAllButton->setEnabled(true);
	}
	
	planTable->adjustColumn(0);		//������ ������� ������� �� �����������
}

//�������� �����
void RemovePlanDialog::removeClicked()
{
	if(QMessageBox::question(this, tr("������� ����"), tr("�� ������������� ������� ������� ��������� �����?"), tr("��"), tr("���"), 0, 1))
		return;
		
	QSqlQuery query;
	
	for(int row = 0; row < planTable->numRows(); row++)
		if(((QCheckTableItem*)planTable->item(row, 0))->isChecked())
		{
			query.exec("SELECT id_plan FROM plan WHERE name_plan = '" + planTable->text(row, 0) + "'");
			query.next();
			QString idPlan = query.value(0).toString();
			query.prepare("DELETE FROM topic WHERE id_plan = '" + idPlan + "'");
			if(!query.exec())
			{
				QMessageBox::critical(this, tr("������"), tr("������ ��� �������� ������ �� ���� ������."));
				//query.lastError().showMessage();
			}
			query.prepare("DELETE FROM plan WHERE id_plan = '" + idPlan +"'");
			if(!query.exec())
			{
				QMessageBox::critical(this, tr("������"), tr("������ ��� �������� ������ �� ���� ������."));
				//query.lastError().showMessage();
			}
		}
	this->accept();
}

//���������/��������� ������ "�������"
void RemovePlanDialog::enableRemoveButton()
{
	for(int row = 0; row < planTable->numRows(); row++)
		if(((QCheckTableItem*)planTable->item(row, 0))->isChecked())
		{
			removeButton->setEnabled(true);
			return;
		}
		else
			removeButton->setEnabled(false);
}

//�������� ���
void RemovePlanDialog::selectAllClicked()
{
	for(int row = 0; row < planTable->numRows(); row++)
		((QCheckTableItem *)planTable->item(row, 0))->setChecked(true);
	removeButton->setEnabled(true);

	return;
}

//�������� ���
void RemovePlanDialog::resetAllClicked()
{
	for(int row = 0; row < planTable->numRows(); row++)
		((QCheckTableItem *)planTable->item(row, 0))->setChecked(false);
	removeButton->setEnabled(false);

	return;
}

//�������� ����
void RemovePlanDialog::selectOne(int row, int col)
{
	if(((QCheckTableItem *)planTable->item(row, col))->isChecked())
		((QCheckTableItem *)planTable->item(row, col))->setChecked(false);
	else
		((QCheckTableItem *)planTable->item(row, col))->setChecked(true);
	return;
}