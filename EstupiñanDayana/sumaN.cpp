//EstupiñanDayana
#include<iostream>//operaciones de entrada y salida 
using namespace std;//dar acceso al espacio de nombres(namespace) std, donde se encierra encerrada la libreria estandar
int main()//Es el punto de inicio de su ejecucion 
{
	float DSEO_x,DSEO_i=0,DSEO_s=0,DSEO_l;//declaracion de variable
	cout<<"Ingrese el valor de l: ";//salida de texto en pantalla
	cin>>DSEO_l;//entrada de datos
	do{//bucle hacer mientras 
		cout<<"Ingrese el valor de x: ";// salida de texto en pantalla
		cin>>DSEO_x;//entrada de datos
		DSEO_i=DSEO_i+1;//realizar proceso
		DSEO_s=DSEO_s+DSEO_x;//realizar proceso
	}while(DSEO_i<DSEO_l);//fin de bucle hacer mientras 

	cout<<"La suma de los numeros fue: "<<DSEO_s<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera correcta.
}
