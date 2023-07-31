#include "Slika.h"

#pragma once

//opremi dinamicki
class Galerija{
protected:
	struct Elem {
		Slika* slika;
		Elem* sled;
		Elem(Slika* s, Elem* next = nullptr) :slika(s), sled(next) {}
	};
	Elem* prvi = nullptr;
	Elem* posl = nullptr;

public:
	void brisi();
	void kopiraj(const Galerija&);
	void premesti(Galerija&);

	Galerija() {};

	Galerija(const Galerija& g);
	Galerija(Galerija&& g);
	~Galerija();
	Galerija& operator=(const Galerija& g);
	Galerija& operator=(Galerija&& g);

	virtual void operator+=(Slika* s);

	friend ostream& operator<<(ostream&, Galerija& g);

	int dohvbroj();

	Slika& operator[](int id);

	int dohvvelicinu();
};

