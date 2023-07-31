#include "Datum.h"

#ifndef _Kvar_h_
#define _Kvar_h_

class Kvar {
	Datum datum;
	string opis;
	bool otklonjen;
public:
	Kvar(string opis, Datum& date) :datum(date), opis(opis) {};

	string dohvopis() const{ return opis; }
	Datum& dohvdatum() { return datum; }
	//Da li smem ovo, ne trazi se u tekstu?
	bool dohvotklonjen() { return otklonjen; }

	void postaviotklonjen(int kvar);

	friend ostream& operator<<(ostream& os, const Kvar& kv);
};

#endif