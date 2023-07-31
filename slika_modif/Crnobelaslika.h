#ifndef _Crnobelaslika_h_
#define _Crnobelaslika_h_

#include "Slika.h"
#include "Vreme.h"

class Crnobelaslika: public Slika {
	//int m, n; Piksel** mat;

public:
	Crnobelaslika(int visina, int sirina, Vreme v) : Slika(visina, sirina, v) {};

	void postavipiksel(Piksel piks, Pozicija& poz) override;
};

#endif
