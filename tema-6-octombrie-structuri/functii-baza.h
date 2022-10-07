#include "structuri.h"

int sortareString(string a, string b) {
	for (int i = 0; (a[i] > 64 && a[i] < 123) && (b[i] > 64 && b[i] < 123); i++) {
		if (a[i] < b[i]) {
			return 1;
		}
		if (a[i] > b[i]) {
			return 0;
		}

	}
	return -1;
}

void schimbarePozitiiNume(string nume[], string prenume[], int i, int j) {
	string r1 = nume[i];
	string r2 = prenume[i];
	nume[i] = nume[j];
	nume[j] = r1;
	prenume[i] = prenume[j];
	prenume[j] = r2;
}

void sortareAlfabeticaNume(string nume[], string prenume[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			int k = sortareString(nume[i], nume[i + 1]);
			if (k != -1) {
				if (k == 0) {
					schimbarePozitiiNume(nume, prenume, i, i + 1);
					flag = false;
				}
			}
			else {
				int j = sortareString(prenume[i], prenume[i + 1]);
				if (j != -1) {
					if (j == 0) {
						schimbarePozitiiNume(nume, prenume, i, i + 1);
						flag = false;
					}
				}
			}
		}
	} while (flag == false);
}

void schimbarePozitiiNumePb9(string nume[], string prenume[], double inaltimi[], int i, int j) {
	string r1 = nume[i];
	string r2 = prenume[i];
	double r3 = inaltimi[i];
	nume[i] = nume[j];
	nume[j] = r1;
	prenume[i] = prenume[j];
	prenume[j] = r2;
	inaltimi[i] = inaltimi[j];
	inaltimi[j] = r3;
}

void sortareAlfabeticaNumePb9(string nume[], string prenume[], double inaltimi[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			int k = sortareString(nume[i], nume[i + 1]);
			if (k != -1) {
				if (k == 0) {
					schimbarePozitiiNumePb9(nume, prenume, inaltimi, i, i + 1);
					flag = false;
				}
			}
			else {
				int j = sortareString(prenume[i], prenume[i + 1]);
				if (j != -1) {
					if (j == 0) {
						schimbarePozitiiNumePb9(nume, prenume, inaltimi, i, i + 1);
						flag = false;
					}
				}
			}
		}
	} while (flag == false);
}

int celMaiMareDivizorComun(int a, int b) {
	if (a > b) {
		int r = a;
		a = b;
		b = a;
	}

	for (int i = a; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

void sortareValoareFractie(int indici[], double valori[], int m) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < m - 1; i++) {
			if (valori[i] > valori[i + 1]) {
				double r1 = valori[i];
				int r2 = indici[i];
				valori[i] = valori[i + 1];
				indici[i] = indici[i + 1];
				valori[i + 1] = r1;
				indici[i + 1] = r2;
				flag = false;
			}
		}
	} while (flag == false);
}
