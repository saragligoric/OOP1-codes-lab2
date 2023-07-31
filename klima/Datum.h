#include <iostream>

using namespace std;

#ifndef _Datum_h_
#define _Datum_h_

class Datum {
	int dan, mesec, godina;

public:
	Datum(int d = 30, int m = 11, int g = 2019);

	friend ostream& operator<<(ostream& os, const Datum& dat);
	int operator[](string indeks);
	friend bool operator<(Datum dat1, Datum dat2);	//vraca true ako je datum1 pre datuma2
};

#endif