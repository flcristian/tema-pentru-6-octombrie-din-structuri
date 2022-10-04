#include "structuri.h"

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

// Problema 1

// -=-=-=-=-=-

// Problema 2

