//=

#include "SmartLaunchPch.h"
#include "SmartLaunch.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SmartLaunch w;
	w.show();
	return a.exec();
}
