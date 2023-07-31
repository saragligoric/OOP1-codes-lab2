#include "Sarenaslika.h"

Sarenaslika::Sarenaslika(int visina, int sirina, Vreme v):Slika(visina,sirina,v){
	//Ako uslov nije zadovoljen, stavljam crni piksel
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			Pozicija poy(i, j);
			Piksel p(rand() % 256, rand() % 256, rand() % 256);
			Pozicija poz1(i-1,j-1), poz2(i-1,j), poz3(i-1, j+1), poz4(i, j-1);
			if (!(p == (this->operator[](poz1))) && !(p == (this->operator[](poz2))) && !(p == (this->operator[](poz3))) && !(p == (this->operator[](poz4)))) {
				mat[i][j] = p;
			}
			else mat[i][j]=Piksel(0,0,0);
		}
	}
}

Sarenaslika::Sarenaslika(Slika s1, Slika s2){
	if (s1.getm() != s2.getm() && s1.getn() != s2.getn()) {
		cout << "Slike nemaju jednake dimenzije" << endl;
		return;
	}
	else {
		m = s1.getm();
		n = s1.getn();
		//uzima se vreme nastanka slike koja je kasnije nastala
		if (s1.getvreme() > s2.getvreme()) {
			nastanak = s1.getvreme();
		}
		else nastanak = s2.getvreme();
		//postavljanje piksela
		mat = new Piksel * [m];
		for (int i = 0; i < m; i++) {
			mat[i] = new Piksel[n];
			for (int j = 0; j < n; j++) {
				Pozicija poz(i, j);
				mat[i][j] = s1.operator[](poz)+s2.operator[](poz);
			}
		}
	}
}

void Sarenaslika::postavipiksel(Piksel piks, Pozicija& poz){
	int i = poz.getvrsta();
	int j = poz.getkolona();
	Pozicija poz1(i - 1, j - 1), poz2(i - 1, j), poz3(i - 1, j + 1), poz4(i, j - 1);
	if (!(piks == (this->operator[](poz1))) && !(piks == (this->operator[](poz2))) && !(piks == (this->operator[](poz3))) && !(piks == (this->operator[](poz4)))) {
		mat[i][j] = piks;
	}
	else mat[i][j] = Piksel(0, 0, 0);
	//mat[poz.getvrsta()][poz.getkolona()] = piks;
}
