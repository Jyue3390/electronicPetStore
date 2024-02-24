#pragma once

#include <QMainWindow>
#include "ui_Care.h"
#include<QPushButton>
#include"Pet.h"
#include <QComboBox>
class Care : public QMainWindow
{
	Q_OBJECT
public:
	Care(QWidget* parent = nullptr);
	~Care();
private slots:
	void handleClick();//处理某个按钮的点击操作
signals:
	void buttonClicked(int num);//将点击的按钮的编号传递给MainWindow::updateVector
private:
	Ui::CareClass ui;

	QPushButton* button1;
	QPushButton* button2;
	QPushButton* button3;
	QPushButton* button4;
	QPushButton* button5;
	QPushButton* button6;
	QPushButton* button7;
	QPushButton* button8;
	QPushButton* button9;
	QPushButton* button10;
};
