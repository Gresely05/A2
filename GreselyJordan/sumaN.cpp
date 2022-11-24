#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
int main()//el punto de inicio de su ejecución. 
{
	float JAGC_x,JAGC_i=0,JAGC_s=0,JAGC_l;//declaracion de variables
	cout<<"Ingrese el valor de l: ";//salida de texto en pantalla
	cin>>JAGC_l;//entrada de datos
	do{//bucle hacer mientras
		cout<<"Ingrese el valor de x: ";//salida de texto en pantalla
		cin>>JAGC_x;//entrada de datos
		JAGC_i=JAGC_i+1;//realizar proceso
		JAGC_s=JAGC_s+JAGC_x;//realizar proceso
	}while(JAGC_i<JAGC_l);//Fin bucle hace mientras

	cout<<"La suma de los numeros fue: "<<JAGC_s<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
}

