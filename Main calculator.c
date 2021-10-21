#include <stdio.h>
void Suma(float a,float b);
void Resta(float a,float b);
void Multiplicacion(float a,float b);
void Division(float a,float b);
int main (){
	int operacion,opc;
	float num1,num2;
	do{
		printf("\t!!!Bienvenido!!!");
		printf("\nIntroduzca su primer valor: ");scanf("%f", &num1);
		printf("\nIntroduzca su segundo valor: ");scanf("%f", &num2);
		printf("\nEscriba que operacion desea realizar\nSuma = 1\nResta = 2\nMultiplicacion = 3\nDivision = 4\n-> ");
		scanf("%d", &operacion);
		switch(operacion){
			case 1:
				Suma(num1,num2);break;
			case 2:
				Resta(num1,num2);break;
			case 3:
				Multiplicacion(num1,num2);break;
			case 4:
				Division(num1,num2);break;
			default:
				printf("\nDigite una de las opciones disponibles");
		}
		printf("\nDigite 1 para CONTINUAR --- 2 para SALIR\n: ");scanf("%d",&opc);
		printf("----------------------------------\n");
	}while(opc==1);
	return 0;
}
void Suma(float a,float b){
	float result;
	result=a+b;
	printf("\nEl resultado de su suma es: %1.2f",result);
}
void Resta(float a,float b){
	float result;
	result=a-b;
	printf("\nEl resultado de su resta: %1.2f",result);
}
void Multiplicacion(float a,float b){
	float result;
	result=a*b;
	printf("\nEl resultado de su Multiplicacion es: %1.2f",result);
}
void Division(float a,float b){
	float result;
	result=a/b;
	printf("\nEl resultado de su Division es: %1.2f",result);
}
