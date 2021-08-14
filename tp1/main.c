#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
   menu_principal();

}
void menu_principal()
{
system("cls");
int op=-1;
do{
printf("\nTrabajo Practico N-1: Funciones y Punteros\n");

printf("\n1-ejercicio 1");
printf("\n\n2-ejercicio 2");
printf("\n\n3-ejercicio 3");
printf("\n\n4-ejercicio 4");
printf("\n\n5-ejercicio 5");
printf("\n\n6-ejercicio 6");
printf("\n\n7-ejercicio 7");
printf("\n\n8-ejercicio 8");
printf("\n\n9-ejercicio 9");
printf("\n\n10-ejercicio 10");
printf("\n\n0-Salir ");
printf("\n\nIngrese opcion:");
scanf("%d",&op);
switch(op){
       case 1: ejer_1();
       break;
       case 2: ejer_2();
       break;
       case 3: ejer_3();
       break;
       case 4: ejer_4();
       break;
       case 5: ejer_5();
       break;
       case 6: ejer_6();
       break;
       case 7: ejer_7();
       break;
       case 8: ejer_8();
       break;
       case 9: ejer_9();
       break;
       case 10: ejer_10();
       break;
       default:

           printf("\n\nopcion incorrecta, rengrese:\n\n");
           system("cls");

        break;
       }
}while(op!=0);
}
///////////////////////////////////////////////////////////////////////////////////
void ejer_1()
{
system("cls");
int op=-1;
do{

printf("\n1-ejercicio a");
printf("\n\n2-ejercicio b");
printf("\n\n3-ejercicio c");
printf("\n\n4-ejercicio d");
printf("\n\n5-ejercicio e");
printf("\n\n0-Volver Menu Principal");
scanf("%d",&op);
switch(op){
       case 1: punto_a();
       break;
       case 2: punto_b();
       break;
       case 3: punto_c();
       break;
       case 4: punto_d();
       break;
       case 5: punto_e();
       break;
       default:
           menu_principal();
        break;
}
}while (op!=0);
}
void punto_a(){}
void punto_b(){}
void punto_c(){}
void punto_d(){}
void punto_e(){}
/////////////////////////////////////////////////////////////////////////////////
void ejer_2(){}
void ejer_3(){}
void ejer_4(){}
void ejer_5(){}
void ejer_6(){}
void ejer_7(){}
void ejer_8(){}
void ejer_9(){}
void ejer_10(){}
