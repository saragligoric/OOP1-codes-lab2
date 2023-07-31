#include "Galerija.h"

void Galerija::brisi(){
	Elem* tek = prvi;
	Elem* stari = nullptr;
	while (tek) {
		stari = tek;
		tek = tek->sled;
		delete stari;
	}
}

void Galerija::kopiraj(const Galerija& g){
	Elem* novi = nullptr;
	Elem* posl = nullptr;
	Elem* tek = g.prvi;
	while (tek) {
		novi = new Elem(tek->slika);
		if (!prvi) prvi = novi;
		else {
			posl->sled = novi;
			posl = novi;
		}
		tek = tek->sled;
	}
}

void Galerija::premesti(Galerija& g){
	prvi = g.prvi;
	g.prvi = nullptr;
}

Galerija::Galerija(const Galerija& g){
	kopiraj(g);
}

Galerija::Galerija(Galerija&& g){
	premesti(g);
}

Galerija::~Galerija(){
	brisi();
}

Galerija& Galerija::operator=(const Galerija& g){
	if (this != &g) {
		brisi();
		kopiraj(g);
	}
	return *this;
}

Galerija& Galerija::operator=(Galerija&& g){
	if (this != &g) {
		brisi();
		premesti(g);
	}
	return *this;
}

void Galerija::operator+=(Slika* s){
	Elem* novi = new Elem(s);
	if (prvi==nullptr) {
		prvi = novi;
		posl = prvi;
	}
	else {
		posl->sled = novi;
		posl = novi;
	}
}

int Galerija::dohvbroj(){
	Elem* temp = prvi;
	int sum = 0;
	while (temp) {
		sum++;
		temp = temp-> sled;
	}
	return sum;
}

Slika& Galerija::operator[](int id){
	int brojac = 1;
	Elem* temp = prvi;
	while (temp && brojac<=id) {
		if (brojac == id) {
			return *(temp->slika);
		}
		else {
			brojac++;
			temp = temp->sled;
		}
	}
}

int Galerija::dohvvelicinu(){
	int sum = 0;
	Elem* tmp = prvi;
	while (tmp) {
		sum += (tmp->slika)->size();
		tmp = tmp->sled;
	}
	return sum;
}

ostream& operator<<(ostream& os, Galerija& g){
	//sve slike se ispisu u zasebnim redovima
	Galerija::Elem* temp = g.prvi;
	while (temp) {
		os << *(temp->slika);
		cout << endl;
		temp = temp->sled;
	}
	return os;
}
