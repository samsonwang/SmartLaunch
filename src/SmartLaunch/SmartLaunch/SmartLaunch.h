/*


*/


#pragma once

#include <QtWidgets/QDialog>
#include "ui_SmartLaunch.h"

class SmartLaunch : public QDialog
{
	Q_OBJECT

public:
	SmartLaunch(QWidget *parent = Q_NULLPTR);

private:
	Ui::SmartLaunchClass ui;
};
