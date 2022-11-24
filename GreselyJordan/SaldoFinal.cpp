#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float JAGC_x,JAGC_s=0;//declaracion de variables
	int JAGC_i=0,JAGC_l;//declaracion de variables
	cout<<"Ingrese cantidad de egrasos (1) : ";//salida de texto en pantalla
	cin>>JAGC_l;//entrada de datos
	cout<<"Ingrese el saldo inicial (s) : ";//salida de texto en pantalla
	cin>>JAGC_s;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese egreso (x) : ";//salida de texto en pantalla
		cin>>JAGC_x;//entrada de datos
		JAGC_i=JAGC_i+1;//realizar proceso
		JAGC_s=JAGC_s+JAGC_x;//realizar proceso
	}while(JAGC_i<JAGC_l);//fin del bucle hacer mientras
	cout<<"El saldo final es: "<<JAGC_s<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
