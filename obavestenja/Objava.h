#include "Obavestenje.h"
#include <string>
#include <iostream>

using namespace std;

#pragma once

class Objava : public Obavestenje{
protected:
	string tekst;
private:
	void pisi(ostream& os) const override;

public:
	Objava(Korisnik* k,string t) :Obavestenje(k) {
		tekst = t;
	}
};

