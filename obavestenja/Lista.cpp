#include "Lista.h"

void Lista::brisi(){
	Elem* tek=prvi;
	Elem* old = nullptr;
	while (tek) {
		old = tek;
		tek = tek->sled;
		delete old;
	}
}

void Lista::operator+=(Obavestenje* o){
	prvi = new Elem(o, prvi);
}

void Lista::operator()(){
	Elem* tek = prvi;
	while (tek) {
		if (tek->ob->ifread() == false) {
			cout << *(tek->ob);
		}
		tek = tek->sled;
	}
}

int Lista::operator+(){
	int broj = 0;
	Elem* tek = prvi;
	while (tek) {
		if (tek->ob->ifread() == false) {
			broj++;
		}
		tek = tek->sled;
	}
	return broj;
}

void Lista::operator!(){
	Elem* tek = prvi;
	while (tek) {
		tek->ob->setread();
		tek = tek->sled;
	}
}

Obavestenje* Lista::operator[](int id){
	Elem* tek = prvi;
	while (tek) {
		if (tek->ob->ifread() == false && tek->ob->getid()==id) {
			return (tek->ob);
		}
	}
}

const Obavestenje* Lista::operator[](int id) const{
	Elem* tek = prvi;
	while (tek) {
		if (tek->ob->ifread() == false && tek->ob->getid() == id) {
			return (tek->ob);
		}
	}
}

ostream& operator<<(ostream& os, const Lista& l){
	Lista::Elem* tek = l.prvi;
	while (tek) {
		os << *(tek->ob)<<endl;
		tek = tek->sled;
	}
	return os;
}
