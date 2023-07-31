#include "Kvar.h"

void Kvar::postaviotklonjen(int kv){
	(kv == 1) ? otklonjen = true : otklonjen = false;
}

ostream& operator<<(ostream& os, const Kvar& kv){
	return os << kv.datum << "-" << kv.opis <<"-"<<(kv.otklonjen==true?"otklonjen":"neotklonjen") <<endl;
}
