//EstupiñanDayana
#include<iostream>//operacion de entrada y salida
using namespace std;//dar acceso al espacio de nombres(namespace) std, donde se encuentra la libreria estandar
int main()//Es el punto de su ejecucion
{
	float DSEO_x,DSEO_pm;//declaracion de variable
	int DSEO_i=0,DSEO_l;//declaracion de variable 
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>DSEO_l;//entrada de datos
	do{//inicio de bucle hacer mientras 
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>DSEO_x;//entrada de datos
		DSEO_i=DSEO_i+1;//realizar proceso
		if(DSEO_x>DSEO_pm){//inicio de bucle si entonces
			DSEO_pm=DSEO_x;//realizar proceso
		}//fin del bucle si entonces
	}while(DSEO_i<DSEO_l);
	cout<<"El promedio maximo de el curso fue: "<<DSEO_pm<<endl<<endl;//salida de texto en pantalla 
	return 0;// se utiliza para indicar que el programase ha ejecutado de manera correcta.
}
