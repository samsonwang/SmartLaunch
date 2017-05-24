#include "QLaunch.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLaunch w;
	w.show();
	return a.exec();
}
