#include "Datum.h"
#include "Kvar.h"

#ifndef _Garancija_h_
#define _Garancija_h_

class Garancija {
	Datum pocetak;
	Datum istek;
	struct Elem {
		Kvar* kvar;
		Elem* sled;
		Elem(Kvar* k, Elem* s = nullptr) :kvar(k), sled(s) {}
	};
	Elem* prvi = nullptr;

public:
	Garancija() {};
	Garancija(Datum dat1, Datum dat2) :pocetak(dat1), istek(dat2) {};

	void brisi();
	void kopiraj(const Garancija&);
	void premesti(Garancija&);

	Garancija(const Garancija& g);
	Garancija(Garancija&& g);
	~Garancija();
	Garancija& operator=(const Garancija& g);
	Garancija& operator=(Garancija&& g);

	void dodajkvar(Kvar* k);
	Kvar* dohvposlednji();

	int dohvbrojkvarova() const;

	friend ostream& operator<<(ostream& os, const Garancija& gar);
};

#endif
