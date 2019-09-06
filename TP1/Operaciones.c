#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
void pedirNumeros(char letraOperandoA, int* operandoA, char letraOperandoB, int* operandoB)
{
    printf("Ingrese por favor el valor de %c: ",letraOperandoA);
    scanf("%d", operandoA);
    printf("\nIngrese por favor el valor de %c: ",letraOperandoB);
    scanf("%d", operandoB);

}
int sumarNumeros(int operandoA, int operandoB)
{
return operandoA + operandoB;
}
int restarNumeros(int operandoA, int operandoB)
{
return operandoA - operandoB;
}
int multiplicarNumeros(int operandoA, int operandoB)
{
return operandoA * operandoB;
}
float dividirNumeros(int operandoA, int operandoB)
{
    if(operandoB == 0)
    {
        printf("No se puede dividir  por cero.");
        return 0;
    }
return operandoA / (float)operandoB;
}
int factorialNumero(int operando)
{
    int resultado = 1;
    int i;
    if(operando == 0)
    {
        resultado = 1;
    }
    else
    {
        for(i = operando; i>1; i--)
        {
             resultado = resultado * i;
        }
    }
    return resultado;

}

