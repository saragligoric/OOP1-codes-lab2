#ifndef _Klima_h_
#define _Klima_h_
#include "Uredjaj.h"

class Klima:public Uredjaj {
	int kvadrati;

	static int brojkvarovazanovi;

public:
	Klima(string ime, int kv) :Uredjaj(ime) {
		kvadrati = kv;
	}

	int dohvbrojkv() const override {
		return brojkvarovazanovi;
	}

	void postavigar(Datum datpoc) override;

	bool operator==(Klima& u);

	void pisi(ostream& os) override;
};

#endif

