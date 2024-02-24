#include "Civet.h"

Civet::Civet(int buttonRow, int buttonCol)
{
	x = buttonRow; y = buttonCol;
	type = "Civet";
	hunger = 0, thirsty = 0, urinate = 60;
	feeling = 100, spirit = 100, healthy = 94;
	life = 10;
}

Civet::~Civet()
{
}
