#pragma once
#include <string>

#include "Obavestenje.h"

using namespace std;

class Korisnik{
	string ime;
public:
	string getime() { return ime; }

	Korisnik(string i) { ime = i; }
	Korisnik(const Korisnik& k) = delete;
	Korisnik& operator=(const Korisnik k) = delete;

	friend ostream& operator<< (ostream& os, const Korisnik& k);

	//Корисник може да пошаље обавештење другом кориснику као и да прими обавештење.
	
};

