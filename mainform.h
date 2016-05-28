#ifndef MAINFORM_H
#define MAINFORM_H

#include "mainformbase.h"

class FilterDialog;
class ReferenceExecutionForm;
class ReferenceSkbForm;
class McDocument;

class MainForm:public MainFormBase
{
	Q_OBJECT
	
	public:
		MainForm(QWidget *parent = 0, const char *name = 0);
		
	protected:
		void closeEvent(QCloseEvent*);
		void contextMenuEvent(QContextMenuEvent*);
		
	private slots:
		void newPlanActivated();
		void openPlanActivated();
		void removePlanActivated();
		//void closePlanActivated();
		void addTopicActivated();
		void editTopicActivated();
		void removeTopicActivated();
		void filterActivated();
		void openReferenceExecutiveActivated();
		void openReferenceSkbActivated();
		void outInWordActivated();
		void settingsActivated();
		void enableActActivated();
					
	private:
		void createActions();
		void createMenus();
		void createToolBars();
		void readSettings();
		void writeSettings();
		void refreshPlanTable(QStringList);
		void setPlanTable();
		void connectDatabase();
		
		FilterDialog *filterDialog;
		ReferenceExecutionForm *referenceExecutionForm;
		ReferenceSkbForm *referenceSkbForm;
		
		QPopupMenu *planMenu;
		QPopupMenu *topicMenu;
		QPopupMenu *referenceMenu;
		QPopupMenu *reportMenu;
		QPopupMenu *settingsMenu;
		
		QToolBar *topicToolBar;
			
		QAction *newPlanAct;
		QAction *openPlanAct;
		QAction *removePlanAct;
		//QAction *closePlanAct;
		QAction *quitAct;
		QAction *addTopicAct;
		QAction *editTopicAct;
		QAction *removeTopicAct;
		QAction *filterAct;
		QAction *refExecutiveAct;
		QAction *refSkbAct;
		QAction *outAct;
		QAction *connectAct;
		
		QStringList currentPlanList;
		QString hostName;
		QString userName;
		QString password;
				
		McDocument *md;
};
#endif