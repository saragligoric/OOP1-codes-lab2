#include "Piksel.h"

Piksel::Piksel(int crvena, int plava, int zelena){
	if (crvena >= 0 && crvena <= 255) {
		red = crvena;
	}
	else red = 0;
	if (plava >= 0 && plava <= 255) {
		green = plava;
	}
	else green = 0;
	if (zelena >= 0 && zelena <= 255) {
		blue = zelena;
	}
	else blue = 0;
}

ostream& operator<<(ostream& os, const Piksel& p){
	return os << "("<< p.red << " " << p.green << " " << p.blue<<")"<<"  ";
}

Piksel operator+(const Piksel& p1, const Piksel& p2)
{
	return Piksel((p1.red + p2.red) / 2, (p1.green + p2.green) / 2, (p1.blue + p2.blue) / 2);
}

bool operator==(const Piksel& p1, const Piksel& p2){
	if (p1.red != p2.red) return false;
	if (p1.green != p2.green) return false;
	if (p1.blue != p2.blue) return false;
	else return true;
}
