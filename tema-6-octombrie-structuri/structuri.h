#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct eleviTipA {
	string nume;
	string prenume;
	int medie;
	int teza;

	int notaSemestriala() {
		return round((double) ((3 * medie) + teza) / 4);
	}
};

struct sportiviTipA {
	int luna;
	int an;
	
	int varsta() {
		return ((2022 - an) * 12) + (10 - luna);
	}
};
