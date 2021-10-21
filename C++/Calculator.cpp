#include <iostream>
#include<math.h>
using namespace std;
void Suma(float a,float b);
void Resta(float a,float b);
void Multiplicacion(float a,float b);
void Division(float a,float b);
void Raiz(float a,float b);
int main(){
	int operacion,opc;
	float fst,sec,suma,resta,multip,divi;
	cout<<"\t------BIENVENIDO------"<<endl;
	do{
		cout<<"Digite su primer valor: "<<endl;cin>>fst;
		cout<<"Digite su segundo valor: "<<endl;cin>>sec;
		cout<<"\tQue desea realizar?\nSuma - 1  Resta - 2\nMultiplicacion - 3  Division - 4\nRaiz cuadrada - 5: ";cin>>operacion;
		switch(operacion){
			case 1:
				Suma(fst,sec);break;
			case 2:
				Resta(fst,sec);break;
			case 3:
				Multiplicacion(fst,sec);break;
			case 4:
				Division(fst,sec);break;
			case 5:
				Raiz(fst,sec);break;
			default:
				cout<<"------ERROR------\nRecuerde digitar solo las opciones dadas en el programa";
		} 
		cout<<"\nDigite 1 para VOLVER A INTENTARLO - Digite 2 para SALIR: ";cin>>opc;
		cout<<"\n---------------------------------------------------------\n";
	}while(opc==1);
	return 0;
}
void Suma(float a,float b){
	float result;
	result=a+b;
	cout<<"Su resultado es: "<<result;
}
void Resta(float a,float b){
	float result;
	result=a-b;
	cout<<"Su resultado es: "<<result;
}
void Multiplicacion(float a,float b){
	float result;
	result=a*b;
	cout<<"Su resultado es: "<<result;
}
void Division(float a,float b){
	float result;
	result=a/b;
	cout<<"Su resultado es: "<<result;
}
void Raiz(float a,float b){
	float raiz_1,raiz_2;
	raiz_1=sqrt(a);raiz_2=sqrt(b);
	cout<<""<<raiz_1<<" Y "<<raiz_2;
}
