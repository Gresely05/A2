//EstupiñanDayana
#include<iostream>//operacion de entrada y salida
using namespace std;//dar acceso al espacio de nombre(namespace) std, donde se encuentra la libreria estandar 
int main()//Es el punto de inicio de su ejecucion
{
	int DSEO_aa,DSEO_ma,DSEO_da,DSEO_an,DSEO_mn,DSEO_dn,DSEO_a,DSEO_m,DSEO_d;//declaracion de variable
	cout<<"Ingrese la fecha actual : ";//salida de texto en pantalla
	cin>>DSEO_aa>>DSEO_ma>>DSEO_da;//entrada de datos

	cout<<"Ingrese la fecha de nacimiento : ";//salida de texto en pantalla
	cin>>DSEO_an>>DSEO_mn>>DSEO_dn;//entrada de datos
	if(DSEO_da>DSEO_dn){//inicio de bucle si entonces
		DSEO_d=DSEO_da-DSEO_dn;//realizar proceso
	}else{
		DSEO_da=DSEO_da+30;//realizar proceso
		DSEO_ma=DSEO_ma-1;//realizar proceso
		DSEO_d=DSEO_da-DSEO_dn;//realizar proceso
	}//fin de bucle si entinces 
	if(DSEO_ma>DSEO_mn){//inicio de bucle si entonces 
		DSEO_m=DSEO_ma-DSEO_mn;//realizar proceso
	}else{
		DSEO_ma=DSEO_ma+12;//realizar proceso
		DSEO_aa=DSEO_aa-1;//realizar proceso
		DSEO_m=DSEO_ma-DSEO_mn;//realizar proceso
	}//fin de bucle si entonces 
	DSEO_a=DSEO_aa-DSEO_an;
	cout<<"Usted tiene "<<DSEO_a<<" años, "<<DSEO_m<<" meses, "<<DSEO_d<<" dias "<<endl;//salida de texto en pantalla
	return 0;//Se utiliza para indicar que el programa se ha ejecutada de manera correta.

}
