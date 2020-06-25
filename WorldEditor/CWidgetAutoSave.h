#pragma once

#include <QDialog>
#include "ui_WidgetAutoSave.h"

class CWidgetAutoSave : public QDialog
{
	Q_OBJECT

public:
	CWidgetAutoSave(QWidget *parent = Q_NULLPTR);
	~CWidgetAutoSave();

public slots:
	void onOk();

private:
	Ui::CWidgetAutoSave ui;
};
