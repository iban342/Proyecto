#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Metodos.h"

void MayMen();

main()
{
	int opcion_final;
	system("cls");
	opcion_final=menu();
	do
	{
	switch(opcion_final)
	{
		case 1:
			MayMen();
			break;
		case 2:
			printf("\nEs un juego en el que se tiene que adivinar un n�mero de 4 cifras, es decir entre 1000 y 9999");
			break;
		case 3:
			printf("\nConsiste en una pila de monedas, de la cual el jugador y la computadora van sacando monedas hasta que ya no quedan m�s en la pila");
			break;	
		case 4:
			printf("\nEste juego cuenta con una base de palabras asociadas a la codificaci�n de algoritmos y al lenguaje de programaci�n C++");
			break;
		case 5:
			printf("\nUsted esta saliendo del programa...");
			break;
			
		default:
		printf("\n\n Ingrese un numero correcto");
		break;	
	}	
		printf("\n");
		system("pause");
	}while(opcion_final!=5);	
}


void MayMen()
{
	int numero_aleatorio=0,intentos=11, numero_ingresado, numero_mayor, numero_menor;
	printf("\n--Este juego consiste en adivinar un numero que esta entre 1 y 999 denominado numero secreto--");
	printf("\n1. Itentos para encontrar el numero: 10");
	printf("\n2. El puntaje obtenido depende de la cantidad de intentos");
	printf("\n3. Al perder o ganar el juego se mostrara el numero secreto");
	printf("\n4. Jugar");
	
	srand(time(NULL));
	numero_aleatorio=1+rand()%(999);
	
	do
	{
		printf("\n\nIngrese un numero: ");
		scanf("%d",&numero_ingresado);
		if(numero_ingresado>numero_aleatorio)
		{
			printf("\nEl numero ingresado es mayor al aleatorio");
		}
		if(numero_ingresado<numero_aleatorio)
		{
			printf("\nEl numero ingresado es menor al aleatorio");
		}
		if(numero_ingresado==numero_aleatorio)
		{
			printf("\nEl numero ingresado es igual al aleatorio");
		}
			
	intentos=intentos-1;	
	}while(numero_ingresado==numero_aleatorio and intentos!=0);
	
	break;
	
}






















































































