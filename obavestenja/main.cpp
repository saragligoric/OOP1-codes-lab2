#include <iostream>
#include <ctime>
#include<chrono>
#include "Obavestenje.h"
#include "Objava.h"
#include "Korisnik.h"
#include "Lista.h"

using namespace std;

int main() {
	Korisnik k1("Sara");
	cout << k1;
	Korisnik k2("Marija");
	cout << k2;
	Korisnik k3("Milica");
	cout << k3;

	Objava obj1(&k1,"Obavestenjce stagod");
	cout << obj1;
	Objava obj2(&k2, "Obavestenjce stagodddddd wtf");
	cout << obj2;
	Objava obj3(&k3, "Obavestenjce");
	cout << obj3;

	Lista l1;
	l1 += &obj1;
	l1 += &obj2;
	l1 += &obj3;
	cout << l1;
}