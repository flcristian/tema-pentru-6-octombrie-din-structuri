#include "functii-baza.h"

// Problema 1

void citirePb1(eleviPb1 x[], int& n) {
	ifstream f("pb-elevi.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		eleviPb1 elev;
		f >> elev.nume;
		f >> elev.prenume;
		f >> elev.medie;
		f >> elev.teza;

		x[i] = elev;
	}
}

void mediiSemestriale(eleviPb1 x[], int n, int medii[]) {
	for (int i = 0; i < n; i++) {
		medii[i] = x[i].notaSemestriala();
	}
}

void mediaClaseiSiNotaMax(int medii[], int n, int& max, double& medieClasa) {
	int s = 0;
	max = medii[0];
	for (int i = 0; i < n; i++) {
		s += medii[i];
		if (medii[i] > max) {
			max = medii[i];
		}
	}
	medieClasa = (double)s / n;
}

void afisareRaspunsPb1(eleviPb1 x[], int medii[], int n, int max, int medieClasa) {
	cout << "Media clasei este " << medieClasa << ", iar elevii cu nota maxima sunt :" << endl;
	for (int i = 0; i < n; i++) {
		if (x[i].notaSemestriala() == max) {
			cout << x[i].nume << " " << x[i].prenume << endl;
		}
	}

}

// Problema 2