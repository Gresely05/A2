#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	int JAGC_aa,JAGC_ma,JAGC_da,JAGC_an,JAGC_mn,JAGC_dn,JAGC_a,JAGC_m,JAGC_d;//declaracion de variables
	cout<<"Ingrese la fecha actual : ";//salida de texto en pantalla
	cin>>JAGC_aa>>JAGC_ma>>JAGC_da;//entrada de datos

	cout<<"Ingrese la fecha de nacimiento : ";//salida de texto en pantalla
	cin>>JAGC_an>>JAGC_mn>>JAGC_dn;//entrada de datos
	if(JAGC_da>JAGC_dn){//inicio del bucle si entonces
		JAGC_d=JAGC_da-JAGC_dn;//realizar proceso
	}else{
		JAGC_da=JAGC_da+30;//realizar proceso
		JAGC_ma=JAGC_ma-1;//realizar proceso
		JAGC_d=JAGC_da-JAGC_dn;//realizar proceso
	}//fin del bucle si entonces
	if(JAGC_ma>JAGC_mn){//inicio del bucle si entonces
		JAGC_m=JAGC_ma-JAGC_mn;//realizar proceso
	}else{
		JAGC_ma=JAGC_ma+12;//realizar proceso
		JAGC_aa=JAGC_aa-1;//realizar proceso
		JAGC_m=JAGC_ma-JAGC_mn;//realizar proceso
	}//fin del bucle si entonces
	JAGC_a=JAGC_aa-JAGC_an;
	cout<<"Usted tiene "<<JAGC_a<<" años, "<<JAGC_m<<" meses, "<<JAGC_d<<" dias "<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
