#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) :QMainWindow(parent)
{
	buttonCol = 0, buttonRow = 0;//初始化为0
	ui.setupUi(this);
	setFixedSize(2400, 1200);
	setWindowTitle("ElectronicPetStore");

	QTimer* timer = new QTimer(this);// 设置定时器触发间隔为10000毫秒（即10秒钟）
	timer->setInterval(10000);// 将定时器的timeout()信号连接到update()函数上
	connect(timer, &QTimer::timeout, this, &MainWindow::renewVector);// 启动定时器
	timer->start();

	// 创建布局管理器
	layout = new QGridLayout(this);
	// 创建第一行的布局
	row1Layout = new QHBoxLayout;
	label[0][0] = new QLabel;
	QPixmap pixmap1_1("image1_2.png"); // 加载图片
	pixmap1_1 = pixmap1_1.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation); // 缩放图片
	label[0][0]->setPixmap(pixmap1_1);
	label[0][0]->setAlignment(Qt::AlignCenter); // 将图片居中对齐
	label[0][1] = new QLabel;
	QPixmap pixmap1_2("image1_2.png");
	pixmap1_2 = pixmap1_2.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[0][1]->setPixmap(pixmap1_2);
	label[0][1]->setAlignment(Qt::AlignCenter);
	label[0][2] = new QLabel;
	QPixmap pixmap1_3("image1_3.png");
	pixmap1_3 = pixmap1_3.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[0][2]->setPixmap(pixmap1_3);
	label[0][2]->setAlignment(Qt::AlignCenter);
	label[0][3] = new QLabel;
	QPixmap pixmap1_4("image1_4.png");
	pixmap1_4 = pixmap1_4.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[0][3]->setPixmap(pixmap1_4);
	label[0][3]->setAlignment(Qt::AlignCenter);
	row1Layout->addWidget(label[0][0]);
	row1Layout->addWidget(label[0][1]);
	row1Layout->addWidget(label[0][2]);
	row1Layout->addWidget(label[0][3]);

	// 创建第二行的布局
	row2Layout = new QHBoxLayout;
	button2_1 = new QPushButton("pet1");
	button2_2 = new QPushButton("pet2");
	button2_3 = new QPushButton("pet3");
	button2_4 = new QPushButton("pet4");
	row2Layout->addWidget(button2_1);
	row2Layout->addWidget(button2_2);
	row2Layout->addWidget(button2_3);
	row2Layout->addWidget(button2_4);

	// 进入care窗口并将按钮的位置坐标记录下来，以确保care窗口中的操作所改变的是该位置的宠物
	connect(button2_1, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(0, 0);
		});
	connect(button2_2, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(0, 1);
		});
	connect(button2_3, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(0, 2);
		});
	connect(button2_4, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(0, 3);
		});

	// 创建第三行的布局
	row3Layout = new QHBoxLayout;

	label[1][0] = new QLabel;
	QPixmap pixmap3_1("image3_1.png");
	pixmap3_1 = pixmap3_1.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[1][0]->setPixmap(pixmap3_1);
	label[1][0]->setAlignment(Qt::AlignCenter);

	label[1][1] = new QLabel;
	QPixmap pixmap3_2("image3_2.png");
	pixmap3_2 = pixmap3_2.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[1][1]->setPixmap(pixmap3_2);
	label[1][1]->setAlignment(Qt::AlignCenter);

	label[1][2] = new QLabel;
	QPixmap pixmap3_3("image3_3.png");
	pixmap3_3 = pixmap3_3.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[1][2]->setPixmap(pixmap3_3);
	label[1][2]->setAlignment(Qt::AlignCenter);

	label[1][3] = new QLabel;
	QPixmap pixmap3_4("image3_4.png");
	pixmap3_4 = pixmap3_4.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[1][3]->setPixmap(pixmap3_4);
	label[1][3]->setAlignment(Qt::AlignCenter);

	row3Layout->addWidget(label[1][0]);
	row3Layout->addWidget(label[1][1]);
	row3Layout->addWidget(label[1][2]);
	row3Layout->addWidget(label[1][3]);

	// 创建第四行的布局
	row4Layout = new QHBoxLayout;
	button4_1 = new QPushButton("pet5");
	button4_2 = new QPushButton("pet6");
	button4_3 = new QPushButton("pet7");
	button4_4 = new QPushButton("pet8");
	button4_5 = new QPushButton("view all");
	row4Layout->addWidget(button4_1);
	row4Layout->addWidget(button4_2);
	row4Layout->addWidget(button4_3);
	row4Layout->addWidget(button4_4);
	row4Layout->addWidget(button4_5);
	connect(button4_1, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(1, 0);
		});
	connect(button4_2, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(1, 1);
		});
	connect(button4_3, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(1, 2);
		});
	connect(button4_4, &QPushButton::clicked, this, [=]() {
		enterCare(), handleClick(1, 3);
		});

	// 将每一行的布局添加到主布局中
	layout->addLayout(row1Layout, 0, 0);
	layout->addLayout(row2Layout, 1, 0);
	layout->addLayout(row3Layout, 2, 0);
	layout->addLayout(row4Layout, 3, 0);

	// 设置主窗口中心布局
	QWidget* centralWidget = new QWidget(this);
	centralWidget->setLayout(layout);
	setCentralWidget(centralWidget);
	//连接button4_5按钮点击信号和查看所有宠物信息按钮的槽函数
	connect(button4_5, &QPushButton::clicked, this, &MainWindow::onViewAllButtonClicked);
}

MainWindow::~MainWindow()
{
	for (Pet* pet : pets) {
		delete pet;
	}
	pets.clear();// 释放pets中的内存,也就释放了win数组中的内存
}
void MainWindow::recivelog() {
	this->show();
}
void MainWindow::enterCare()
{
	// 创建Care窗口对象并连接信号与槽函数
	Care* care = new Care(this);
	//接收在care窗口中的点击的按钮编号，更新pets数组、商店页面、宠物信息
	connect(care, &Care::buttonClicked, this, &MainWindow::updateVector);
	care->show();
}
void MainWindow::handleClick(int a, int b)//处理该页面中某个位置的按钮的点击操作并更新当前按钮的编号
{
	buttonRow = a; buttonCol = b;
}
void MainWindow::updateVector(int num)
{
	if (num <= 7 && num >= 1) {
		win[buttonRow][buttonCol]->care(num);
		if (num == 7) {//售出宠物
			setLive(*win[buttonRow][buttonCol], false);
			changeLabelImage(":/source2/_20230905205314.jpg");//更改图片
		}
	}
	else {
		if (win[buttonRow][buttonCol] != nullptr) {
			if (getLive(*win[buttonRow][buttonCol]))
				changeLabelImage(":/pet/error.jpg");
		}
		else if (num == 8) {//新建宠物
			Labrador* lab = new Labrador(buttonRow, buttonCol);
			pets.push_back(lab);
			win[buttonRow][buttonCol] = lab;
			changeLabelImage(":/pet/lab.jpg");//new完之后将图片显示在
		}
		else if (num == 9) {//新建宠物
			Civet* lab = new Civet(buttonRow, buttonCol);
			pets.push_back(lab);
			win[buttonRow][buttonCol] = lab;
			changeLabelImage(":/pet/s.jpg");//new完之后将图片显示在
		}
		else if (num == 10) {//新建宠物
			Plush* lab = new Plush(buttonRow, buttonCol);
			pets.push_back(lab);
			win[buttonRow][buttonCol] = lab;
			changeLabelImage(":/pet/p.jpg");//new完之后将图片显示在
		}
	}
	//覆盖原本的宠物信息
	std::ofstream file; // 创建输出文件流对象，打开文件
	file.open("output.txt");
	file << "num     type    hunger  thirsty urinate feeling spirit  healthy life    live" << endl;
	for (int i = 0; i < pets.size(); i++) {
		if (file.is_open() && pets[i] != nullptr) { // 检查文件是否成功打开
			file << pets[i];
			qDebug() << "success";

		}
		else {
			qDebug() << "fail to open file";
		}
	}
	file.close(); // 关闭文件
}
void MainWindow::changeLabelImage(const QString& imagePath) {//更改图像
	QPixmap newPixmap(imagePath);
	newPixmap = newPixmap.scaled(QSize(400, 300), Qt::KeepAspectRatio, Qt::SmoothTransformation);
	label[buttonRow][buttonCol]->setPixmap(newPixmap);
	label[buttonRow][buttonCol]->setAlignment(Qt::AlignCenter);
}
void MainWindow::renewVector() {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 4; j++) {
			if (win[i][j] != nullptr && getLive(*win[i][j])) {
				win[i][j]->renewDate();
				update(*win[i][j]);
			}
		}
	std::ofstream file; // 创建输出文件流对象，打开文件
	file.open("output.txt");
	file << "location type     hunger  thirsty urinate feeling spirit  healthy life    live" << endl;
	for (int i = 0; i < pets.size(); i++) {
		if (file.is_open() && pets[i] != nullptr) { // 检查文件是否成功打开
			file << pets[i];
			qDebug() << "success";

		}
		else {
			qDebug() << "fail to open file";
		}
	}
	file.close(); // 关闭文件
}
void MainWindow::update(Pet& p) {
	if (getLife(p) <= 0 || !getLive(p)) {
		buttonRow = getx(p), buttonCol = gety(p);
		setLive(p, false);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab8.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s7.jpg");
		else
			changeLabelImage(":/pet/p7.jpg");
		return;
	}//如果生命值<=0或者生命状态为false，将生命状态设置为false并更改图像

	if (getHunger(p) >= 60) {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab1.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/S1.jpg");
		else
			changeLabelImage(":/pet/p1.jpg");
	}
	else if (getThirsty(p) >= 30) {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab2.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s2.jpg");
		else
			changeLabelImage(":/pet/p2.jpg");
	}
	else if (getUrinate(p) >= 40) {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab6.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s3.jpg");
		else
			changeLabelImage(":/pet/p3.jpg");
	}
	else if (getFeeling(p) <= 50) {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab4.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s4.jpg");
		else
			changeLabelImage(":/pet/p4.jpg");
	}
	else if (getSpirit(p) <= 60) {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab7.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s5.jpg");
		else
			changeLabelImage(":/pet/p5.jpg");
	}
	else if (getHealthy(p) <= 70) {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/Lab5.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s6.jpg");
		else
			changeLabelImage(":/pet/p6.jpg");
	}
	else {
		buttonRow = getx(p), buttonCol = gety(p);
		if (getType(p) == "Labrador")
			changeLabelImage(":/pet/lab.jpg");
		else if (getType(p) == "Civet")
			changeLabelImage(":/pet/s.jpg");
		else
			changeLabelImage(":/pet/p.jpg");
	}
}
void MainWindow::onViewAllButtonClicked()
{
	QDir currentDir = QDir::current();
	QString filePath = currentDir.filePath("output.txt");
	QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));//打开存储宠物信息的文件
}