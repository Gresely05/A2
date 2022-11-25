
#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float HNJC_x,HNJC_s=0,HNJC_s1=0,HNJC_s5=0;//declaracion de variables
	int HNJC_i=0,HNJC_l,HNJC_i1=0,HNJC_i5=0;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>HNJC_l;
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x : ";//salida de texto en pantalla
		cin>>HNJC_x;//entrada de datos
		HNJC_i=HNJC_i+1;//realizar proceso
		HNJC_s=HNJC_s+HNJC_x;//realizar proceso
		if(HNJC_x==1){//inicio del bucle si entonces
			HNJC_i1=HNJC_i1+1;//realizar proceso
			HNJC_s1=HNJC_s1+HNJC_x;//realizar proceso

		}else{
			HNJC_i5=HNJC_i5+1;//realizar proceso
			HNJC_s5=HNJC_s5+HNJC_x;//realizar proceso
		}//fin del bucle si entonces

	}while(HNJC_i<HNJC_l);//fin del bucle hacer mientras
	cout<<"La cantidad de monedas fue : "<<HNJC_i<<endl;//salida de texto en pantalla
	cout<<"El valor fue: "<<HNJC_s<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas s1 fue : "<<HNJC_i1<<endl;//salida de texto en pantalla
	cout<<"El valor fue : "<<HNJC_s1<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas .5"//salida de texto en pantalla
	cout<<"El valor fue : "<<HNJC_s5<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
