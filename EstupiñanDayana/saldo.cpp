//EstupiñanDayana
#include<iostream>//operacion de entrada y salida 
using namespace std;//dar acceso al espaciode nombre(namesoace) std,donde se encuentra cerrada la libreria estandar
int main()//Es el punto de inicio de ejecucion
{
	float DSEO_x,DSEO_s=0;//declaracion de variable 
	int DSEO_i=0,DSEO_l;//declaracion de variable
	cout<<"Ingrese cantidad de egrasos (1) : ";//salida de texto en pantalla
	cin>>DSEO_l;//entrada de datos
	cout<<"Ingrese el saldo inicial (s) : ";//salida de texto en pantalla
	cin>>DSEO_s;//entrada de datos
	do{//inicio de bucle hacer mientras 
		cout<<"Ingrese egreso (x) : ";//salida de texto en pantalla
		cin>>DSEO_x;//entrada de datos
		DSEO_i=DSEO_i+1;//realizar proceso
		DSEO_s=DSEO_s+DSEO_x;//realizar proceso
	}while(DSEO_i<DSEO_l); //fin del bucle hacer mientras 
	cout<<"El saldo final es: "<<DSEO_s<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera correcta.

}
