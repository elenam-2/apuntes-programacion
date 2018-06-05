/* Problema #1: Calculadora simple
Pida al usuario 2 numeros enteros y adicional pregunte al usuario la operacion 
aritmetica que desea realizar con los dos numeros ingresados (puede ser suma, 
resta, multiplicacion o division), imprima la operacion utilizada y el resultado.
*/

#include <stdio.h>

int main() {
	//Declaracion de variables
	int num1 = 0;
	int num2 = 0;
	int respuesta = 0;
	char opc = '';
	//Declaracion de variables 

	printf("Ingrese numero 1\n");
	scanf("%d", &num1);

	printf("Ingrese numero 2\n");
	scanf("%d", &num2);

	printf("Ingrese la operacion a realizar\n");
	scanf("%s", &opc);

	if(opc == '+') {
		//suma
		respuesta = num1 + num2;		
		printf("Operacion suma, resultado %d\n", respuesta);
	} else if(opc == '-'){
		//resta
		respuesta = num1 - num2;
		printf("Operacion resta, resultado %d\n", respuesta);
	} else if(opc == '*') {
		//multiplicacion
		respuesta = num1 * num2;
		printf("Operacion multiplicacion, resultado %d\n", respuesta);
	} else {
		//division
		respuesta = num1 / num2;
		printf("Operacion division, resultado %d\n", respuesta);
	}

	return 0;
}

