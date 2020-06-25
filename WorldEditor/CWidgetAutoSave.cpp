#include "stdafx.h"
#include "CWidgetAutoSave.h"
#include "MainFrame.h"

CWidgetAutoSave::CWidgetAutoSave(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.btnOk, SIGNAL(clicked()), this, SLOT(onOk()));
}

CWidgetAutoSave::~CWidgetAutoSave()
{
}

void	CWidgetAutoSave::onOk()
{
	QTime time = ui.timeAutoSave->time();
	int hour = 1000 * 60 * 60 * time.hour();
	int min = 1000 * 60 * time.minute();
	int ms = time.msec();
	MainFrame->SetTimerAutoSave(hour + min);
	close();
}