#include "Plush.h"
Plush::Plush(int buttonRow, int buttonCol)
{
	x = buttonRow; y = buttonCol;
	type = "Plush";
	hunger = 100, thirsty = 0, urinate = 0;
	feeling = 0, spirit = 0, healthy = 90;
	life = 12;
}

Plush::~Plush()
{
}
