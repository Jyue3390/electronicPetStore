#include "Pet.h"

Pet::Pet(int buttonRow, int buttonCol)
{
	x = buttonRow; y = buttonCol;
	type = "Pet";
	hunger = 25, thirsty = 35, urinate = 30;
	feeling = 80, spirit = 92, healthy = 94;
	life = 10;
}
Pet::~Pet()
{
}
void Pet::update()
{
	hunger += 1;
	thirsty += 2;
	urinate += 3;
	feeling -= 3;
	spirit -= 1;
	healthy -= 2;
}
void Pet::renewDate() {
	int cnt = 0;
	if (live) {
		update();
		cnt++;
		life--;
		if (life == 0 || healthy <= 0)
			live = false;
	}
}
void Pet::care(int t)
{
	if (this == nullptr)
		return;
	switch (t)
	{
	case 1:
		hunger = 0;
		qDebug() << 1;
		break;
	case 2:
		thirsty = 0; qDebug() << 2;
		break;
	case 3:
		urinate = 0; qDebug() << 3;
		break;
	case 4:
		feeling += 20; qDebug() << 4;
		break;
	case 5:
		spirit = 100; qDebug() << 5;
		break;
	case 6:
		healthy += 20; qDebug() << 6;
		break;
	case 7:
		live = false; qDebug() << "sell";
		break;

	default:
		break;
	}
}
void setLive(Pet& pet, bool b) {
	pet.live = b;
}
bool getLive(const Pet& pet) {
	return pet.live;
}
string getType(const Pet& pet) {
	return pet.type;
}
int getHunger(const Pet& pet) {
	return pet.hunger;
}
int getThirsty(const Pet& pet) {
	return pet.thirsty;
}
int getUrinate(const Pet& pet) {
	return pet.urinate;
}
int getFeeling(const Pet& pet) {
	return pet.feeling;
}
int getSpirit(const Pet& pet) {
	return pet.spirit;
}
int getHealthy(const Pet& pet) {
	return pet.healthy;
}
int getLife(const Pet& pet) {
	return pet.life;
}
int getx(const Pet& pet) {
	return pet.x;
}
int gety(const Pet& pet) {
	return pet.y;
}