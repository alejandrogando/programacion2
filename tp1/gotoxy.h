#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void alineacion(int x,int y)
{
    HANDLE manejador;//se utiliza para referirse a cualquier técnica que le permite llegar a otro objeto.
    COORD coordenadas;//COORD estructura que va a contener la posicion x, y
    manejador = GetStdHandle(STD_OUTPUT_HANDLE); //GetStdHandle y STD_OUTPUT_HANDLE manipulador de dispositivo de Salida standar.
    coordenadas.X=x;
    coordenadas.Y=y;
    SetConsoleCursorPosition(manejador,coordenadas);//setConsoleCursorPosition recibe un manipulador del buffer de pantalla y las nuevas coordenadas.
}

#endif // GOTOXY_H_INCLUDED
