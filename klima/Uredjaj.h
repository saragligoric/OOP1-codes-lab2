#include "Garancija.h"
#include "Datum.h"

#ifndef _Uredjaj_h_
#define _Uredjaj_h_

#include <iostream>

using namespace std;

class Uredjaj {
protected:
	string proizvodjac;
	static int curr_id;
	int id;
	Garancija gar;

public:
	Uredjaj(string ime) :proizvodjac(ime), id(curr_id++) {};
	Uredjaj(const Uredjaj& u) = delete;

	Garancija& dohvgar();

	virtual void postavigar(Datum datpoc);
	virtual int dohvbrojkv() const = 0;

	bool operator==(Uredjaj& u);

	friend ostream& operator<<(ostream& os, Uredjaj& u);
	virtual void pisi(ostream& os);
};

#endif