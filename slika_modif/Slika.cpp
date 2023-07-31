#include "Slika.h"

Slika::Slika(int visina, int sirina, Vreme v) {		
	m = visina;
	n = sirina;
	mat = new Piksel* [m];
	for (int i = 0; i < m; i++) {
		mat[i] = new Piksel [n];
	}
	nastanak = v;
}

void Slika::brisi(){
	for (int i = 0; i < m; i++) {
		delete[] mat[i];
	}
	delete[] mat;
	mat = nullptr;
}

void Slika::kopiraj(const Slika& s){
	m = s.m;
	n = s.n;
	mat = new Piksel * [m];
	for (int i = 0; i < m; i++) {
		mat[i] = new Piksel[n];
		for (int j = 0; j < n; j++) {
			mat[i][j] = s.mat[i][j];
		}
	}
}

void Slika::premesti(Slika& s){ 
	m = s.m;
	n = s.n;
	mat = s.mat;
	s.mat = nullptr;
}	  
//s.m=0 s.n=0;

Slika::Slika(const Slika& s) {
		kopiraj(s);
}

Slika::Slika(Slika&& s){
	premesti(s);
}

Slika::~Slika(){
	brisi();
}

Slika& Slika::operator=(const Slika& s){
	if (this != &s) {
		brisi();
		kopiraj(s);
	}
	return *this;
}

Slika& Slika::operator=(Slika&& s){
	if (this != &s) {
		brisi();
		premesti(s);
	}
	return *this;
}

Piksel& Slika::operator[](Pozicija& p) {
	//Ako izlazim iz opsega, vracam crni piksel
	if (p.getvrsta() >= 0 && p.getvrsta() < m && p.getkolona() >= 0 && p.getkolona() < n) {
		return mat[p.getvrsta()][p.getkolona()];
	}
	else {
		Piksel p(0, 0, 0);
		return p;
	}
}

void Slika::postavipiksel(Piksel piks, Pozicija& poz){
	mat[poz.getvrsta()][poz.getkolona()] = piks;
}

//Ne treba samo *24
int Slika::size(){
	return m * n * 24;
}

ostream& operator<<(ostream& os, const Slika& s){	
	os << "Vreme nastanka je: ";
	os << s.nastanak<<" ";
	os << "Velicina u broju bitova je: ";
	os << s.m * s.n << endl;
	for (int i = 0; i < s.m; i++) {
		for (int j = 0; j < s.n; j++) {
			os << s.mat[i][j];
		}
		os << endl;
	}
	return os;
}
