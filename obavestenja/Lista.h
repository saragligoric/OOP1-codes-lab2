#pragma once
#include "Obavestenje.h"

class Lista {
	struct Elem {
		Obavestenje* ob;
		Elem* sled;
		Elem(Obavestenje* o, Elem* s = nullptr) :ob(o), sled(s) {}
	};
	Elem* prvi=nullptr;

	void brisi();

public:
	Lista() = default;
	Lista(const Lista&) = delete;
	Lista& operator=(const Lista& l) = delete;
	~Lista() { brisi(); };

	void operator+=(Obavestenje* o);
	void operator()();
	int operator+();
	void operator!();
	void operator~() { brisi(); }

	Obavestenje* operator[](int id);
	const Obavestenje* operator[](int id) const;

	friend ostream& operator<<(ostream& os, const Lista& l);
};