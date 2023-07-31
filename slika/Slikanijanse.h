#include "Slika.h"
#include "Crnobelaslika.h"
#include "POzicija.h"

#pragma once

class Slikanijanse: public Slika{
	//int m, n; 
	//Piksel** mat;
	//Vreme nastanak;
public:
	Slikanijanse(int v, int s, Vreme vr) :Slika(v, s, vr) {};	//topcina

	void postavipiksel(Piksel piks, Pozicija& poz) override;

	//Crnobelaslika operator()(Slikanijanse& siva);
};

