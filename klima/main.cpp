#include "Datum.h"
#include "Kvar.h"
#include "Garancija.h"
#include "Uredjaj.h"
#include "Klima.h"

int main(){
	Datum dat1(9, 8, 2000);
	Datum dat2;
	Datum dat3(1, 12, 1995);
	Datum dat4(1, 12, 2020);
	cout << dat1<<dat2<<dat3<<endl;
	cout << dat1["mesec"]<< endl;
	cout << dat1["sklj"] << endl;
	if (dat2 < dat3) cout << "datum 1 je pre datuma dva"<<endl;
	else cout << "datum 2 je pre datuma jedan" << endl;

	Kvar kvar1("pokvaren televizor", dat1);
	Kvar kvar2("crkla dioida", dat1);
	Kvar kvar3("pokvaren program STO NECES", dat1);
	cout<<kvar1.dohvopis()<<endl;
	cout << kvar1.dohvdatum()<<endl;
	kvar1.postaviotklonjen(1);
	kvar2.postaviotklonjen(1);
	kvar3.postaviotklonjen(1);
	cout << kvar1;
	cout << kvar2;
	cout << kvar3;
	cout << endl;

	Garancija gar1(dat3, dat2);
	gar1.dodajkvar(&kvar1);
	gar1.dodajkvar(&kvar2);
	gar1.dodajkvar(&kvar3);
	cout << gar1;
	cout << *(gar1.dohvposlednji());
	cout << endl;

	//klasa je postala apstraktna
	/*Uredjaj uredjaj1("Samsung");
	Uredjaj uredjaj2("Nokia");
	uredjaj1.postavigar(dat1);
	cout << uredjaj1.dohvgar();

	cout << uredjaj1;
	cout << uredjaj2;
	cout << (uredjaj1 == uredjaj2 ? "isti su" : "razliciti su")<<endl;*/

	Klima klima1("rashladi meee", 100);
	Klima klima2("rashladi meee", 100);
	cout << klima1.dohvbrojkv()<<endl;
	klima1.postavigar(dat1);
	cout << klima1.dohvgar() << endl; 
	cout << klima1;
	cout << ((klima1 == klima2) ? "jednake" : "nejednake") << endl;
}