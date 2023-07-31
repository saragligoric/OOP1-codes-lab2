#include "Datum.h"
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Datum& dat){
	return os << dat.dan << "." << dat.mesec << "." << dat.godina << ".";
}

bool operator<(Datum dat1, Datum dat2){
	if (dat1.godina < dat2.godina)return true;
	if (dat1.godina > dat2.godina) return false;
	if (dat1.godina = dat2.godina) {
		if (dat1.mesec < dat2.mesec)return true; 
		if (dat1.mesec > dat2.mesec)return false; 
		if (dat1.mesec = dat2.mesec) {
			if (dat1.dan < dat2.dan)return true;
			if (dat1.dan > dat2.dan)return false;
			if (dat1.dan = dat2.dan) return false;
		}
	}
}


Datum::Datum(int d, int m, int g){
	if (g > 0) godina = g;
	else g = 0;
	if (m > 0 && m <= 12) mesec = m;
	else m - 0;
	switch (m) {
	case 1:case 3:case 5:case 7:case 8: case 10: case 12:
		if (d > 0 && d <= 31) dan = d;
		else d = 0;
	case 4: case 6: case 9: case 11:
		if (d > 0 && d <= 30) dan = d;
		else d = 0;
	case 2:
		if (d > 0 && d <= 29) dan = d;
		else d = 0;
	}
}

int Datum::operator[](string indeks){
	if (indeks == "dan") return dan;
	if (indeks == "mesec") return mesec;
	if (indeks == "godina") return godina;
	else return - 1;
}
