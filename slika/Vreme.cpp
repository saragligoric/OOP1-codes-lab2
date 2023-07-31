#include "Vreme.h"

Vreme::Vreme(int s, int m, int sk){
	if (s >= 0 && s<=23) {
		sat = s;
	}
	if (m >= 0 && m < 60) {
		min = m;
	}
	if (sk >= 0 && sk < 60) {
		sek = sk;
	}
}

ostream& operator<<(ostream& os, const Vreme& v)
{
	return os << v.sat << ":" << v.min << ":" << v.sek << endl;
}

bool operator>(const Vreme& v1, const Vreme& v2)
{
	int sek1 = v1.sat * 3600 + v1.min * 60 + v1.sek;
	int sek2 = v2.sat * 3600 + v2.min * 60 + v2.sek;
	if (sek1 > sek2) return true;
	else return  false;
}
