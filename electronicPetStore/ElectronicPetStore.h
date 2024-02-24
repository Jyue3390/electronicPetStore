#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ElectronicPetStore.h"
#include<qpushbutton.h>
#include <QVBoxLayout>
#include<qdebug.h>
#include<qlabel.h>
#include"qmainwindow.h"
class ElectronicPetStore : public QMainWindow
{
	Q_OBJECT
public:
	ElectronicPetStore(QWidget* parent = nullptr);
	~ElectronicPetStore();
public slots:
	void enterStore();//槽：接受进入商店的信号
signals:
	void showmain();//显示进入页面
private:
	Ui::ElectronicPetStoreClass ui;
	QPushButton* enterButton;
};
