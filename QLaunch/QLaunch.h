#ifndef QLAUNCH_H
#define QLAUNCH_H

#include <QtWidgets/QDialog>
#include "ui_QLaunch.h"

class QLaunch : public QDialog
{
	Q_OBJECT

public:
	QLaunch(QWidget *parent = 0);
	~QLaunch();

private:
	Ui::QLaunchClass ui;
};

#endif // QLAUNCH_H
