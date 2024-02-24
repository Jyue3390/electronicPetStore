#include "Care.h"

Care::Care(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setFixedSize(1000, 600);

	// 创建并布局按钮，设置按钮大小和位置
	button1 = new QPushButton("feed", this);
	button1->setGeometry(50, 50, 100, 30);
	button2 = new QPushButton("water", this);
	button2->setGeometry(50, 100, 100, 30);
	button3 = new QPushButton("goToilet", this);
	button3->setGeometry(50, 150, 100, 30);
	button4 = new QPushButton("play", this);
	button4->setGeometry(50, 200, 100, 30);
	button5 = new QPushButton("sleep", this);
	button5->setGeometry(50, 250, 100, 30);
	button6 = new QPushButton("seeDoctor", this);
	button6->setGeometry(200, 50, 100, 30);
	button7 = new QPushButton("sell", this);
	button7->setGeometry(200, 100, 100, 30);
	button8 = new QPushButton("new Labrador", this);
	button8->setGeometry(200, 150, 100, 30);
	button9 = new QPushButton("new Civet", this);
	button9->setGeometry(200, 200, 100, 30);
	button10 = new QPushButton("new Plush", this);
	button10->setGeometry(200, 250, 100, 30);

	connect(button1, &QPushButton::clicked, this, &Care::handleClick);
	connect(button2, &QPushButton::clicked, this, &Care::handleClick);
	connect(button3, &QPushButton::clicked, this, &Care::handleClick);
	connect(button4, &QPushButton::clicked, this, &Care::handleClick);
	connect(button5, &QPushButton::clicked, this, &Care::handleClick);
	connect(button6, &QPushButton::clicked, this, &Care::handleClick);
	connect(button7, &QPushButton::clicked, this, &Care::handleClick);
	connect(button8, &QPushButton::clicked, this, &Care::handleClick);
	connect(button9, &QPushButton::clicked, this, &Care::handleClick);
	connect(button10, &QPushButton::clicked, this, &Care::handleClick);

}
Care::~Care()
{}
void Care::handleClick()
{
	int num = 0;// 获取按钮的值
	if (sender() == button1) {
		num = 1;
	}
	else if (sender() == button2) {
		num = 2;
	}
	else if (sender() == button3) {
		num = 3;
	}
	else if (sender() == button4) {
		num = 4;
	}
	else if (sender() == button5) {
		num = 5;
	}
	else if (sender() == button6) {
		num = 6;
	}
	else if (sender() == button7) {
		num = 7;
	}
	else if (sender() == button8) {
		num = 8;
	}
	else if (sender() == button9) {
		num = 9;
	}
	else if (sender() == button10) {
		num = 10;
	}
	emit buttonClicked(num); //发出一个名为"buttonClicked"的信号并传递一个参数"num"
	this->hide();
}
