#include <iostream>

using namespace std; 

#ifndef _Piksel_h_
#define _Piksel_h_

class Piksel {
	int red, green, blue;

public:
	Piksel(int crvena = 0, int plava = 0, int zelena = 0);

	int getred() { return red; }
	int getgreen() { return green; }
	int getblue() { return blue; }

	friend ostream& operator<<(ostream& os, const Piksel& p);
	friend Piksel operator+(const Piksel& p1, const Piksel&  p2);
	friend bool operator==(const Piksel& p1, const Piksel& p2);

	friend class Crnobelaslika;
};

#endif
