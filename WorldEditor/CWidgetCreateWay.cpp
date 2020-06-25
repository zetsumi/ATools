#include "stdafx.h"
#include "CWidgetCreateWay.h"

CWidgetCreateWay::CWidgetCreateWay(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnPutPointWay, SIGNAL(clicked()), this, SLOT(onPutPointWay()));
	connect(ui.btnApply, SIGNAL(clicked()), this, SLOT(onApply()));

}

CWidgetCreateWay::~CWidgetCreateWay()
{
}

void CWidgetCreateWay::onPutPointWay()
{

	int height = ui.spinHeight->value();
	int radius = ui.sliderRadius->value();

	qDebug() << "height: " << height << "radius: " << radius;
}

void CWidgetCreateWay::onApply()
{
}