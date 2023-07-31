#include "Slika.h"

#pragma once

class Sarenaslika: public Slika{
	//int m, n;
	//Piksel** mat;
	//Vreme nastanak;
public:
	Sarenaslika(int visina, int sirina, Vreme v);
	Sarenaslika(Slika s1, Slika s2);

	void postavipiksel(Piksel piks, Pozicija& poz) override;
};

