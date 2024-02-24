#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include<QPushButton>
#include<QShowEvent>
#include"Care.h"
#include<QTextEdit>
#include"Pet.h"
#include"Civet.h"
#include"Plush.h"
#include"Samoyed.h"
#include"Labrador.h"
#include"ElectronicPetStore.h"
#include<QPixmap>
#include <QTimer>
#include<QFileDialog>
#include <QDesktopServices>
#include <QProcess>
#include<ostream>
#include<fstream>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();
	void changeLabelImage(const QString&);//改变该位置上的图像
	void update(Pet&);//更新宠物状态

public slots:
	void renewVector();//将pets输出到文件中，实现文件中宠物信息的更新
private slots://槽
	void recivelog();//enterwindow->MainWindow
private slots:
	void enterCare();//进入care页面
private slots:
	void updateVector(int carenum);//在care页面中点击创建按钮->更新pets数组、商店页面、宠物信息
private slots:
	void handleClick(int, int);//处理该页面中某个位置的按钮的点击操作
private slots:
	void onViewAllButtonClicked();//处理查看所有宠物信息按钮的点击操作
private:
	Ui::MainWindow ui;
	int buttonRow;//记录当前按钮的行
	int buttonCol;//记录当前按钮的列
	//以实现根据buttonRow和buttonCol实现对该位置宠物的相关操作
	Pet* win[2][4] = { nullptr };
	vector<Pet*> pets;//存总的
	QGridLayout* layout;
	QHBoxLayout* row1Layout; QHBoxLayout* row2Layout;
	QHBoxLayout* row3Layout; QHBoxLayout* row4Layout;
	QPushButton* button2_1; QPushButton* button2_2;
	QPushButton* button2_3; QPushButton* button2_4;
	QPushButton* button4_1; QPushButton* button4_2;
	QPushButton* button4_3; QPushButton* button4_4;
	QPushButton* button4_5;
	QLabel* label[2][4];
};
