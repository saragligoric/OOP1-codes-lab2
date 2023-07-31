#ifndef _Slika_h_
#define _Slika_h_

#include "Piksel.h"
#include "Pozicija.h"
#include "Vreme.h"

class Slika {

protected:
	int m, n; //m visina, n sirina
	Piksel** mat;
	Vreme nastanak;

public:
	Slika() = default;
	Slika(int visina, int sirina, Vreme v);

	void brisi();
	void kopiraj(const Slika& s);
	void premesti(Slika& s);

	Slika(const Slika& s);
	Slika(Slika&& s);
	~Slika();

	Slika& operator=(const Slika& s);
	Slika& operator=(Slika&& s);

	int getm() { return m; }
	int getn() { return n; }
	//da li ovo smem?
	Vreme& getvreme() { return nastanak; }

	friend ostream& operator<<(ostream& os, const Slika& s);
	Piksel& operator[](Pozicija &p);

	virtual void postavipiksel(Piksel p, Pozicija& poz);

	int size();
};

#endif