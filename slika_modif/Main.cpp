#include "Piksel.h"
#include "Pozicija.h"
#include "Slika.h"
#include "Crnobelaslika.h"
#include "Vreme.h"
#include "Sarenaslika.h"
#include "Slikanijanse.h"
#include "Galerija.h"
#include "Uredjenagalerija.h"
#include <iostream>

using namespace std;

int main() {
	//Piksel piksel1(10, 29, 74);
	//Piksel piksel2(251, 63, 98);
	//Piksel piksel3(87, 50, 69);
	//Piksel piksel4(87, 50, 69);
	//Piksel piksel5(250, 250, 250);
	//cout << piksel1 << piksel2 << piksel3 << endl;
	//cout << piksel1 + piksel2 << endl;
	//cout << ((piksel1 == piksel2) ? "isti su" : "razliciti su");
	//cout << endl;
	//cout << ((piksel3 == piksel4) ? "isti su" : "razliciti su");
	//cout << endl;

	////Matrica indeksira sa nulom, zato i pozicije indeksiraju tako
	//Pozicija poz1(0, 1), poz2(1, 0), poz3(2, 2);
	//cout << poz2 - poz1 << endl;


	////modifikacija
	//Vreme vreme1(3, 50, 36);
	//Vreme vreme2(2, 40, 59);
	//Vreme vreme3;
	//cout << vreme1 << endl;
	//cout << vreme2 << endl;
	//cout << vreme3 << endl;
	//cout << (vreme1 > vreme2 ? "vreme1 je vece" : "vreme2 je vece") << endl;

	//Slika slika1(3, 3, vreme1);
	//cout << slika1;
	//cout << endl << slika1.size() << endl;
	//slika1.postavipiksel(piksel1, poz1);
	//slika1.postavipiksel(piksel2, poz2);
	//slika1.postavipiksel(piksel3, poz3);
	//cout << "slika1" << endl;
	//cout << slika1 << endl;
	//cout << slika1[poz1];

	//Crnobelaslika cb1(3, 3, vreme2);
	//cout << "cb1" << endl;
	//cout << cb1;
	//cb1.postavipiksel(piksel5, poz3);
	//cout << "cb1 posle postavljanja piksela" << endl;
	//cout << cb1;
	//cout << endl;

	//cout << "Sarena slika" << endl;
	//Sarenaslika ss1(3, 3, vreme3);
	//cout << "ss1" << endl;
	//cout << ss1;
	//ss1.postavipiksel(piksel5, poz3);
	//cout << "ss1 posle postavljanja piksela" << endl;
	//cout << ss1;
	//cout << "ss2" << endl;
	//Sarenaslika ss2(slika1, cb1);
	//cout << ss2;

	//cout << endl;
	//cout << "Slika nijanse" << endl;
	//Slikanijanse nijanse1(3, 3, vreme1);
	//cout << nijanse1;
	//Pozicija pozn(0, 0);
	//nijanse1.postavipiksel(piksel1, pozn);
	//cout << "Slika nijanse posle postavljanja piksela" << endl;
	//cout << nijanse1;
	////sve dobro
	///*cout << "Konverzija slike" << endl;
	//cout<<(nijanse1.operator()(nijanse1));*/


	//cout <<endl<<endl<< "galerija" << endl;
	//Galerija g1;
	//g1 += &slika1;
	//g1 += &cb1;
	//g1 += &ss1;
	//cout << g1;
	//cout << endl << "Broj elemenata je: " << g1.dohvbroj()<<endl;
	//cout << g1[2];
	////dovde sve ful
	//cout << slika1.size() << " " << cb1.size() << " " << ss1.size() << endl;
	//cout << g1.dohvvelicinu()<<endl;

	//cout << "Uredjena lista" << endl;
	//Uredjenagalerija u1;
	//u1 += &slika1;
	//u1 += &cb1;
	//u1 += &ss1;

	//u1 += &nijanse1;

	//cout << u1;

	//Написати главну функцију која направи неколико слика различитог типа димензија 2x2 и
	//дода их у уређену галерију коју потом испише.Креирати једну шарену слику на основу 2
	//	друге слике и потом је исписати.
	Pozicija poz1(0, 1), poz2(1, 0), poz3(1,1);
	Piksel piksel1(10, 29, 74);
	Piksel piksel2(251, 63, 98);
	Piksel piksel3(87, 50, 69);
	Piksel piksel4(250, 250, 250);
	Vreme vreme1(3, 50, 36);
	Vreme vreme2(2, 40, 59);
	Vreme vreme3;
	cout << "Ispis galerije: " << endl;
	Crnobelaslika cb1(2, 2, vreme1);
	cb1.postavipiksel(piksel1, poz1);
	cb1.postavipiksel(piksel2, poz2);
	Sarenaslika ss1(2, 2, vreme2);
	Slikanijanse sn1(2, 2, vreme3);
	sn1.postavipiksel(piksel3, poz3);
	Galerija g1;
	g1 += &cb1;
	g1 += &ss1;
	g1 += &sn1;
	cout << g1<<endl;
	cout << "Sarena slika na osnovu druge dve slike: " << endl;
	Sarenaslika ss2(cb1, sn1);
	cout << ss2;
};