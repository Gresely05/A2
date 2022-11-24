#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float JAGC_x,JAGC_s=0,JAGC_s1=0,JAGC_s5=0;//declaracion de variables
	int JAGC_i=0,JAGC_l,JAGC_i1=0,JAGC_i5=0;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>JAGC_l;
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x : ";//salida de texto en pantalla
		cin>>JAGC_x;//entrada de datos
		JAGC_i=JAGC_i+1;//realizar proceso
		JAGC_s=JAGC_s+JAGC_x;//realizar proceso
		if(JAGC_x==1){//inicio del bucle si entonces
			JAGC_i1=JAGC_i1+1;//realizar proceso
			JAGC_s1=JAGC_s1+JAGC_x;//realizar proceso

		}else{
			JAGC_i5=JAGC_i5+1;//realizar proceso
			JAGC_s5=JAGC_s5+JAGC_x;//realizar proceso
		}//fin del bucle si entonces

	}while(JAGC_i<JAGC_l);//fin del bucle hacer mientras
	cout<<"La cantidad de monedas fue : "<<JAGC_i<<endl;//salida de texto en pantalla	
	cout<<"El valor fue: "<<JAGC_s<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas s1 fue : "<<JAGC_i1<<endl;//salida de texto en pantalla
	cout<<"El valor fue : "<<JAGC_s1<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas .5"//salida de texto en pantalla
	cout<<"El valor fue : "<<JAGC_s5<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
