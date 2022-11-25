
#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	int HNJC_aa,HNJC_ma,HNJC_da,HNJC_an,HNJC_mn,HNJC_dn,HNJC_a,HNJC_m,HNJC_d;//declaracion de variables
	cout<<"Ingrese la fecha actual : ";//salida de texto en pantalla
	cin>>HNJC_aa>>HNJC_ma>>HNJC_da;//entrada de datos

	cout<<"Ingrese la fecha de nacimiento : ";//salida de texto en pantalla
	cin>>HNJC_an>>HNJC_mn>>HNJC_dn;//entrada de datos
	if(HNJC_da>HNJC_dn){//inicio del bucle si entonces
		HNJC_d=HNJC_da-HNJC_dn;//realizar proceso
	}else{
		HNKC_da=HNJC_da+30;//realizar proceso
		HNJC_ma=HNJC_ma-1;//realizar proceso
		HNJC_d=HNJC_da-HNJC_dn;//realizar proceso
	}//fin del bucle si entonces
	if(HNJC_ma>HNJC_mn){//inicio del bucle si entonces
		HNJC_m=HNJC_ma-HNJC_mn;//realizar proceso
	}else{
		HNJC_ma=HNJC_ma+12;//realizar proceso
		HNJC_aa=HNJC_aa-1;//realizar proceso
		HNJC_m=HNJC_ma-HNJC_mn;//realizar proceso
	}//fin del bucle si entonces
	HNJC_a=HNJC_aa-HNJC_an;
	cout<<"Usted tiene "<<HNJC_a<<" años, "<<HNJC_m<<" meses, "<<HNJC_d<<" dias "<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
