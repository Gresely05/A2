//HEIDYNAYELLIJORDANCORTEZ
#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float HNJC_x,HNJC_s=0;//declaracion de variables
	int HNJC_i=0,HNJC_l;//declaracion de variables
	cout<<"Ingrese cantidad de egrasos (1) : ";//salida de texto en pantalla
	cin>>HNJC_l;//entrada de datos
	cout<<"Ingrese el saldo inicial (s) : ";//salida de texto en pantalla
	cin>>HNJC_s;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese egreso (x) : ";//salida de texto en pantalla
		cin>>HNJC_x;//entrada de datos
		HNJC_i=HNJC_i+1;//realizar proceso
		HNJC_s=HNJC_s+HNJC_x;//realizar proceso
	}while(HNJC_i<HNJC_l);//fin del bucle hacer mientras
	cout<<"El saldo final es: "<<HNJC_s<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
