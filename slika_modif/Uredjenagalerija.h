#pragma once
#include "Galerija.h"

class Uredjenagalerija : public Galerija{

public:
	Uredjenagalerija() {};
	void operator+=(Slika* s)override;
};

