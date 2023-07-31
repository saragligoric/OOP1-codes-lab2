#include "Uredjaj.h"
#include "Datum.h"

int Uredjaj::curr_id = 1;

Garancija& Uredjaj::dohvgar(){
	return gar;
}

void Uredjaj::postavigar(Datum datpoc){
	gar = Garancija(datpoc, Datum());
}

bool Uredjaj::operator==(Uredjaj& u){
	return this->proizvodjac == u.proizvodjac;
}

void Uredjaj::pisi(ostream& os){
	os << proizvodjac << ":" << id;
}

ostream& operator<<(ostream& os, Uredjaj& u){
	u.pisi(os);
	return os;
}
