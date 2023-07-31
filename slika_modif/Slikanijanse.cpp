#include "Slikanijanse.h"
#include "Crnobelaslika.h"

void Slikanijanse::postavipiksel(Piksel piks, Pozicija& poz){
	int aritm = (piks.getred() + piks.getgreen() + piks.getblue()) / 3;
	this->operator[](poz) = Piksel(aritm, aritm, aritm);
}

//Crnobelaslika& Slikanijanse::operator()(Slikanijanse& siva){
//	//iskopiraj sivu u temp
//	//napravi sivu da bude crnobelaslika
//	//kopiraj i vrati na kraju sivu

//	Crnobelaslika cb(siva.getm(), siva.getn(), siva.getvreme());
//	/*cout << "ispis1" << endl;
//	cout << cb;*/
//	for (int i = 0; i < siva.getm(); i++) {
//		for (int j = 0; j < siva.getn(); j++) {
//			Pozicija poz(i, j);
//			int aritm = (siva.operator[](poz).getred() + siva.operator[](poz).getgreen() + siva.operator[](poz).getblue()) / 3;
//			if (aritm > 127) {
//				cb.postavipiksel(Piksel(255, 255, 255), poz);
//			}
//			else
//				cb.postavipiksel(Piksel(0, 0, 0), poz);
//			//Piksel piks(aritm,aritm,aritm);
//			//cb.postavipiksel(piks, poz);
//			/*cout << "ispis2" << endl;
//			cout << cb;*/
//		}
//	}
//	//cout << "kraj" << endl;
//
//	return cb;
//}
