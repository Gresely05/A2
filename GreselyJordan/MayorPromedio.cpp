#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float JAGC_x,JAGC_pm;//declaracion de variables
	int JAGC_i=0,JAGC_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>JAGC_l;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>JAGC_x;//entrada de datos
		JAGC_i=JAGC_i+1;//realizar proceso
		if(JAGC_x>JAGC_pm){//inicio del bucle si entonces
			JAGC_pm=JAGC_x;//realizar proceso
		}//fin del bucle si entonces
	}while(JAGC_i<JAGC_l);//fin del bucle hacer mientras
	cout<<"El promedio maximo de el curso fue: "<<JAGC_pm<<endl<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
}

