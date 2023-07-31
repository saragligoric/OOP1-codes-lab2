#include "Klima.h"

int Klima::brojkvarovazanovi = 2;

void Klima::postavigar(Datum datpoc){
	gar = Garancija(datpoc, Datum(datpoc["dan"], datpoc["mesec"], datpoc["godina"]+5));
}

void Klima::pisi(ostream& os){
	Uredjaj::pisi(os);
	os << "#klima#" << "-" << kvadrati << endl;
}

bool Klima::operator==(Klima& u){
	return this->proizvodjac == u.proizvodjac && this->kvadrati == u.kvadrati;
}

