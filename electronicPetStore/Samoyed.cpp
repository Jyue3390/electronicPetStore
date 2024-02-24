#include "Samoyed.h"

Samoyed::Samoyed(int buttonRow, int buttonCol)
{
	x = buttonRow; y = buttonCol;
	//name = s;
	type = "Samoyed";
	hunger = 25, thirsty = 35, urinate = 30;
	feeling = 80, spirit = 92, healthy = 94;
	life = 12;
}

Samoyed::~Samoyed()
{
}
