#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include "libreria_colores.h"
#include "gotoxy.h"


///Prototipos de funcion
void menu_p();
void eje_uno();
void eje_dos_cinco();
///////////////////////////////
void menu_p()

{
int x=0;
int y=1;
do{
for(x=45;x<100;x++)
    {
         alineacion(x,y);
         printf("-");


    }
    y+=2;
}while(y<29);
do{
for(y=1;y<28;y++)
    {

         alineacion(45,y);
         printf("*");


    }
    x++;;
}while(x<60);
do{
for(y=1;y<28;y++)
    {

         alineacion(100,y);
         printf("*");


    }
    x++;;
}while(x<120);
alineacion(50,2);

color_principal();

printf("TRABAJO PRACTICO N-1: FUNCIONES Y PUNTEROS");
alineacion(65,4);
printf("1-ejercicio 1");
alineacion(65,6);
printf("2-ejercicio 2");
alineacion(65,8);
printf("3-ejercicio 3");
alineacion(65,10);
printf("4-ejercicio 4");
alineacion(65,12);
printf("5-ejercicio 5");
alineacion(65,14);
printf("6-ejercicio 6");
alineacion(65,16);
printf("7-ejercicio 7");
alineacion(65,18);
printf("8-ejercicio 8");
alineacion(65,20);
printf("9-ejercicio 9");
alineacion(65,22);
printf("10-ejercicio 10");
alineacion(65,24);
printf("0-Salir ");
alineacion(65,26);
printf("Ingrese opcion:");
}

void eje_uno()
{
color_menus();
alineacion(65,4);
printf("1-ejercicio a");
alineacion(65,6);
printf("2-ejercicio b");
alineacion(65,8);
printf("3-ejercicio c");
alineacion(65,10);
printf("4-ejercicio d");
alineacion(65,12);
printf("5-ejercicio e");
alineacion(65,14);
printf("0-Volver Menu Principal");
alineacion(65,16);
printf("Ingrese opcion:");
}
void eje_dos_cinco()
{
color_menus();
alineacion(65,4);
printf("1-ejercicio a");
alineacion(65,6);
printf("2-ejercicio b");
alineacion(65,8);
printf("3-ejercicio c");
alineacion(65,10);
printf("0-Volver Menu Principal");
alineacion(65,12);
printf("Ingrese opcion:");
}
#endif // MENU_H_INCLUDED
