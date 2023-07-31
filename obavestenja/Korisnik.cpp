#include "Korisnik.h"

ostream& operator<<(ostream& os, const Korisnik& k){
	return os << k.ime;
	//korisnik se ispisuje na specifican nacin
}
