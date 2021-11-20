#pragma once
#ifndef BIBLIOTECA1_H
#define BIBLIOTECA1_H

void Saludo(char nombre[55]);
char Menu1();
int Menu2();
char Menu3(int num_aleatorio);
void Lote1(double i13pm, double s21p, double xm11u, int i13pmc, int s21pc, int xm11uc, char nombreprod1[55], int ncantprod1, int nprecioprod1);
void Lote2(double r75800x, double i911900k, double tr3995wx, double iw3375, int r75800xc, int i911900kc, int tr3995wxc, int iw3375c, char nombreprod2[55], int ncantprod2, int nprecioprod2);
void Lote3(double rtx3060, double rx6800, double rtx3070ti, double rx6900xt, double rtx3090, int rtx3060c, int rx6800c, int rtx3070tic, int rx6900xtc, int rtx3090c, char nombreprod3[55], int ncantprod3, int nprecioprod3);
double Precio_lote1(double i13pm, double s21p, double xm11u, int i13pmc, int s21pc, int xm11uc, int ncantprod1, int nprecioprod1);
double Precio_lote2(double r75800x, double i911900k, double tr3995wx, double iw3375, int r75800xc, int i911900kc, int tr3995wxc, int iw3375c, int ncantprod2, int nprecioprod2);
double Precio_lote3(double rtx3060, double rx6800, double rtx3070ti, double rx6900xt, double rtx3090, int rtx3060c, int rx6800c, int rtx3070tic, int rx6900xtc, int rtx3090c, int ncantprod3, int nprecioprod3);
void Menucrearlote();
void Validar(char[]);
int Validar2(char[]);

#endif