#include "Garancija.h"

void Garancija::brisi(){
	Elem* tek = prvi;
	Elem* stari = nullptr;
	while (tek) {
		stari = tek;
		tek = tek->sled;
		delete stari;
	}
}

void Garancija::kopiraj(const Garancija& g){
	pocetak = g.pocetak;
	istek = g.istek;
	Elem* novi = nullptr;
	Elem* posl = nullptr;
	Elem* tek = g.prvi;
	while (tek) {
		novi = new Elem(tek->kvar);
		if (!prvi) prvi = novi;
		else {
			posl->sled = novi;
			posl = novi;
		}
		tek = tek->sled;
	}
}

void Garancija::premesti(Garancija& g){
	pocetak = g.pocetak;
	istek = g.istek;
	prvi = g.prvi;
	g.prvi = nullptr;
}

Garancija::Garancija(const Garancija& g){
	kopiraj(g);
}

Garancija::Garancija(Garancija&& g){
	premesti(g);
}

Garancija::~Garancija(){
	brisi();
}

Garancija& Garancija::operator=(const Garancija& g)
{
	if (this != &g) {
		brisi();
		kopiraj(g);
	}
	return *this;
}

Garancija& Garancija::operator=(Garancija&& g)
{
	if (this != &g) {
		brisi();
		premesti(g);
	}
	return *this;
}

void Garancija::dodajkvar(Kvar* k){
	Elem* pom = new Elem(k);
	if (k->dohvdatum()< istek) {
		if (prvi) {
			if (dohvposlednji()->dohvotklonjen()) {
				pom->sled = prvi;
			}
			else return;
		}
	prvi = pom;
	}
}

int Garancija::dohvbrojkvarova() const{
	int sum = 0;
	Elem* tek = prvi;
	while (tek != nullptr) {
		sum++;
		tek = tek->sled;
	}
	return sum;
}

Kvar* Garancija::dohvposlednji(){
	return prvi->kvar;	//jer dodajes na pocetak liste
	/*Elem* tek = prvi;
	while (tek->sled != nullptr) {
		tek = tek->sled;
	}
	return tek->kvar;*/
}

ostream& operator<<(ostream& os, const Garancija& gar){
	return os << gar.pocetak << "-" << gar.istek << "-" << "Broj kvarova:" << gar.dohvbrojkvarova()<<endl;
}
