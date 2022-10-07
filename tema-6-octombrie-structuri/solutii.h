#include "functii.h"

// 1. Se considera o lista formata din datele
// referitoare la n elevi. Fiecarui elev i se 
// cunoaste numele si prenumele, media notelor
// de la oral la disciplina Informatica si nota
// din teza. Sa se creeze un program care afiseaza
// media pe clasa la disciplina informatica si
// numele elevilor care au obtinut cea mai mare nota
// semestriala.

void solutiepb1() {
	int n;
	int medii[100];
	eleviTipA x[100];
	citireEleviTipA(x, n);
	mediiSemestriale(x, n, medii);
	int max;
	double medieClasa;
	mediaClaseiSiNotaMax(medii, n, max, medieClasa);
	afisareRaspunsPb1(x, medii, n, max, medieClasa);
}

// 2. Se considera o lista formata din datele
// referitoare la n elevi. Fiecarui elev i se
// cunoaste numele si prenumele, media notelor
// de la oral la disciplina Informatica si
// nota din teza. Creati un program care afiseaza
// in ordinea descrescatoare a mediilor, numele
// si prenumele elevilor care au promovat la
// aceasta disciplina.

void solutiepb2() {
	int n, m;
	int medii[100], indici[100];
	eleviTipA x[100];
	citireEleviTipA(x, n);
	atribuireIndiciSiMedii(x, n, medii, indici, m);
	sortareDescrescatorDupaMedie(medii, indici, m);
	afisareRaspunsPb2(x, indici, m);
}


// 3. Se considera o lista formata din datele
// referitoare la n elevi. Fiecarui elev i se
// cunoaste numele si prenumele, media notelor
// de la oral la disciplina Informatica si
// nota din teza. Realizati un program care
// afiseaza in ordine alfabetica elevii
// corigenti la Informatica.

void solutiepb3() {
	int n, m;
	string nume[100], prenume[100];
	eleviTipA x[100];
	citireEleviTipA(x, n);
	atribuieNumeSiPrenume(x, n, nume, prenume, m);
	sortareAlfabeticaNume(nume, prenume, m);
	afisareRaspunsPb3(nume, prenume, m);
}

// 4. Pentru a scrie catalogul, dirigintele are
// nevoie de numele si prenumele elevilor. Sa se
// ordoneze aceste date alfabetic, dupa nume, iar
// elevii cu acelasi nume sa se ordoneze alfabetic
// dupa prenume.

void solutiepb4() {
	int n;
	string nume[100], prenume[100];
	eleviTipA x[100];
	citireEleviTipA(x, n);
	numeSiPrenumePb4(x, n, nume, prenume);
	sortareAlfabeticaNume(nume, prenume, n);
	afisareRaspunsPb4(nume, prenume, n);
}

// 5. Se cunoaste numarul de sportivi participanti la
// o competitie oarecare. Pentru fiecare dintre ei se
// cunoaste data nasterii (luna si anul). Cunoscandu-se
// data (luna si anul) la care se desfasoara competitia,
// sa se afiseze media de varsta a sportivilor,
// exprimata in acelasi mod. Afisati si lista datelor de
// nastere ale sportivilor cu varsta mai mica decat
// cea medie.

void solutiepb5() {
	int n;
	sportiviTipA x[100];
	citireSportiviTipA(x, n);
	double medie = mediaVarstei(x, n);
	afisareRaspunsPb5(x, medie, n);
}

// 6. Se citesc de la tastatura datele referitoare la m
// elevi: nume, prenume, numarul de membri ai familiei
// si venitul lunar al familiei. Un elev primeste bursa
// daca venitul pe fiecare membru al familie nu depaseste
// o valoare limitata L. Realizati un program care afiseaza
// elevii ce nu au dreptul la bursa, in ordine alfabetica.

void solutiepb6() {
	int n, m, L;
	string nume[100], prenume[100];
	bursaTipA x[100];
	citireBursaTipA(x, n);
	cout << "Introduceti limita pentru a primi bursa : ";
	cin >> L;
	atribuirePb6(x, n, L, nume, prenume, m);
	sortareAlfabeticaNume(nume, prenume, m);
	afisareRaspunsPb6(nume, prenume, m);
}

// 7. Se considera un sir de n fractii (numitor, numarator).
// Afisati numarul de fractii echivalente cu ultima citata.
// Exemplu pentru n = 4 si fractiile (3,5);(36,60);(2,4);(12,20).
// Se va afisa : 2.

void solutiepb7() {
	int n, numar;
	fractieTipA x[100];
	citireFractieTipA(x, n);
	rezolvarePb7(x, n, numar);
	cout << "Numarul fractilor cu aceasta proprietate este " << numar << "." << endl;
}

// 8. Pentru n numere complexe, caror li se cunosc partea
// reala si cea imaginiara, sa se afiseze in ordine
// crescatoare valorile modulelor ce nu apartin intervalului
// [a,b]. Valorile reale a si b se citesc de la tastatura.
// Modulele rezultate vor fi afisate cu 3 zecimale.

void solutiepb8() {
	int n, m;
	double module[100];
	complexTipA x[100];
	citireComplexTipA(x, n);
	int a, b;
	cout << "Valorea lui a trebuie sa fie mai mica decat cea a lui b." << endl;
	cout << "Introduceti a : ";
	cin >> a;
	cout << "Introduceti b : ";
	cin >> b;
	atribuireModule(x, n, module, m, a, b);
	bubbleSortDouble(module, m);
	afisareRaspunsPb7(module, m, a, b);
	
}

// 9. Pentru o clasa de n elevi se cunosc urmatoarele date:
// numele, prenumele, varsta si inaltimea. Se doreste
// realizarea unui tabel care sa cuprinda doar elevii care
// au implinit 14 ani si care au inaltimea cuprinsa in
// intervalul [h1,h2]. Elevii vor fi ordonati crescator
// dupa nume, iar in situatia unor nume identice, vor fi
// ordonati crescator dupa prenume. Se va afisa pentru fiecare
// elev numele, prenumele si inaltimea.

void solutiepb9() {
	int n, m;
	double h1, h2;
	double inaltimi[100];
	string nume[100], prenume[100];
	eleviTipB x[100];
	citireEleviTipB(x, n);
	cout << "Valoarea lui h1 trebuie sa fie mai mica decat cea a lui h2." << endl;
	cout << "Introduceti inaltimea h1 : ";
	cin >> h1;
	cout << "Introduceti inaltimea h2 : ";
	cin >> h2;
	atribuirePb9(x, n, nume, prenume, inaltimi, m, h1, h2);
	sortareAlfabeticaNumePb9(nume, prenume, inaltimi, m);
	afisareRaspunsPb9(nume, prenume, inaltimi, m);
}

// 10. Se considera un sir de n puncte in plan, pentru 
// fiecare cunoscandu-se coordonatele intregi (x,y). Sa 
// se realizeze un program care identifica un patrat de 
// latura n, in interiorul caruia se afla numarul maxim 
// de puncte. Punctele aflate pe laturile patratului se 
// vor considera in interiorul lui. Se vor afisa
// coordonatele coltului stanga-jos al patratului determinat
// care va fi obligatoriu unul dintre cele n puncte date.
// Exemplu pentru n = 5 si punctele :
// (-10,-5);(4,1);(3,3);(1,2);(10,8)
// Se va afisa : (1,2).

void solutiepb10() {
	int n;
	Punct x[100];
	citirePunct(x, n);
	int indice = maxPunctePatrat(x, n);
	afisareRaspunsPb10(x, indice);
}

// 11. Se considera un sir de n puncte in plan,
// pentru care fiecare cunoscandu-se coordonatele
// intregi (x,y). Sa se realizeze un program care 
// determina numarul maxim de puncte coliniare
// situate pe o dreapta paralela cu axa OX.
// Exemplu pentru n = 6 si punctele :
// (-10,-5);(4,-5);(3,3);(1,2);(10,3);(5,3)
// Se va afisa : 3.

void solutiepb11() {
	int n;
	Punct x[100];
	citirePunct(x, n);
	cout << "Numarul maxim de puncte coliniare pe o paralela axei Ox este " << maxColiniareParalelaOx(x, n) << "." << endl;
}

// 12. Se considera un sir de n puncte in plan, pentru
// fiecare cunoscandu-se coordonatele intregi (x,y).
// Sa se realizeze un program care determina numarul de
// puncte care se afla in afara unui triunghi, pentru
// care se cunosc coordonatele varfurilor sale. Punctele
// aflate pe laturile triunghiului se vor considera in
// interiorul lui.
// Exemplu pentru n = 6 si punctele :
// (0,1);(8,1);(4,2);(5,3);(5,8);(10,3)
// Si triunghiul cu varfurile :
// (1,1);(5,10);(10,1)
// Se va afisa : 2.

void solutiepb12() {
	int n;
	Punct x[100];
	Triunghi t;
	citirePbTriunghi(x, t, n);
	cout << catePuncteInTriunghi(x, t, n) << " puncte sunt inafara triunghiului." << endl;
}

// 13. Se considera un sir de n fractii identificate
// prin numitor si numarator. Sa se stearga toate
// fractiile ireductibile. Fractiile reductibile
// vor fi afisate in ordinea crescatoare a valorilor.
// In fisierul in.txt se va citi de pe fiecare linie
// perechea: numarator, numitor. Fractiile rezultate vor
// fi afisate in acelasi format in fisierul text out.txt.

void solutiepb13() {
	int n, m;
	int indici[100];
	double valori[100];
	fractieTipA x[100];
	citireFractieTipA(x, n);
	atribuireIndiciPb13(x, n, indici, valori, m);
	sortareValoareFractie(indici, valori, m);
	introducereFisierValoriPb13(x, indici, m);
}

// 14. Se considera doua fisiere note.txt si nume.txt.
// Unul contine pe fiecare linie cate doua numere 
// reprezentand notele la chimie ale unor elevi, iar pe 
// liniile corespunzatoare din celalalt fisier se afla
// numele acestora. Sa se creeze un nou fisier, final.txt,
// in care pe fiecare linie sa se regaseasca numele
// elevului si media la chimie exprimata cu doua zecimale.
// Cele doua valori vor fi despartite in cadrul
// liniilor prin cate un spatiu. Elevii vor fi scrisi
// in ordinea descrescatoare a mediilor, iar la medii egale, 
// crescator dupa nume.

void solutiepb14() {
	int n;
	eleviTipC x[100];
	citireEleviTipC(x, n);
	for (int i = 0; i < n; i++) {
		cout << x[i].nota1 << " " << x[i].nota2 << " " << x[i].mediaElevului() << endl;
	}
}

// 15. Intr-o scoala exista n clase de XII-a, fiecare
// cu cate m elevi. Pentru fiecare dintre acestia se 
// cunosc: numele si prenumele, clasa din care fac partre
// (identificata printr-o majuscula) si mediile semestriale.
// Realizati un program care afiseaza:
//	- numele si prenumele sefului de promotie;
//	- lista pe clase a elevilor care nu vor sustine
//    examenul de bacalaureat, ordonati dupa nume si
//    prenume.

// - - -