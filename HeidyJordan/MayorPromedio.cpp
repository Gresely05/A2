
#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float HNJC_x,HNJC_pm;//declaracion de variables
	int HNJC_i=0,HNJC_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>HNJC_l;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>HNJX_x;//entrada de datos
		HNJC_i=HNJC_i+1;//realizar proceso
		if(HNJC_x>HNJC_pm){//inicio del bucle si entonces
			HNJC_pm=HNJC_x;//realizar proceso
		}//fin del bucle si entonces
	}while(HNJC_i<HNJC_l);//fin del bucle hacer mientras
	cout<<"El promedio maximo de el curso fue: "<<HNJC_pm<<endl<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
}
