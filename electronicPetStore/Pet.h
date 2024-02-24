#pragma once

#include<cstring>
#include<string>
#include<iostream>
#include<iomanip>
#include<vector>
#include<fstream>
#include<qdebug.h>
using namespace std;

class Pet
{
protected:
	bool live = true;
	int x, y;
	string type;
	int hunger, thirsty, urinate, feeling, spirit, healthy, life;
public:
	Pet() {}
	Pet(int, int);
	~Pet();
	friend class MainWindow;
	virtual void update();//更新各个数值
	virtual void renewDate();
	friend ofstream& operator<<(ofstream& ofs, const Pet* obj) {
		ofs << setw(8) << left << getx(*obj) * 4 + gety(*obj) << setw(8) << left << obj->type
			<< setw(8) << left << obj->hunger << setw(8) << left << obj->thirsty
			<< setw(8) << left << obj->urinate << setw(8) << left << obj->feeling
			<< setw(8) << left << obj->spirit << setw(8) << left << obj->healthy
			<< setw(8) << left << obj->life << setw(8) << left << obj->live << endl;
		return ofs;
	}

	void care(int t);
	friend void setLive(Pet& pet, bool);
	friend bool getLive(const Pet& pet);
	friend string getType(const Pet& pet);
	friend int getHunger(const Pet& pet);
	friend int getThirsty(const Pet& pet);
	friend int getUrinate(const Pet& pet);
	friend int getFeeling(const Pet& pet);
	friend int getSpirit(const Pet& pet);
	friend int getHealthy(const Pet& pet);
	friend int getLife(const Pet& pet);
	friend int gety(const Pet& pet);
	friend int getx(const Pet& pet);
};