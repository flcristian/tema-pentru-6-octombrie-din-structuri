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

struct eleviTipB {
	string nume;
	string prenume;
	int varsta;
	double inaltime;
};

struct sportiviTipA {
	int luna;
	int an;
	
	int varsta() {
		return ((2022 - an) * 12) + (10 - luna);
	}
};

struct bursaTipA {
	string nume;
	string prenume;
	int nrmembrii;
	double venit;

	double venitPerMembru() {
		return (double)(venit / nrmembrii);
	}
};

struct fractieTipA {
	int numitor;
	int numarator;

	double valoare() {
		return (double) numitor / numarator;
	}
};

struct complexTipA {
	int reala;
	int imaginara;

	double modul() {
		double mod = (double)sqrt(pow(reala, 2) + pow(imaginara, 2));
		mod = (double)((int)(mod * 1000)) / 1000;
		return mod;
	}
};