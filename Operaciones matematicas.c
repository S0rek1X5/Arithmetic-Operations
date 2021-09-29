#include <stdio.h>
int main ()
{
	//Operaciones aritmeticas basicas
	int operacion, opc;
	float num1, num2, suma1, resta1, multiplicacion1, division1;
	
	do{
		printf("!!!Bienvenido!!!");
		printf("\nIntroduzca su primer valor: ");
		scanf("%f", &num1);
		printf("\nIntroduzca su segundo valor: ");
		scanf("%f", &num2);
		suma1= num1+num2;resta1= num1-num2;
		multiplicacion1= (num1)*(num2);division1= num1/num2;
		
		printf("\nEscriba que operacion desea realizar\nSuma = 1\nResta = 2\nMultiplicacion = 3\nDivision = 4\n-> ");
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
		printf("\nDigite 1 para CONTINUAR --- 2 para SALIR\n: ");scanf("%d",&opc);
		printf("----------------------------------\n");
	}while(opc==1);
	return 0;
}
