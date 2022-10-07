#include "functii-baza.h"

struct Punct {
	int x;
	int y;

	double distantaOrigine() {
		return (double)sqrt(pow(x, 2) + pow(y, 2));;
	}

	double distancePoint(Punct p) {
		return (double)sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
	}

	
};

struct Dreapta {

	Punct p1;  // A
	Punct p2;  // B

	// Verificam daca un punct apartine dreptei.

	bool apartineDreptei(Punct p) {
		if ((p.x - p1.x) / (p2.x - p1.x) == (p.y - p1.y) / (p2.y - p1.y)) {
			return true;
		}
		return false;
	}

	// Lungime dreapta.

	double lungimeDreapta() {
		return (double)p1.distancePoint(p2);
	}

	// Distanta de la punct la dreapta.

	double distanta(Punct p) {
		return (abs((p.x - p1.x) * (p2.y - p1.y) - (p.y - p1.y) * (p2.x - p1.x))) / sqrt(pow((p2.y - p1.y), 2) + pow((p1.x - p2.x), 2));
	}
};

void atribuireValoriTriunghi(Dreapta& AB, Dreapta& AC, Dreapta& BC, Punct a, Punct b, Punct c) {
	AB.p1 = a;
	AB.p2 = b;
	AC.p1 = a;
	AC.p2 = c;
	BC.p1 = b;
	BC.p2 = c;
}

struct Triunghi {
	Punct a;
	Punct b;
	Punct c;

	// Verificam daca apartine punctul triunghiului.

	bool apartineTriunghiului(Punct p) {
		Dreapta AB;
		Dreapta AC;
		Dreapta BC;
		atribuireValoriTriunghi(AB, AC, BC, a, b, c);
		if ((a.distancePoint(p) > a.distancePoint(b) || a.distancePoint(p) > a.distancePoint(c)) || (b.distancePoint(p) > b.distancePoint(c) || b.distancePoint(p) > b.distancePoint(a)) || (c.distancePoint(p) > c.distancePoint(a) || c.distancePoint(p) > c.distancePoint(b))) {
			return 1;
		}
		return 0;
	}
};

struct Elev {
	string nume;
	string prenume;
	double media1;
	double media2;
	string clasa;

	double mediaAnuala() {
		return (double)(media1 + media2) / 2;
	}
};


