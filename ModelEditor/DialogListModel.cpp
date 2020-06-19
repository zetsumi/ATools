#include "stdafx.h"
#include "MainFrame.h"
#include "DialogListModel.h"
#include "ModelMng.h"
#include "TextureMng.h"

CDialogListModel::CDialogListModel(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnLoad, SIGNAL(clicked()), this, SLOT(onBtnLoad()));
	connect(ui.btnExport, SIGNAL(clicked()), this, SLOT(onBtnExport()));
}

CDialogListModel::~CDialogListModel()
{
}

void CDialogListModel::init()
{
	ui.treeWidget->clear();

	QList<QTreeWidgetItem*>	tree;

	QTreeWidgetItem* base = new QTreeWidgetItem(QStringList(QString("default")));
	QTreeWidgetItem* obj = new QTreeWidgetItem(QStringList(QString("obj")));
	QTreeWidgetItem* ctrl = new QTreeWidgetItem(QStringList(QString("ctrl")));
	QTreeWidgetItem* mvr = new QTreeWidgetItem(QStringList(QString("mvr")));
	QTreeWidgetItem* item = new QTreeWidgetItem(QStringList(QString("item")));
	QTreeWidgetItem* part = new QTreeWidgetItem(QStringList(QString("part")));
	QTreeWidgetItem* region = new QTreeWidgetItem(QStringList(QString("region")));

	ui.treeWidget->insertTopLevelItem(0, base);
	ui.treeWidget->insertTopLevelItem(1, obj);
	ui.treeWidget->insertTopLevelItem(2, ctrl);
	ui.treeWidget->insertTopLevelItem(3, mvr);
	ui.treeWidget->insertTopLevelItem(4, item);
	ui.treeWidget->insertTopLevelItem(5, part);
	ui.treeWidget->insertTopLevelItem(6, region);


	QDir dir("Model/");
	QStringList models = dir.entryList(QStringList() << "*.o3d", QDir::Files);
	for (const auto& nameModel : models)
	{
		if (nameModel.toLower().contains("sfx_"))
			continue;
		QTreeWidgetItem* elem = new QTreeWidgetItem(QStringList(QString(nameModel)));
		if (nameModel.toLower().startsWith("obj_"))
			obj->addChild(elem);
		else if (nameModel.toLower().startsWith("ctrl_"))
			ctrl->addChild(elem);
		else if (nameModel.toLower().startsWith("mvr_"))
			mvr->addChild(elem);
		else if (nameModel.toLower().startsWith("item_"))
			item->addChild(elem);
		else if (nameModel.toLower().startsWith("part_"))
			part->addChild(elem);
		else if (nameModel.toLower().startsWith("region_"))
			region->addChild(elem);
		else
			base->addChild(elem);
	}
}

QString	CDialogListModel::getNameItemSelected()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();
	if (item == nullptr)
		return QString();

	QString filename = item->text(0);
	if (filename.isNull() || filename.isEmpty())
		return QString();
	if (filename == "default" || filename == "obj" || filename == "ctrl"
		|| filename == "mvr" || filename == "item" || filename == "part"
		|| filename == "region")
		return QString();
	return filename;
}

void CDialogListModel::onBtnExport()
{
	CMainFrame* main = (CMainFrame*)parent();
	main->SaveFile();
}

void CDialogListModel::onBtnLoad()
{
	QString filename = getNameItemSelected();
	QString	pathFilename("Model/" + filename);
	CMainFrame* main = (CMainFrame*)parent();
	main->OpenFile(pathFilename);
}
