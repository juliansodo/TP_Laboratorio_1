#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
int main()
{
    system("color 0C");
    int x = 0;
    int y = 0;
    int opcionMenu;
    int cargoDatos = 0;
    printf("\t\t\t\t\tBienvenido! \n");

    do
    {
        printf("\t\t\t\tOperando X = %d, Operando Y = %d \n", x,y);
        printf("\n1-Modificar operandos\n2-Sumar operandos\n3-Restar operandos\n4-Dividir operandos\n5-Multiplicar operandos\n6-Calcular el factorial de X\n7-Calcular el factorial de Y\n8-Limpiar Pantalla\n0-Salir\nElija la opcion que desee: ");
        scanf("%d", &opcionMenu);
        if(cargoDatos == 0 && opcionMenu != 1)
        {
            printf("\nDebe cargar por lo menos una vez los operandos X e Y. \n");
            opcionMenu = 1;
            cargoDatos = 1;
        }
        switch(opcionMenu)
        {
        case 1:
            pedirNumeros('X', &x, 'Y', &y);
            system("cls");
            break;
        case 2:
            printf("\tEl resultado de la suma es %d \n\n", sumarNumeros(x, y));
            break;
        case 3:
            printf("\tEl resultado de la resta es %d \n\n", restarNumeros(x, y));
            break;
        case 4:
            printf("\tEl resultado de la division es %f \n\n", dividirNumeros(x, y));
            break;
        case 5:
            printf("\tEl resultado de la multiplicacion es %d \n\n", multiplicarNumeros(x, y));
            break;
        case 6:
            printf("\tEl factorial de X es %d \n\n", factorialNumero(x));
            break;
        case 7:
            printf("\tEl factorial de Y es %d \n\n", factorialNumero(y));
            break;
        case 8: system("cls"); break;
        case 0:
            printf(" \t\tHasta luego!!!\n\n\n");
            break;
        }

    }
    while(opcionMenu !=0);
    return 0;
}
