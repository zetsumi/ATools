#pragma once

#include <QDialog>
#include "ui_WidgetCreateWay.h"

class CWidgetCreateWay : public QDialog
{
	Q_OBJECT

public:
	CWidgetCreateWay(QWidget *parent = Q_NULLPTR);
	~CWidgetCreateWay();

public slots:
	void onPutPointWay();
	void onApply();

private:
	Ui::CWidgetCreateWay ui;
};
