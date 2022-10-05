#include "functii-baza.h"

void afisareVectorDouble(double x[], int n) {
	cout << "x[" << n << "] = {";
	int c = n;
	for (int i = 0; i < n; i++) {
		cout << x[i];
		if (c > 1) {
			cout << ", ";
			c--;
		}
		else {
			cout << "}" << endl;
		}
	}
}

void afisareVectorInt(int x[], int n) {
	cout << "x[" << n << "] = {";
	int c = n;
	for (int i = 0; i < n; i++) {
		cout << x[i];
		if (c > 1) {
			cout << ", ";
			c--;
		}
		else {
			cout << "}" << endl;
		}
	}
}

void afisareVectorString(string x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << endl;
	}
}

void citireEleviTipA(eleviTipA x[], int& n) {
	ifstream f("pb-elevi.txt");
	f >> n;

	for (int i = 0; i < n; i++) {
		eleviTipA elev;
		f >> elev.nume;
		f >> elev.prenume;
		f >> elev.medie;
		f >> elev.teza;

		x[i] = elev;
	}
}

// Problema 1

void mediiSemestriale(eleviTipA x[], int n, int medii[]) {
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
	medieClasa = (double) s / n;
}

void afisareRaspunsPb1(eleviTipA x[], int medii[], int n, int max, double medieClasa) {
	cout << "Media clasei este " << medieClasa << ", iar elevii cu nota maxima sunt :" << endl;
	for (int i = 0; i < n; i++) {
		if (x[i].notaSemestriala() == max) {
			cout << x[i].nume << " " << x[i].prenume << endl;
		}
	}

}

// Problema 2

void atribuireIndiciSiMedii(eleviTipA x[], int n, int medii[], int indici[], int& m) {
	m = 0;
	for (int i = 0; i < n; i++) {
		int medie = x[i].notaSemestriala();
		if (medie >= 5) {
			indici[m] = i;
			medii[m] = medie;
			m++;
		}
	}
}

void sortareDescrescatorDupaMedie(int medii[], int indici[], int m) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < m - 1; i++) {
			if (medii[i] < medii[i + 1]) {
				int r1 = medii[i];
				int r2 = indici[i];
				medii[i] = medii[i + 1];
				medii[i + 1] = r1;
				indici[i] = indici[i + 1];
				indici[i + 1] = r2;
				flag = false;
			}
		}
	} while (flag == false);
}

void afisareRaspunsPb2(eleviTipA x[], int indici[], int m) {
	cout << "Elevii care au promovat in ordine descrescatoare a mediei sunt :" << endl;
	for (int i = 0; i < m; i++) {
		eleviTipA elev;
		elev = x[indici[i]];
		cout << elev.nume << " " << elev.prenume << " - " << elev.notaSemestriala() << endl;
	}
}

// Problema 3

void atribuieNumeSiPrenume(eleviTipA x[], int n, string nume[], string prenume[], int& m) {
	m = 0;
	for (int i = 0; i < n; i++) {
		if (x[i].notaSemestriala() < 5) {
			nume[m] = x[i].nume;
			prenume[m] = x[i].prenume;
			m++;
		}
	}
}

void afisareRaspunsPb3(string nume[], string prenume[], int m) {
	cout << "Elevii corigenti in ordine alfabetica sunt :" << endl;
	for (int i = 0; i < m; i++) {
		cout << nume[i] << " " << prenume[i] << endl;
	}
}

// Problema 4

void numeSiPrenumePb4(eleviTipA x[], int n, string nume[], string prenume[]) {
	for (int i = 0; i < n; i++) {
		nume[i] = x[i].nume;
		prenume[i] = x[i].prenume;
	}
}

void afisareRaspunsPb4(string nume[], string prenume[], int n) {
	cout << "Elevii ordonati alfabetic sunt :" << endl;
	for (int i = 0; i < n; i++) {
		cout << nume[i] << " " << prenume[i] << endl;
	}
}