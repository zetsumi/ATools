#pragma once

#include <QDialog>
#include "ui_CDialogListModel.h"
#include <filesystem>

class CDialogListModel : public QDialog
{
	Q_OBJECT

public:
	CDialogListModel(QWidget *parent = Q_NULLPTR);
	~CDialogListModel();

	void	init();

private:
	Ui::CDialogListModel ui;
};
