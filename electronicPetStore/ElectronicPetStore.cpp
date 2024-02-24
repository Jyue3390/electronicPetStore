#include "ElectronicPetStore.h"

ElectronicPetStore::ElectronicPetStore(QWidget* parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowState(Qt::WindowMaximized);
	setWindowTitle("Game Login");

	//设置窗口大小
	this->setFixedSize(2400, 1200);
	//背景平铺
	QPixmap bgImage(":/sourse/_20230905205410.jpg");
	QLabel* label = new QLabel(this);
	label->setGeometry(0, 0, this->width(), this->height());
	label->setStyleSheet("background-color:black");
	label->setPixmap(bgImage.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));

	//enterButton按钮
	enterButton = new QPushButton("enter", this);
	enterButton->setFixedSize(200, 100); // 设置按钮大小
	int x = (width() - enterButton->width()) / 3;
	int y = (height() - enterButton->height()) / 3;
	enterButton->move(2 * x, 2 * y); // 将按钮移动到指定位置

	connect(enterButton, &QPushButton::clicked, this, &ElectronicPetStore::enterStore);
	//连接点击按钮的信号和进入商店的槽
}
ElectronicPetStore::~ElectronicPetStore()
{}
void ElectronicPetStore::enterStore()
{
	qDebug() << "enter";
	this->hide();              //隐藏该页面
	emit showmain();//显示商店主页面
}
