#include "Uredjenagalerija.h"

void Uredjenagalerija::operator+=(Slika* s){
	//prema vremenu nastanka u rastucem poretku
	Elem* tek = prvi;
	Elem* preth = nullptr;
	Elem* novi = new Elem(s);

	if (!prvi) {
		prvi = novi;
	}
	else {
		while (tek && (novi->slika->getvreme() > tek->slika->getvreme())) {	//s vece od tek
			preth = tek;
			tek = tek->sled;
		}
		if (!preth) {
			novi->sled = prvi;
			prvi = novi;
		}
		else {
			preth->sled = novi;
			novi->sled = tek;
		}
	}
}
