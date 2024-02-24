#pragma execution_character_set("utf-8")

#include "ElectronicPetStore.h"
#include <QtWidgets/QApplication>
#include "MainWindow.h"
#include<vector>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	ElectronicPetStore w;
	w.show();
	MainWindow w2;
	QObject::connect(&w, SIGNAL(showmain()), &w2, SLOT(recivelog()));
	return a.exec();

}
