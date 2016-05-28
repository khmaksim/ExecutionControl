#include <qpushbutton.h>
#include <qsqlquery.h>
#include <qtextedit.h>
#include <qmessagebox.h>

#include "newplandialog.h"

NewPlanDialog::NewPlanDialog(QWidget *parent, const char *name, bool modal, WFlags f):NewPlanDialogBase(parent, name, modal, f)
{
	connect(addButton, SIGNAL(clicked()), this, SLOT(addClicked()));
	connect(namePlanTextEdit, SIGNAL(textChanged()), this, SLOT(enableAddButton()));
}

//���������� �����
void NewPlanDialog::addClicked()
{
	QSqlQuery query;
	query.prepare("INSERT INTO plan(name_plan) VALUES(:name_plan)");
	query.bindValue(":name_plan", namePlanTextEdit->text());
	if(!query.exec())
	{
		QMessageBox::critical(this, tr("������"), tr("������ ��� ���������� ������ � ���� ������."));
		//query.lastError().showMessage();
	}
}

//����������/���������� ������ "��������"
void NewPlanDialog::enableAddButton()
{
	addButton->setEnabled(!namePlanTextEdit->text().isEmpty());
}