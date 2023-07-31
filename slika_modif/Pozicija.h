#ifndef _Pozicija_h_
#define _Pozicija_h_

class Pozicija {
	int vrsta, kolona;

public:
	Pozicija(int v, int k) : vrsta(v), kolona(k) {};

	int getvrsta() { return vrsta; }
	int getkolona() { return kolona; }

	friend int operator-(const Pozicija& p1, const Pozicija& p2);
};

#endif
