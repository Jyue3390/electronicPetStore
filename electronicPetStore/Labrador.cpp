#include "Labrador.h"

Labrador::Labrador(int a, int b) {
	x = a, y = b;
	type = "Labrador";
	hunger = 30, thirsty = 40, urinate = 30;
	feeling = 90, spirit = 90, healthy = 95;
	life = 15;
}
Labrador::~Labrador() {
}
