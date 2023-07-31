#include "Pozicija.h"
#include <cmath>

int operator-(const Pozicija& p1, const Pozicija& p2){
	return abs(p1.vrsta-p2.vrsta)+abs(p1.kolona-p2.kolona);
}
