#include <iomanip>

#include "Obavestenje.h"
#include "Objava.h"

#include "Korisnik.h"//

int Obavestenje::curr_id = 0;

ostream& operator<<(ostream& os, const Obavestenje& o){
	 os << o.id << "|" <<o.k->getime()<<"-" << setw(2) << setfill('0') << o.sat << ":" <<
		setw(2) << setfill('0') << o.min << ":" << setw(2) << setfill('0') << o.sek << endl;
	o.pisi(os);
	return os;
}
