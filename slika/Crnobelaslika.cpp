#include "Crnobelaslika.h"

void Crnobelaslika::postavipiksel(Piksel piks, Pozicija& poz) {
	if (((piks.getred() + piks.getblue() + piks.getgreen()) / 3) > 127){
		Slika::postavipiksel(Piksel(255, 255, 255), poz);
	}
	else 
		Slika::postavipiksel(Piksel(0,0,0), poz);
}
		
