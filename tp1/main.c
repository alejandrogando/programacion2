#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <conio.h>
#include "menu.h"
#include "gotoxy.h"

const int DIM=100;
const int DIMCADENA=30;
int main()

{

   menu_principal();

}
void menu_principal()
{
system("cls");

menu_p();
int op=-1;
do{
fflush(stdin);
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
int arreglo[DIM];
int validos=0;
int suma=0;
int cantidad=0;
float promedio=0;
do{
eje_uno();
scanf("%d",&op);
switch(op){
       case 1: validos=punto_a(arreglo);
       break;
       case 2: validos=punto_b(arreglo);
       break;
       case 3:
           printf("entrar");

           suma= punto_c(arreglo,validos);
           system("cls");
           alineacion(45,6);
           printf("El resulatdo de la suma de los elementos del array es:%d",suma);
           system("pause");
            system("cls");

       break;
       case 4: cantidad=punto_d(arreglo,validos);
            system("cls");
            alineacion(45,6);
            printf("Cantidad de valores ingresados del array es:%d",cantidad);
            system("pause");
            system("cls");
       break;
       case 5: promedio=suma/cantidad;
                system("cls");
            alineacion(45,6);
            printf("El promedioes:%.2f",promedio);
            system("pause");
            system("cls");
       break;
       default:
           menu_principal();
        break;
}
}while (op!=0);
}
int punto_a(int arreglo[])//Hacer una funci�n que inicialice las celdas del arreglo en �1.
{
int i=0;
int x=0;
for(i=0;i<DIM;i++)
    {
    arreglo[i]=-1;

    }
system("cls");
alineacion(45,6);
printf("El arreglo se cargo con exito!!!");
system("pause");
system("cls");
return i;

}
int punto_b(int arreglo[])//Hacer una funci�n que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.
{
char control = 's';
int i=0;

    while((control=='s') && (i<DIM))
    {
    system("cls");
    alineacion(45,6);
    printf("Ingrese Dato:");
    fflush(stdin);
    scanf("%d",&arreglo[i]);
    i++;
    alineacion(45,6);
    printf("Desea Seguir s/n");
    fflush(stdin);
    scanf("%c",&control);
    system("cls");

    }
return i;


}


int punto_c(int arreglo[],int validos)//Hacer una funci�n que sume el contenido del arreglo y lo retorne.
{
 int i=0;
 int res=0;
 for(i=0;i<validos;i++)
    {
    res+=arreglo[i];
    }
    return res;
}

int  punto_d(int arreglo[],int validos)//Hacer una funci�n que cuente la cantidad de valores ingresados.
{
int i=0;
int contador=0;
while((arreglo[i]!=-1)&&(i<DIM))
    {
    contador++;
    i++;
    }
return contador;
}

// Hacer una funci�n que reciba como par�metro el arreglo ya cargado, calcule y retorne el valor promedio
                //usando las funciones anteriores (c y d).


/////////////////////////////////////////////////////////////////////////////////
void ejer_2()
{
system("cls");
char cadena[DIMCADENA];
int val=0;
int op=-1;
do{
eje_dos_cinco();
scanf("%d",&op);
switch(op){
       case 1: val=punto_a2(cadena);
       break;
       case 2: punto_b2(cadena,val);
       break;
       case 3: punto_c2(cadena,val);
       break;
       default:
           menu_principal();
        break;


}
}while(op!=0);
}
int punto_a2(char cadena[])//Hacer una funci�n para la carga del arreglo.caracteres
{
system("cls");
int i=0;
char control='s';
while((i<DIMCADENA)&&(control=='s'))
    {
    printf("ingrese letra:");
    fflush(stdin);
    gets(&cadena[i]);
    i++;

    printf("desea seguir s/n");
    fflush(stdin);
    control=getchar();

    }
    system("cls");
    return i;

}

void punto_b2(char cadena[],int val)// Hacer una funci�n para invertir el arreglo.
{
char aux;
int der=0;
int izq=0;
int longitud=strlen(cadena);

for(izq=0,der=longitud -1;izq<(longitud/2);izq++,der--)
    {
    aux=cadena[izq];
    cadena[izq]=cadena[der];
    cadena[der]=aux;
    }
punto_c2(cadena,val);
}


void punto_c2(char cadena[],int val)//Hacer una funci�n para mostrar el contenido del arreglo.

{

    int i=0;
    system("cls");
    for(i=0;i<val;i++){
        printf("%c\n",cadena[i]);
    }
}

//////////////////////////////////////////////////////////////////////////////7
void ejer_3()//Hacer una funci�n que reciba como par�metro un arreglo de n�meros enteros de un d�gito y retorne el valor decimal de dicho n�mero. Por ejemplo, un arreglo que tiene cargados los valores 3, 2, 8 y 9, la fn retorna el valor 3289.
{
    int arreglo[DIM];
    int val=0;
    int resultado=0;
    system("cls");
    val=punto_b(arreglo);//carga array
    imprimir_array(arreglo,val);
    resultado=valor_decimal(arreglo,val);
    printf("el valor decimal del arreglo es: %d",resultado);
    system("pause");
    system("cls");
    menu_principal();
}
int valor_decimal(int arreglo[],int val)
{
int ultimo=0;
int x=10;
int suma=0;
int res=0;
int i=0;
if(val>0)
    {
    ultimo=arreglo[val-1];
    printf("\nval cuando entra %d\n\n",val);
    printf("valor del arreglo ultimo:%d",arreglo[val-1]);
    }
    if(val>1)
        {
        for(i=val-2;i>=0;i--)
            {
            printf("\nvalor de i dentro del for\n%d",i);
            suma+=arreglo[i]*x;
            printf("\nvalor de suma%d\n",suma);
            x*=10;
            printf("\n\n valor de X%d",x);
            }
        }
    res=suma +ultimo;
    return res;
}
void imprimir_array(int arreglo[],int val)
{
int i=0;
for(i=0;i<val;i++)
    {
    printf("arreglo: %d",arreglo[i]);
    }
}
void ejer_4()//Hacer una funci�n que retorne la posici�n del valor m�ximo de un arreglo de n�meros enteros.
{
    int val=0;
    int pos=0;
    int arreglo[DIM];
    system("cls");
    val=punto_b(arreglo);//carga array
    pos=posicion_maximo(arreglo,val);
    printf("La posicion es %d",pos);
}
int posicion_maximo(int arreglo[],int val)
{
int i=0;
int pos=i;
int max=arreglo[i];

for(i=1;i<val;i++)
    {
    if(arreglo[i]>max)
        {
        pos=i;
        }
    }

return pos+1;
}
void ejer_5()//Sea una matriz de n�meros enteros, de dimensiones: 12 filas y 31 columnas. Contienen las precipitaciones correspondientes a un a�o entero. Las filas corresponden a los meses y las columnas a los d�as. Se pide:
{

int matrix[12][31];
int mes=0;
int pos;
system("cls");
int op=-1;
do{

eje_dos_cinco();
scanf("%d",&op);
switch(op){
       case 1: punto_a5(matrix);
       break;
       case 2:
           system("cls");
           do{
            alineacion(30,6);
           printf("ingrese el mes 1/12:");
           fflush(stdin);
           scanf("%d",&mes);
           }while((mes<1)&&(mes>12));
            pos=punto_b5(matrix,mes-1);
           alineacion(30,8);
            printf("el dia %d del mes %d la precipitacion mas alta es: %d",pos+1,mes,matrix[mes-1][pos]);
            system("pause");
            system("cls");

       break;
       case 3: punto_c5(matrix);
       break;
       default:
           menu_principal();
        break;

}
}while(op!=0);
}
void punto_a5(int matrix[12][31])//Hacer una funci�n para cargar la matriz de forma autom�tica.
{
    int x=0;
    int y=0;
    system("cls");
    for(x=0;x<12;x++)
        {
        for(y=0;y<31;y++)
            {
            matrix[x][y]= rand() %100;
            }
        }
        imprimir_matrix(matrix);
        system("pause");
        system("cls");
}
void imprimir_matrix(int matrix[12][31])
{
    int x=0;
    int y=0;
    system("cls");
 for(x=0;x<12;x++)
        {
        for(y=0;y<31;y++)
            {

             printf("%d-",matrix[x][y]);
             }
             printf("\n");
        }

}
int punto_b5(int matrix[12][31],int mes)//Hacer una funci�n que retorne el d�a de m�xima precipitaci�n para un mes determinado.
{
int pos=0;
int i=0;
int precipitacion=matrix[mes][i];

for(i=0;i<31;i++)
    {
    if (matrix[mes][i]>precipitacion)
        {

        precipitacion=matrix[mes][i];
        pos=i;
        }

    }

    return pos;
}
void punto_c5(int matrix[12][31])// Hacer una funci�n que cargue en un arreglo de 12 posiciones el resultado de aplicar la fn anterior a cada mes de a�o.
{
int arreglo[12];
int x=0;
int i=0;
int c=0;
int pos=0;
    system("cls");
 for(x=0;x<12;x++)
        {
        pos=punto_b5(matrix,x);
        arreglo[i]=matrix[x][pos];
        i++;
        }
 for(c=0;c<i;c++)
    {

        printf("%d-",arreglo[c]);
    }

}
void mostrar_arreglo(int arreglo[],int i)
{
int c=0;
system("cls");
for(c=0;c<i;c++)
    {
    printf("%d-",arreglo[c]);
    }
    system("pause");
}
//////////////////////////////////////////////////////////////////////////////////////////
void ejer_6()//Dada una cadena de caracteres, hacer una funci�n que determine si dicha cadena es pal�ndromo (se lee de igual forma de adelante para atr�s como viceversa) o no. La funci�n recibe como par�metro la cadena y retorna 1 o 0 seg�n sea la respuesta.
{
char palabra[DIMCADENA];
int longitud=0;
system("cls");
printf("ingrese la palabra:");
fflush(stdin);
gets(&palabra);
longitud=strlen(palabra);
int inicio=0;
int fin=longitud-1;
for(inicio=0;inicio<(longitud/2);inicio++)
{
if(palabra[inicio]==palabra[fin])
    {
    printf("es un palindromo");
    }
    else
        {
        printf("No es un palindromo");
        }
}
system("pause");
menu_principal();

}
/////////////////////////////////////
void ejer_7()// Hacer una funci�n que intercambie el contenido de dos variables. (pasaje de par�metros por referencia)
{
    system("cls");
    int a=0;
    int b=0;
    printf("ingrese al valor de la variable a:");
    fflush(stdin);
    scanf("%d",&a);
    printf("ingrese el valor de la variable b");
    fflush(stdin);
     scanf("%d",&b);

    printf("a vale: %d, b vale:%d",a,b);
    intercambio(&a,&b);
    printf("ahora a vale:%d y b vale:%d",a,b);
    system("pause");
    system("cls");
    menu_principal();
}
void intercambio(int *a,int *b)
{
int aux=0;
aux=*a;
*a=*b;
*b=aux;
}
void ejer_8()//Dados dos arreglos de n�meros enteros ordenados de menor a mayor, hacer una funci�n que los reciba como par�metros y retorne un tercer arreglo que contenga los datos de los arreglos anteriores, tambi�n ordenados. Se los debe intercalar.
{
int arreglo_a[5]={1,3,5,7,9};
int arreglo_b[5]={2,4,6,8,10};
int tam_a=sizeof(arreglo_a)/sizeof(int);
int tam_b=sizeof(arreglo_b)/sizeof(int);
int validos=tam_a+tam_b;
int arreglo_final[validos];
int i=0;
intercalar(arreglo_a,arreglo_b,arreglo_final,validos);


}
void intercalar(int arreglo_a[],int arreglo_b,int arreglo_final[],int validos)
{
int i=0;
int j=0;
int k=0;
for(i=0;i<validos;i++)
    {
    arreglo_final[k]=arreglo_a[i];
    }
for(j=0;j<validos;j++)
    {
    arreglo_final[k++]=arreglo_a[j];
    }


imprimir_arreglo_final(arreglo_final,validos);
}
void imprimir_arreglo_final(int arreglo_final,int validos)
{
int c=0;
for(c=0;c<validos;c++)
    {
   // printf("%d-",arreglo_final[c]);
    }
}

void ejer_9()// Dados dos arreglos paralelos, uno con apellidos y otro con edades. Se debe hacer un programa para encontrar el apellido de la persona de mayor edad. Se debe modularizar.
{
}
void ejer_10()//Hacer una funci�n que reciba como par�metros de entrada un arreglo de enteros y su dimensi�n, y tres par�metros de salida, tres n�meros enteros que representen: valor m�ximo, valor m�nimo y promedio. Se debe usar pasaje de par�metros por referencia.
{
}
