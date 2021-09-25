#include <stdio.h>
int main ()
{
	//Operaciones aritmeticas basicas
	int operacion;
	float num1, num2, suma1, resta1, multiplicacion1, division1;
	
	//Bloque de instrucciones
	printf("\nIntroduzca su primer valor: ");
	scanf("%f", &num1);
	printf("\nIntroduzca su segundo valor: ");
	scanf("%f", &num2);
	//Bloque de operaciones
	suma1= num1+num2;
	resta1= num1-num2;
	multiplicacion1= (num1)*(num2);
	division1= num1/num2;
	
	//Eleccion de la operacion
	printf("\nEscriba que operacion desea realizar Suma = 1, Resta = 2, Multiplicacion = 3 o Division = 4 -> ");
	scanf("%d", &operacion);
	if (operacion==1){
		printf("\nEl resultado de su suma es: 1.2f", suma1);
	}
	else if(operacion==2){
		printf("\nEl resultado de su resta es: 1.2f", resta1);
	}
	else if(operacion==3){
		printf("\nEl resultado de su multiplicacion es: 1.2f", multiplicacion1);
	}
	else if(operacion==4){
		printf("\nEl resultado de su division es: %1.2f", division1);
	}
	else{
		printf("\nLa operacion no ha sido escrita correctamente o no esta dentro de las opciones del algoritmo");
	}
	return 0;
	
	
}
