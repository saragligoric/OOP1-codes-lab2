#pragma once
#include <iostream>

using namespace std;

class Vreme{
	int sat, min, sek;
public:
	Vreme(int s=0, int m=0, int sk=0);
	friend ostream& operator<<(ostream& os, const Vreme& v);
	friend bool operator>(const Vreme& v1, const Vreme& v2);
};

