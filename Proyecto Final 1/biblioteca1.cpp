#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<ctype.h>
#include"biblioteca1.h"
#include<stdlib.h>

using namespace std;

void Saludo(char nombre[55]) {
	_strupr_s(nombre, 55);
	cout << "\t\tBienvenido al programa, " << nombre << ". \n\n";
}

char Menu1() {
	char opcion1[2];
	cout << "\t1. Ingresar como usuario.";
	cout << "\t2. Ingresar como trabajador.";
	cout << "\t3. Salir. \n\n";
	cout << "\tEscoja una opción: "; //cin.get(); cin.getline(opcion1,1);
	cin >> opcion1;

	while (opcion1[0] != '1' && opcion1[0] != '2' && opcion1[0] != '3') {
		cout << "\n\tSe ingresó una opción no válida: '" << opcion1 << "'.";
		opcion1[0] = '0';
		cout << "\n\tVolver a ingresar una opcion dentro del rango establecido [1-3]: "; cin >> opcion1;
	}
	return opcion1[0];
}

/*
int Menu2(){
	int opcion2;
	cout<<"


	return opcion2;
}
*/

char Menu3(int num_aleatorio) {
	char opcion3[2];
	cout << "1. Ver el lote del día.";
	cout << "\n2. Precio total del lote del día.";
	cout << "\n3. Comprar.";
	cout << "\n4. Volver al menú principal.";
	cout << "\n5. Salir.";
	cout << "\n6. Crear nuevo lote.";
	cout << "\nNum aleatorio: " << num_aleatorio;
	cout << "\nEscoger una opción: "; //cin.get(); cin.getline(opcion3,1);
	cin >> opcion3;
	//cin.getline(opcion3, 2, '\n');

	while (opcion3[0] != '1' && opcion3[0] != '2' && opcion3[0] != '3' && opcion3[0] != '4' && opcion3[0] != '5' && opcion3[0] != '6') {
		cout << "\nSe ingresó una opción no válida: '" << opcion3 << "'.";
		opcion3[0] = '0';
		cout << "\nVolver a ingresar una opcion dentro del rango establecido [1-5]: "; cin >> opcion3;
	}
	return opcion3[0];
}

void Lote1(double i13pm, double s21p, double xm11u, int i13pmc, int s21pc, int xm11uc, char nombreprod1[55], int ncantprod1, int nprecioprod1) {
	//if(i13pmc > 0 || s21pc > 0 || xm11uc > 0 || ncantprod1 > 0){
	//	cout<<"Lote número 1, que pertenece a celulares: ";
	//}
	if (i13pmc > 0) {
		cout << "\n\n1. Iphone 13 Pro Max (" << i13pmc << ") S/." << i13pm << " c/u.";
	}
	if (s21pc > 0) {
		cout << "\n2. Samsung S21 Plus (" << s21pc << ") S/." << s21p << " c/u.";
	}
	if (xm11uc > 0) {
		cout << "\n3. Xiaomi Mi 11 Ultra (" << xm11uc << ") S/." << xm11u << " c/u.";
	}
	if (i13pmc == 0 && s21pc == 0 && xm11uc == 0 && ncantprod1 == 0) {
		cout << "El lote se encuentra vacío.";
	}
	if (ncantprod1 > 0) {
		cout << "\n4. " << nombreprod1 << " (" << ncantprod1 << ") S/." << nprecioprod1 << " c/u.";
	}
	//cout<<"\n\n1. Iphone 13 Pro Max ("<<i13pmc<<") S/."<<i13pm<<" c/u.";
	//cout<<"\n2. Samsung S21 Plus ("<<s21pc<<") S/."<<s21p<<" c/u.";
	//cout<<"\n3. Xiaomi Mi 11 Ultra ("<<xm11uc<<") S/."<<xm11u<<" c/u.";
}

void Lote2(double r75800x, double i911900k, double tr3995wx, double iw3375, int r75800xc, int i911900kc, int tr3995wxc, int iw3375c, char nombreprod2[55], int ncantprod2, int nprecioprod2) {
	//if(r75800xc > 0 || i911900kc > 0 || tr3995wxc > 0 || iw3375c > 0 || ncantprod2 > 0){
	//	cout<<"Lote número 2, que pertenece a procesadores: ";
	//}
	if (r75800xc > 0) {
		cout << "\n\n1. Ryzen 7 5800x (" << r75800xc << ") S/." << r75800x << " c/u.";
	}
	if (i911900kc > 0) {
		cout << "\n2. Intel i9 11900k (" << i911900kc << ") S/." << i911900k << " c/u.";
	}
	if (tr3995wxc > 0) {
		cout << "\n3. Ryzen Threadtripper Pro 3995WX (" << tr3995wxc << ") S/." << tr3995wx << " c/u.";
	}
	if (iw3375c > 0) {
		cout << "\n4. Intel Xeon W-3375 (" << iw3375c << ") S/." << iw3375 << " c/u.";
	}
	if (r75800xc == 0 && i911900kc == 0 && tr3995wxc == 0 && iw3375c == 0 && ncantprod2 == 0) {
		cout << "El lote se encuentra vacío.";
	}
	if (ncantprod2 > 0) {
		cout << "\n5. " << nombreprod2 << " (" << ncantprod2 << ") S/." << nprecioprod2 << " c/u.";
	}
	//cout<<"\n\n1. Ryzen 7 5800x ("<<r75800xc<<") S/."<<r75800x<<" c/u.";
	//cout<<"\n2. Intel i9 11900k ("<<i911900kc<<") S/."<<i911900k<<" c/u.";
	//cout<<"\n3. Ryzen Threadtripper Pro 3995WX ("<<tr3995wxc<<") S/."<<tr3995wx<<" c/u.";
	//cout<<"\n4. Intel Xeon W-3375 ("<<iw3375c<<") S/."<<iw3375<<" c/u.";
}

void Lote3(double rtx3060, double rx6800, double rtx3070ti, double rx6900xt, double rtx3090, int rtx3060c, int rx6800c, int rtx3070tic, int rx6900xtc, int rtx3090c, char nombreprod3[55], int ncantprod3, int nprecioprod3) {
	//if(rtx3060c > 0 || rx6800c > 0 || rtx3070tic > 0 || rx6900xtc || rtx3090c > 0 || ncantprod3 > 0){
	//	cout<<"Lote número 3, que pertenece a tarjetas de vídeo: ";
	//}
	if (rtx3060c > 0) {
		cout << "\n\n1. Nvidia Rtx 3060 (" << rtx3060c << ") S/." << rtx3060 << " c/u.";
	}
	if (rx6800c > 0) {
		cout << "\n2. Amd Rx 6800 (" << rx6800c << ") S/." << rx6800 << " c/u.";
	}
	if (rtx3070tic > 0) {
		cout << "\n3. Nvidia Rtx 3070 ti (" << rtx3070tic << ") S/." << rtx3070ti << " c/u.";
	}
	if (rx6900xtc > 0) {
		cout << "\n4. Amd Rx 6900xt (" << rx6900xtc << ") S/." << rx6900xt << " c/u.";
	}
	if (rtx3090c > 0) {
		cout << "\n5. Nvidia Rtx 3090 (" << rtx3090c << ") S/." << rtx3090 << " c/u.";
	}
	if (rtx3060c == 0 && rx6800c == 0 && rtx3070tic == 0 && rx6900xtc == 0 && rtx3090c == 0 && ncantprod3 == 0) {
		cout << "El lote se encuentra vacío.";
	}
	if (ncantprod3 > 0) {
		cout << "\n6. " << nombreprod3 << " (" << ncantprod3 << ") S/." << nprecioprod3 << " c/u.";
	}
	//cout<<"\n\n1. Nvidia Rtx 3060 ("<<rtx3060c<<") S/."<<rtx3060<<" c/u.";
	//cout<<"\n2. Amd Rx 6800 ("<<rx6800c<<") S/."<<rx6800<<" c/u.";
	//cout<<"\n3. Nvidia Rtx 3070 ti ("<<rtx3070tic<<") S/."<<rtx3070ti<<" c/u.";
	//cout<<"\n4. Amd Rx 6900xt ("<<rx6900xtc<<") S/."<<rx6900xt<<" c/u.";
	//cout<<"\n5. Nvidia Rtx 3090 ("<<rtx3090c<<") S/."<<rtx3090<<" c/u.";
}

double Precio_lote1(double i13pm, double s21p, double xm11u, int i13pmc, int s21pc, int xm11uc, int ncantprod1, int nprecioprod1) {
	double precio_lote1;

	precio_lote1 = ((i13pm * i13pmc) + (s21p * s21pc) + (xm11u * xm11uc) + (nprecioprod1 * ncantprod1));
	cout << fixed;
	cout << setprecision(3);

	return precio_lote1;
}

double Precio_lote2(double r75800x, double i911900k, double tr3995wx, double iw3375, int r75800xc, int i911900kc, int tr3995wxc, int iw3375c, int ncantprod2, int nprecioprod2) {
	double precio_lote2;

	precio_lote2 = ((r75800x * r75800xc) + (i911900k * i911900kc) + (tr3995wx * tr3995wxc) + (iw3375 * iw3375c) + (nprecioprod2 * ncantprod2));
	cout << fixed;
	cout << setprecision(3);

	return precio_lote2;
}

double Precio_lote3(double rtx3060, double rx6800, double rtx3070ti, double rx6900xt, double rtx3090, int rtx3060c, int rx6800c, int rtx3070tic, int rx6900xtc, int rtx3090c, int ncantprod3, int nprecioprod3) {
	double precio_lote3;

	precio_lote3 = ((rtx3060 * rtx3060c) + (rx6800 * rx6800c) + (rtx3070ti * rtx3070tic) + (rx6900xt * rx6900xtc) + (rtx3090 * rtx3090c) + (nprecioprod3 * ncantprod3));
	cout << fixed;
	cout << setprecision(3);

	return precio_lote3;
}

void Menucrearlote() {
	system("cls");
	cout << "Ingrese el nombre del primer producto: ";
	//getch();
}

/*
void Validar(char x[]) {
	for (int i = 0; i < strlen(x); i++) {
		if (!isdigit(x[i])) {
			cout << "Ingresar un número válido.";
			break;
		}
	}
}

int Validar2(char x[]) {
	int metodo_pago;
	for (int i = 0; i < strlen(x); i++) {
		if (!isdigit(x[i])) {
			cout << "Ingresar un número válido.";
			break;
		}
	}
	return metodo_pago;
}
*/