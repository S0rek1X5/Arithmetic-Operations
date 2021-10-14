#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int operacion,opc;
	float fst,sec,suma,resta,multip,divi,raiz;
	cout<<"------BIENVENIDO------"<<endl;
	do{
		cout<<"Digite su primer valor: "<<endl;cin>>fst;
		cout<<"Digite su segundo valor: "<<endl;cin>>sec;
		cout<<"Que desea realizar?\nSuma - 1  Resta - 2\nMultiplicacion - 3  Division - 4\n Raiz cuadrada - 5: ";cin>>operacion;
		if(operacion==1){
			suma=fst+sec;
			cout<<"Resultado de su suma es: "<<suma;
		}
		else if(operacion==2){
			resta=fst-sec;
			cout<<"Resultado de su resta es: "<<resta;
		}
		else if(operacion==3){
			multip=fst*sec;
			cout<<"Resultado de su multiplicacion: "<<multip;
		}
		else if(operacion==4){
			divi=fst/sec;
			cout<<"Resultado de su division: "<<divi;
		}
		else if(operacion==5){
			raiz=sqrt(fst)+sqrt(sec);
			cout<<"Resultado de la suma de la raiz: "<<raiz;
		}
		else{
			cout<<"------ERROR------\nRecuerde digitar solo las opciones dadas en el programa";
		}
		cout<<"\nDigite 1 para VOLVER A INTENTARLO - Digite 2 para SALIR: ";cin>>opc;
		cout<<"\n---------------------------------------------------------\n";
	}while(opc==1);
	return 0;
}
