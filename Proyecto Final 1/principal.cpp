/*Integrantes:

1) Chavarría Mujica, Carlos Eduardo. N00276159

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iomanip>
#include<wchar.h>
#include<locale.h>
#include<math.h>
#include"biblioteca1.h"
#include<cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, ""); //tildes
	system("color e0");
	int opcion2, contador = 0, lotetemp, num_aleatorio, cantidades, num_cantproduct, num_product2, lote1[4][4], lote2[5][5], lote3[6][6], precio_finaligv[10][10], i13pmc = 9, s21pc = 7, xm11uc = 8, r75800xc = 5, i911900kc = 7, tr3995wxc = 11, iw3375c = 9, rtx3060c = 2, rx6800c = 4, rtx3070tic = 6, rx6900xtc = 7, rtx3090c = 15, ncantprod1 = 0, ncantprod2 = 0, ncantprod3 = 0, nprecioprod1 = 0, nprecioprod2 = 0, nprecioprod3 = 0; ;
	float dinero_almacenado = 0;
	string usuario_correcto = "user", contra_correcta = "1234", usuario, contra;
	double precio_lotem1 = 0, precio_lotem2 = 0, precio_lotem3 = 0, precioe_lotem1 = 0, precioe_lotem2 = 0, precioe_lotem3 = 0, precio_loteactual = 0;
	char nombre[55], compra_si[] = "S", compra_opcion[2], compra_no[] = "N", metodo_pago, opcion3[2], opcion1[2], dia[2], num_product[2], cant_product[2], n1[] = "1", n2[] = "2", n3[] = "3", n4[] = "4", n5[] = "5", n6[] = "6", lote_escogido, opcion_compraempresa[2], nombreprod1[55], nombreprod2[55], nombreprod3[55], cantprod1[2], cantprod2[2], cantprod3[2], precioprod1[4], precioprod2[4], precioprod3[4];
	bool verificador1 = false, verificador2 = false, verificador3 = true;
	double i13pm = 6289.67, s21p = 3989.00, xm11u = 5475.24, r75800x = 1545.47, i911900k = 2139.82, tr3995wx = 20843.62, iw3375 = 17696.82, rtx3060 = 2438.73, rx6800 = 3540.11, rtx3070ti = 3618.78, rx6900xt = 6686.91, rtx3090 = 9243.69;

	cout << "Para comenzar, ingrese su nombre: "; cin.getline(nombre, 55, '\n');
	system("cls");
	Saludo(nombre);
	do {
		verificador3 = true;
		opcion1[0] = Menu1();
		srand(time(NULL));
		num_aleatorio = 1 + rand() % (60);
		dinero_almacenado = 1600 + rand() % (38401);

		switch (opcion1[0]) {
		case '1':
			system("cls");
			cout << "\tIngresaste como usuario.";
			cout << "\n\tEl numero ahora es: S/." << dinero_almacenado << ".";
			cout << "\n\tAhora ingresar el día en el que se encuentra.";
			cout << "\n\tDomingo = 1, Sábado = 7: "; cin >> dia;
			while (dia[0] != '1' && dia[0] != '2' && dia[0] != '3' && dia[0] != '4' && dia[0] != '5' && dia[0] != '6' && dia[0] != '7') {
				cout << "\n\tSe ingresó un día no válido.\n";
				dia[0] = '0';
				cout << "\tIngresar un día que se encuentre en el rango del 1 al 7: "; cin >> dia;
			}

			switch (dia[0]) {
			case '1':
			case '2':
				system("cls");
				cout << "Domingo(1) y Lunes(2) el lote es de celulares: ";
				Lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, nombreprod1, ncantprod1, nprecioprod1);

				cout << "\n\n¿Desea comprar algo? (S/N): ";
				cin.get();
				cin.getline(compra_opcion, 2);//, '\n');
				_strupr_s(compra_opcion);

				while ((strcmp(compra_opcion, compra_si) != 0) && (strcmp(compra_opcion, compra_no) != 0)) {
					cout << "\nIngresar una opción válida, solo se acepta 'S' o 'N': ";
					cin.getline(compra_opcion, 2, '\n');
					_strupr_s(compra_opcion);
				}

				if (strcmp(compra_opcion, compra_si) == 0) {

					cout << "\nMétodo de pago: \n";
					cout << "\n1. Tarjeta de crédito.";
					cout << "\n2. Efectivo o transferencia (-5%).";
					cout << "\n\nOpción: ";
					cin >> metodo_pago;
					while ((metodo_pago != '1') && (metodo_pago != '2')) {
						cout << "\n(ERROR)\nSolo existen dos métodos de pago por el momento.";
						cout << "\nVolver a ingresar una de las dos opciones: "; cin >> metodo_pago; cout << endl;
					}

					switch (metodo_pago) {
					case '1':
						system("cls");
						cout << "Tarjeta de crédito.";
						cout << "\n\n¿Que desea comprar y en que cantidad?";
						cout << "\nEl número es: S/." << dinero_almacenado << ".";
						Lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, nombreprod1, ncantprod1, nprecioprod1);
						cout << "\n\nIngresar número de producto: "; cin >> num_product;
						num_product2 = atoi(num_product);

						while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0) || ((num_product2 <= 0) || (num_product2 > 3))) {
							cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-3]: ";
							cin >> num_product;
							num_product2 = atoi(num_product);
						}

						cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
						//	cin.get(); 
						//	cin.getline(cant_product, 2, '\n');
						num_cantproduct = atoi(cant_product);

						if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
							do {
								cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
								//	cin.get(); 
								//	cin.getline(cant_product, 2, '\n');
								num_cantproduct = atoi(cant_product);
							} while (num_cantproduct > 2 || num_cantproduct <= 0);
						}

						system("cls");
						cout << "Cantidad correcta de productos.";
						break;

					case '2':
						system("cls");
						cout << "Efectivo o transferencia.";
						cout << "\n\n¿Que desea comprar y en que cantidad?";
						cout << "\nEl número es: S/." << dinero_almacenado << ".";
						Lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, nombreprod1, ncantprod1, nprecioprod1);
						cout << "\nIngresar número de producto: "; cin >> num_product;
						num_product2 = atoi(num_product);

						while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0) || ((num_product2 <= 0) || (num_product2 > 3))) {
							cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-3]: ";
							cin >> num_product;
							num_product2 = atoi(num_product);
						}

						cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
						//	cin.get(); 
						//	cin.getline(cant_product, 2, '\n');
						num_cantproduct = atoi(cant_product);

						if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
							do {
								cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
								//	cin.get(); 
								//	cin.getline(cant_product, 2, '\n');
								num_cantproduct = atoi(cant_product);
							} while (num_cantproduct > 2 || num_cantproduct <= 0);
						}

						system("cls");
						cout << "Cantidad correcta de productos.";
						break;
					}

				}
				else {
					if (strcmp(compra_opcion, compra_no) == 0) {

						system("cls");
						cout << "Gracias por usar el programa, hasta luego.";
						cin.get();
						break;
					}

				}

				cin.get();
				break;

			case '3':
			case '4':
				system("cls");
				cout << "Martes(3) y Miércoles(4) el lote es de procesadores: ";
				Lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, nombreprod2, ncantprod2, nprecioprod2);

				cout << "\n\n¿Desea comprar algo? (S/N): ";
				cin.get();
				cin.getline(compra_opcion, 2, '\n');
				_strupr_s(compra_opcion);

				while ((strcmp(compra_opcion, compra_si) != 0) && (strcmp(compra_opcion, compra_no) != 0)) {
					cout << "\nIngresar una opción válida, solo se acepta 'S' o 'N': ";
					cin.getline(compra_opcion, 2, '\n');
					_strupr_s(compra_opcion);
				}

				if (strcmp(compra_opcion, compra_si) == 0) {

					cout << "\nMétodo de pago: \n";
					cout << "\n1. Tarjeta de crédito.";
					cout << "\n2. Efectivo o transferencia (-5%).";
					cout << "\n\nOpción: ";
					cin >> metodo_pago;
					while ((metodo_pago != '1') && (metodo_pago != '2')) {
						cout << "\n(ERROR)\nSolo existen dos métodos de pago por el momento.";
						cout << "\nVolver a ingresar una de las dos opciones: "; cin >> metodo_pago; cout << endl;
					}

					switch (metodo_pago) {
					case '1':
						system("cls");
						cout << "Tarjeta de crédito.";
						cout << "\n¿Que desea comprar y en que cantidad?";
						cout << "\nEl número es: S/." << dinero_almacenado << ".";
						Lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, nombreprod2, ncantprod2, nprecioprod2);
						cout << "\n\nIngresar número de producto: "; cin >> num_product;
						num_product2 = atoi(num_product);

						while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0 && strcmp(num_product, n4) != 0) || ((num_product2 <= 0) || (num_product2 > 4))) {
							cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-4]: ";
							cin >> num_product;
							num_product2 = atoi(num_product);
						}

						cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
						//	cin.get(); 
						//	cin.getline(cant_product, 2, '\n');
						num_cantproduct = atoi(cant_product);

						if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
							do {
								cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
								//	cin.get(); 
								//	cin.getline(cant_product, 2, '\n');
								num_cantproduct = atoi(cant_product);
							} while (num_cantproduct > 2 || num_cantproduct <= 0);
						}

						system("cls");
						cout << "Cantidad correcta de productos.";
						break;

					case '2':
						system("cls");
						cout << "Efectivo o transferencia.";
						cout << "\n¿Que desea comprar y en que cantidad?";
						cout << "\nEl número es: S/." << dinero_almacenado << ".";
						Lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, nombreprod2, ncantprod2, nprecioprod2);
						cout << "\n\nIngresar número de producto: "; cin >> num_product;
						num_product2 = atoi(num_product);

						while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0 && strcmp(num_product, n4) != 0) || ((num_product2 <= 0) || (num_product2 > 4))) {
							cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-4]: ";
							cin >> num_product;
							num_product2 = atoi(num_product);
						}

						cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
						//	cin.get(); 
						//	cin.getline(cant_product, 2, '\n');
						num_cantproduct = atoi(cant_product);

						if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
							do {
								cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
								//	cin.get(); 
								//	cin.getline(cant_product, 2, '\n');
								num_cantproduct = atoi(cant_product);
							} while (num_cantproduct > 2 || num_cantproduct <= 0);
						}

						system("cls");
						cout << "Cantidad correcta de productos.";
						break;
					}
				}
				else {
					if (strcmp(compra_opcion, compra_no) == 0) {

						system("cls");
						cout << "Gracias por usar el programa, hasta luego.";
						cin.get();
						break;
					}
				}

				cin.get();
				break;

			case '5':
			case '6':
			case '7':
				system("cls");
				cout << "Jueves(5), Viernes(6) y Sábado(7) el lote es de tarjetas de vídeo: ";
				Lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, nombreprod3, ncantprod3, nprecioprod3);

				cout << "\n\n¿Desea comprar algo? (S/N): ";
				cin.get();
				cin.getline(compra_opcion, 2, '\n');
				_strupr_s(compra_opcion);

				while ((strcmp(compra_opcion, compra_si) != 0) && (strcmp(compra_opcion, compra_no) != 0)) {
					cout << "\nIngresar una opción válida, solo se acepta 'S' o 'N': ";
					cin.getline(compra_opcion, 2, '\n');
					_strupr_s(compra_opcion);
				}

				if (strcmp(compra_opcion, compra_si) == 0) {

					cout << "\nMétodo de pago: \n";
					cout << "\n1. Tarjeta de crédito.";
					cout << "\n2. Efectivo o transferencia (-5%).";
					cout << "\n\nOpción: ";
					cin >> metodo_pago;
					while ((metodo_pago != '1') && (metodo_pago != '2')) {
						cout << "\n(ERROR)\nSolo existen dos métodos de pago por el momento.";
						cout << "\nVolver a ingresar una de las dos opciones: "; cin >> metodo_pago; cout << endl;
					}

					switch (metodo_pago) {
					case '1':
						system("cls");
						cout << "Tarjeta de crédito.";
						cout << "\n¿Que desea comprar y en que cantidad?";
						cout << "\nEl número es: S/." << dinero_almacenado << ".";
						Lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, nombreprod3, ncantprod3, nprecioprod3);
						cout << "\n\nIngresar número de producto: "; cin >> num_product;
						num_product2 = atoi(num_product);

						while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0 && strcmp(num_product, n4) != 0 && strcmp(num_product, n5) != 0) || ((num_product2 <= 0) || (num_product2 > 5))) {
							cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-5]: ";
							cin >> num_product;
							num_product2 = atoi(num_product);
						}

						cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
						//	cin.get(); 
						//	cin.getline(cant_product, 2, '\n');
						num_cantproduct = atoi(cant_product);

						if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
							do {
								cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
								//	cin.get(); 
								//	cin.getline(cant_product, 2, '\n');
								num_cantproduct = atoi(cant_product);
							} while (num_cantproduct > 2 || num_cantproduct <= 0);
						}

						system("cls");
						cout << "Cantidad correcta de productos.";

						//	while(num_cantproduct>=3 || num_cantproduct<=0){
						//		cout<<"\nSiendo usuario solo puede comprar dos productos como máximo: "; cin>>num_cantproduct;
						//	}
						//	system("cls");
						//	cout<<"\nCantidad correcta de productos.";

						break;

					case '2':
						system("cls");
						cout << "Efectivo o transferencia.";
						cout << "\n¿Que desea comprar y en que cantidad?";
						cout << "\nEl número es: S/." << dinero_almacenado << ".";
						Lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, nombreprod3, ncantprod3, nprecioprod3);
						cout << "\n\nIngresar número de producto: "; cin >> num_product;
						num_product2 = atoi(num_product);

						while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0 && strcmp(num_product, n4) != 0 && strcmp(num_product, n5) != 0) || ((num_product2 <= 0) || (num_product2 > 5))) {
							cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-5]: ";
							cin >> num_product;
							num_product2 = atoi(num_product);
						}

						cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
						//	cin.get(); 
						//	cin.getline(cant_product, 2, '\n');
						num_cantproduct = atoi(cant_product);

						if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
							do {
								cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
								//	cin.get(); 
								//	cin.getline(cant_product, 2, '\n');
								num_cantproduct = atoi(cant_product);
							} while (num_cantproduct > 2 || num_cantproduct <= 0);
						}

						system("cls");
						cout << "Cantidad correcta de productos.";
						break;
					}
				}
				else {
					if (strcmp(compra_opcion, compra_no) == 0) {

						system("cls");
						cout << "Gracias por usar el programa, hasta luego.\n";
						cin.get();
						break;
					}
					else {
						if ((strcmp(compra_opcion, compra_si) != 0) && (strcmp(compra_opcion, compra_no) != 0)) {

							system("cls");
							cout << "Se ingresó una opción de compra no válida, volver a ejecutar el programa.\n";
							cin.get();
							break;
						}
					}
				}

				cin.get();
				break;

			default:
				system("cls");
				cout << "Se ingresó un día no válido, volver a ejecutar el programa.\n";
				break;

			}

			break;
		case '2':
			system("cls");
			cout << "\tElegiste ingresar como trabajador. \n";
			do {
				cout << "\tPor favor, inicia sesión. \n";
				cout << "\tUsuario: "; cin >> usuario;
				if (usuario == usuario_correcto) {
					cout << "\tContraseña: "; cin >> contra;
					if (contra == contra_correcta) {

						system("cls");
						verificador1 = true;
						cout << "\tLogin exitoso, presione una tecla para continuar.";
						cin.get();
					}
					else {
						if (contra != contra_correcta) {

							verificador1 = false;
							contador++;
							cout << "\n\tContraseña incorrecta, le queda " << 5 - contador << " intentos. Presione una tecla para volver a intentar.";
							cin.get();
							system("cls");
						}
					}
				}
				else {
					if (usuario != usuario_correcto) {

						verificador1 = false;
						contador++;
						cout << "\n\tUsuario incorrecto, le queda " << 5 - contador << " intentos. Presione una tecla para volver a intentar.";
						cin.get();
						system("cls");
					}
				}

			} while (contador < 5 && verificador1 == false && contador != 0);

			// aca se puede continuar con el case 2

			do {

				if (contador < 5 && verificador1 == true) {
					system("cls");
					opcion3[0] = '0';
					opcion3[0] = Menu3(num_aleatorio);

					switch (opcion3[0]) {
					case '1':
						if (num_aleatorio >= 1 && num_aleatorio <= 20) {

							verificador2 = true;
							cout << "Lote número 1, que pertenece a celulares: ";
							Lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, nombreprod1, ncantprod1, nprecioprod1);
							//system("pause");
							//cin.get();
							_getch();
						}
						else {
							if (num_aleatorio >= 21 && num_aleatorio <= 40) {

								verificador2 = true;
								cout << "Lote número 2, que pertenece a procesadores: ";
								Lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, nombreprod2, ncantprod2, nprecioprod2);
								//system("pause");
								//cin.get();
								_getch();
							}
							else {
								if (num_aleatorio >= 41 && num_aleatorio <= 60) {

									verificador2 = true;
									cout << "Lote número 3, que pertenece a tarjetas de vídeo: ";
									Lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, nombreprod3, ncantprod3, nprecioprod3);
									//system("pause");
									//cin.get();
									_getch();
								}
							}
						}
						break;
					case '2':
						if (num_aleatorio >= 1 && num_aleatorio <= 20) {

							verificador2 = true;
							precio_lotem1 = Precio_lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, ncantprod1, nprecioprod1);
							precioe_lotem1 = precio_lotem1 * 0.8;
							precio_loteactual = precioe_lotem1;

							cout << "El precio total del lote 1 es: S/." << precio_lotem1 << ".\n";
							cout << "El precio especial de todo el lote es: S/." << precioe_lotem1 << ".\n";
							_getch();
						}
						else {
							if (num_aleatorio >= 21 && num_aleatorio <= 40) {

								verificador2 = true;
								precio_lotem2 = Precio_lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, ncantprod2, nprecioprod2);
								precioe_lotem2 = precio_lotem2 * 0.8;
								precio_loteactual = precioe_lotem2;

								cout << "El precio total del lote 2 es: S/." << precio_lotem2 << ".\n";
								cout << "El precio especial de todo el lote es: S/." << precioe_lotem2 << ".\n";
								_getch();
							}
							else {
								if (num_aleatorio >= 41 && num_aleatorio <= 60) {

									verificador2 = true;
									precio_lotem3 = Precio_lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, ncantprod3, nprecioprod3);
									precioe_lotem3 = precio_lotem3 * 0.8;
									precio_loteactual = precioe_lotem3;

									cout << "El precio total del lote 3 es: S/." << precio_lotem3 << ".\n";
									cout << "El precio especial de todo el lote es: S/." << precioe_lotem3 << ".\n";
									_getch();
								}
							}
						}

						break;
					case '3':
						if (num_aleatorio >= 1 && num_aleatorio <= 20) {
							precio_lotem1 = Precio_lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, ncantprod1, nprecioprod1);
							precioe_lotem1 = precio_lotem1 * 0.8;
							precio_loteactual = precioe_lotem1;
						}
						else {
							if (num_aleatorio >= 21 && num_aleatorio <= 40) {
								precio_lotem2 = Precio_lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, ncantprod2, nprecioprod2);
								precioe_lotem2 = precio_lotem2 * 0.8;
								precio_loteactual = precioe_lotem2;
							}
							else {
								if (num_aleatorio >= 41 && num_aleatorio <= 60) {
									precio_lotem3 = Precio_lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, ncantprod3, nprecioprod3);
									precioe_lotem3 = precio_lotem3 * 0.8;
									precio_loteactual = precioe_lotem3;
								}
							}
						}

						system("cls");
						cout << "Eligió la opción de comprar.\n";
						cout << "1. Adquirir todo el lote (S/." << precio_loteactual << ").";
						cout << "\n2. Comprar solo unas unidades de algunos productos del lote actual.";
						cout << "\n3. Volver al menú principal.";
						cout << "\n4. Salir del programa.";
						cout << "\nNúmero aleatorio: " << num_aleatorio << ".";
						cout << "\nOpción: "; cin >> opcion_compraempresa;
						while (opcion_compraempresa[0] != 49 && opcion_compraempresa[0] != 50 && opcion_compraempresa[0] != 51 && opcion_compraempresa[0] != 52) {
							opcion_compraempresa[0] = 0;
							cout << "Por favor ingresar una opción válida. [1-4]: "; cin >> opcion_compraempresa;
						}

						switch (opcion_compraempresa[0]) {
						case '1':
							cout << "Caso 1.";

							if (num_aleatorio >= 1 && num_aleatorio <= 20) {
								verificador2 = true;
								system("cls");
								i13pmc = 0; s21pc = 0; xm11uc = 0; ncantprod1 = 0;
								cout << "Adquirió todo el lote por un valor de: S/." << precio_loteactual;
								_getch();
							}
							else {
								if (num_aleatorio >= 21 && num_aleatorio <= 40) {
									verificador2 = true;
									system("cls");
									r75800xc = 0; i911900kc = 0; tr3995wxc = 0; iw3375c = 0; ncantprod2 = 0;
									cout << "Adquirió todo el lote por un valor de: S/." << precio_loteactual;
									_getch();
								}
								else {
									if (num_aleatorio >= 41 && num_aleatorio <= 60) {
										verificador2 = true;
										system("cls");
										rtx3060c = 0; rx6800c = 0; rtx3070tic = 0; rx6900xtc = 0; rtx3090c = 0; ncantprod3 = 0;
										cout << "Adquirió todo el lote por un valor de: S/." << precio_loteactual;
										_getch();
									}
								}
							}


							break;

						case '2':
							system("cls");
							cout << "Caso 2.\n";

							if (num_aleatorio >= 1 && num_aleatorio <= 20) {

								cout << "Lote número 1, que pertenece a celulares: ";
								Lote1(i13pm, s21p, xm11u, i13pmc, s21pc, xm11uc, nombreprod1, ncantprod1, nprecioprod1);
								cout << "\n\n¿Que desea comprar y en que cantidad?";
								//Lote1(i13pm, s21p, xm11u);

								cout << "\n\nIngresar número de producto: "; cin >> num_product;
								num_product2 = atoi(num_product);

								while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0) || ((num_product2 <= 0) || (num_product2 > 3))) {
									cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-3]: ";
									cin >> num_product;
									num_product2 = atoi(num_product);
								}

								switch (num_product2) {
								case 1: cout << "\nHola1.";

									cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
									num_cantproduct = atoi(cant_product);

									while (num_cantproduct > 9 || num_cantproduct < 1) {
										cout << "(ERROR) Ingresar un valor en el rango de [1-9]: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);
									}

									i13pmc -= num_cantproduct;
									cout << "Cantidad correcta de productos.";

									//if(num_cantproduct > 9 || num_cantproduct < 1){
									//	cout<<"(ERROR) Ingresar un valor en el rango de [1-9]: "; cin>>cant_product;
									//	num_cantproduct = atoi(cant_product);
									//}

									_getch();
									break;

								case 2: cout << "\nHola2.";

									cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
									num_cantproduct = atoi(cant_product);

									while (num_cantproduct > 7 || num_cantproduct < 1) {
										cout << "(ERROR) Ingresar un valor en el rango de [1-7]: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);
									}

									s21pc -= num_cantproduct;
									cout << "Cantidad correcta de productos.";

									_getch();
									break;

								case 3: cout << "\nHola3.";

									cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
									num_cantproduct = atoi(cant_product);

									while (num_cantproduct > 8 || num_cantproduct < 1) {
										cout << "(ERROR) Ingresar un valor en el rango de [1-8]: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);
									}

									xm11uc -= num_cantproduct;
									cout << "Cantidad correcta de productos.";

									_getch();
									break;

								}


								cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
								num_cantproduct = atoi(cant_product);

								if (strcmp(cant_product, n1) != 0 && strcmp(cant_product, n2) != 0) {
									do {
										cout << "\nSiendo usuario solo puede comprar dos productos como máximo: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);
									} while (num_cantproduct > 2 || num_cantproduct <= 0);
								}

								system("cls");
								cout << "Cantidad correcta de productos.";

								_getch();
							}
							else {
								if (num_aleatorio >= 21 && num_aleatorio <= 40) {

									cout << "Lote número 2, que pertenece a procesadores: ";
									Lote2(r75800x, i911900k, tr3995wx, iw3375, r75800xc, i911900kc, tr3995wxc, iw3375c, nombreprod2, ncantprod2, nprecioprod2);

									cout << "\n\n¿Que desea comprar y en que cantidad?";
									cout << "\n\nIngresar número de producto: "; cin >> num_product;
									num_product2 = atoi(num_product);

									while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0 && strcmp(num_product, n4) != 0) || ((num_product2 <= 0) || (num_product2 > 4))) {
										cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-4]: ";
										cin >> num_product;
										num_product2 = atoi(num_product);
									}

									switch (num_product2) {
									case 1: cout << "\nHola1.";

										cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);

										while (num_cantproduct > 5 || num_cantproduct < 1) {
											cout << "(ERROR) Ingresar un valor en el rango de [1-5]: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);
										}

										r75800xc -= num_cantproduct;
										cout << "Cantidad correcta de productos.";

										_getch();
										break;

									case 2: cout << "\nHola2.";

										cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);

										while (num_cantproduct > 7 || num_cantproduct < 1) {
											cout << "(ERROR) Ingresar un valor en el rango de [1-7]: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);
										}

										i911900kc -= num_cantproduct;
										cout << "Cantidad correcta de productos.";

										_getch();
										break;

									case 3: cout << "\nHola3.";

										cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);

										while (num_cantproduct > 11 || num_cantproduct < 1) {
											cout << "(ERROR) Ingresar un valor en el rango de [1-11]: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);
										}

										tr3995wxc -= num_cantproduct;
										cout << "Cantidad correcta de productos.";

										_getch();
										break;

									case 4: cout << "\nHola4.";

										cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
										num_cantproduct = atoi(cant_product);

										while (num_cantproduct > 9 || num_cantproduct < 1) {
											cout << "(ERROR) Ingresar un valor en el rango de [1-9]: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);
										}

										iw3375c -= num_cantproduct;
										cout << "Cantidad correcta de productos.";

										_getch();
										break;

									}

									_getch();
								}
								else {
									if (num_aleatorio >= 41 && num_aleatorio <= 60) {

										cout << "Lote número 3, que pertenece a tarjetas de vídeo: ";
										Lote3(rtx3060, rx6800, rtx3070ti, rx6900xt, rtx3090, rtx3060c, rx6800c, rtx3070tic, rx6900xtc, rtx3090c, nombreprod3, ncantprod3, nprecioprod3);

										cout << "\n\n¿Que desea comprar y en que cantidad?";
										cout << "\n\nIngresar número de producto: "; cin >> num_product;
										num_product2 = atoi(num_product);

										while ((strcmp(num_product, n1) != 0 && strcmp(num_product, n2) != 0 && strcmp(num_product, n3) != 0 && strcmp(num_product, n4) != 0 && strcmp(num_product, n5) != 0) || ((num_product2 <= 0) || (num_product2 > 5))) {
											cout << "\nPor favor ingresar un número que se encuentre dentro del rango [1-5]: ";
											cin >> num_product;
											num_product2 = atoi(num_product);
										}

										switch (num_product2) {
										case 1: cout << "\nHola1.";

											cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);

											while (num_cantproduct > 2 || num_cantproduct < 1) {
												cout << "(ERROR) Ingresar un valor en el rango de [1-2]: "; cin >> cant_product;
												num_cantproduct = atoi(cant_product);
											}

											rtx3060c -= num_cantproduct;
											cout << "Cantidad correcta de productos.";

											_getch();
											break;

										case 2: cout << "\nHola2.";

											cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);

											while (num_cantproduct > 4 || num_cantproduct < 1) {
												cout << "(ERROR) Ingresar un valor en el rango de [1-4]: "; cin >> cant_product;
												num_cantproduct = atoi(cant_product);
											}

											rx6800c -= num_cantproduct;
											cout << "Cantidad correcta de productos.";

											_getch();
											break;

										case 3: cout << "\nHola3.";

											cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);

											while (num_cantproduct > 6 || num_cantproduct < 1) {
												cout << "(ERROR) Ingresar un valor en el rango de [1-6]: "; cin >> cant_product;
												num_cantproduct = atoi(cant_product);
											}

											rtx3070tic -= num_cantproduct;
											cout << "Cantidad correcta de productos.";

											_getch();
											break;

										case 4: cout << "\nHola4.";

											cout << "\nIngresar cantidad de producto escogido: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);

											while (num_cantproduct > 7 || num_cantproduct < 1) {
												cout << "(ERROR) Ingresar un valor en el rango de [1-7]: "; cin >> cant_product;
												num_cantproduct = atoi(cant_product);
											}

											rx6900xtc -= num_cantproduct;
											cout << "Cantidad correcta de productos.";

											_getch();
											break;

										case 5: cout << " \nHola5.";
											cout << "Ingresar cantidad de producto escogido: "; cin >> cant_product;
											num_cantproduct = atoi(cant_product);

											while (num_cantproduct > 15 || num_cantproduct < 1) {
												cout << "(ERROR) Ingresar un valor en el rango de [1-15]: "; cin >> cant_product;
												num_cantproduct = atoi(cant_product);
											}

											rtx3090c -= num_cantproduct;
											cout << "Cantidad correcta de productos.";

											_getch();
											break;

										}

										_getch();
									}
								}
							}

							break;

						case '3':
							verificador3 = false;
							verificador2 = false;
							system("cls");
							cout << "Volviendo al menú principal.";
							_getch();
							system("cls");
							break;

						case '4':
							system("cls");
							cout << "Gracias por usar el programa, presione una tecla para abandonar.";
							_getch();
							exit(EXIT_SUCCESS);
							break;
						}

						break;

					case '4':
						verificador3 = false;
						verificador2 = false;
						system("cls");
						cout << "Volviendo al menú principal.\n";
						_getch();
						system("cls");
						break;

					case '5':
						verificador2 = false;
						system("cls");
						cout << "Salida exitosa, gracias por usar el programa.";
						_getch();
						break;

					case '6':
						Menucrearlote();
						cin.get();
						cin.getline(nombreprod1, 55, '\n');

						cout << "\nAhora ingresar la cantidad de " << nombreprod1 << ": ";
						cin >> cantprod1;
						//cin.get();
						//cin.getline(cantprod1, 1);
						ncantprod1 = atoi(cantprod1);

						while (ncantprod1 < 1 || ncantprod1 > 10) {
							cout << "\nIngresar un valor válido [1-10]: "; cin >> cantprod1;
							//cin.get();
							//cin.getline(cantprod1, 2);
							ncantprod1 = atoi(cantprod1);
						}

						cout << "\nIngresar el precio por unidad del producto 1: ";
						cin >> precioprod1;
						//cin.get();
						//cin.getline(precioprod1,1);
						nprecioprod1 = atoi(precioprod1);

						while (nprecioprod1 < 1 || nprecioprod1 > 9999) {
							cout << "Ingresar un precio adecuado [1-9999]: "; cin >> precioprod1;
							nprecioprod1 = atoi(precioprod1);
						}

						cout << "\nProducto uno finalizado.";
						_getch();
						system("cls");

						cout << "Ingrese el nombre del segundo producto: ";
						cin.get();
						cin.getline(nombreprod2, 55, '\n');

						cout << "\nAhora ingresar la cantidad de " << nombreprod2 << ": ";
						cin >> cantprod2;
						//cin.get();
						//cin.getline(cantprod2, 1);
						ncantprod2 = atoi(cantprod2);

						while (ncantprod2 < 1 || ncantprod2 > 10) {
							cout << "\nIngresar un valor válido [1-10]: "; cin >> cantprod2;
							//cin.get();
							//cin.getline(cantprod2, 2);
							ncantprod2 = atoi(cantprod2);
						}

						cout << "\nIngresar el precio por unidad del producto 2: ";
						cin >> precioprod2;
						//cin.get();
						//cin.getline(precioprod2,1);
						nprecioprod2 = atoi(precioprod2);

						while (nprecioprod2 < 1 || nprecioprod2 > 9999) {
							cout << "Ingresar un precio adecuado [1-9999]: "; cin >> precioprod2;
							nprecioprod2 = atoi(precioprod2);
						}

						cout << "\nProducto dos finalizado.";
						_getch();
						system("cls");

						cout << "Ingrese el nombre del tercer producto: ";
						cin.get();
						cin.getline(nombreprod3, 55, '\n');

						cout << "\nAhora ingresar la cantidad de " << nombreprod3 << ": ";
						cin >> cantprod3;
						//cin.get();
						//cin.getline(cantprod3, 1);
						ncantprod3 = atoi(cantprod3);

						while (ncantprod3 < 1 || ncantprod3 > 10) {
							cout << "\nIngresar un valor válido [1-10]: "; cin >> cantprod3;
							//cin.get();
							//cin.getline(cantprod3, 2);
							ncantprod3 = atoi(cantprod3);
						}

						cout << "\nIngresar el precio por unidad del producto 3: ";
						cin >> precioprod3;
						//cin.get();
						//cin.getline(precioprod3,1);
						nprecioprod3 = atoi(precioprod3);

						while (nprecioprod3 < 1 || nprecioprod3 > 9999) {
							cout << "Ingresar un precio adecuado [1-9999]: "; cin >> precioprod3;
							nprecioprod3 = atoi(precioprod3);
						}

						system("cls");
						cout << "Los tres productos ya fueron ingresados al sistema. \nVolviendo al menú principal.";
						verificador3 = false;
						verificador2 = false;
						_getch();
						system("cls");

						break;

					}
				}
				else
					break;
			} while (verificador2 == true);

		case '3':

			if (opcion1[0] == '3') {
				system("cls");
				cout << "Salida exitosa.";
				break;
			}
		}

	} while (verificador3 == false);

	_getch();
	return 0;
}