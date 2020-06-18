#include "stdafx.h"
#include "DialogListModel.h"

CDialogListModel::CDialogListModel(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

CDialogListModel::~CDialogListModel()
{
}

void CDialogListModel::init()
{
	ui.listWidget->clear();
	QDir dir("Model/");
	QStringList models = dir.entryList(QStringList() << "*.o3d", QDir::Files);
	for (const auto& m : models)
	{
		ui.listWidget->addItem(m);
	}
}
