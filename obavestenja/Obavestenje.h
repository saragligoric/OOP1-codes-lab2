#pragma once

#include <string>
#include <iostream>

//#include "Korisnik.h"
#include "Windows.h"

using namespace std;

class Korisnik;//


class Obavestenje{
protected:
	static int curr_id;
	int id = (++curr_id);
	int sat, min, sek;
	bool read = false;
	Korisnik* k=nullptr;

private:
	virtual void pisi(ostream& os) const=0;

public:
	Obavestenje(Korisnik* kk) {
		k = kk;
		SYSTEMTIME time;
		GetLocalTime(&time);
		sat = time.wHour;
		min = time.wMinute;
		sek = time.wSecond;
	}

	friend ostream& operator<<(ostream& os, const Obavestenje& o);
	Korisnik* getkor() { return k; }
	int getid() { return id; }

	void setread() { read = true; }
	bool ifread() { return read; }
};

