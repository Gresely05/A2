//EstupiñanDayana
#include<iostream>//operacion de entrada y salida
using namespace std;//dar acceso al espacio de nombres (namespace) std,donde se encuentra la libreria estandar
int main()//Es el punto de inicio de su ejecucion
{
	float DSEO_x,DSEO_s=0,DSEO_vb,DSEO_piva=12,DSEO_viva,DSEO_pdesc=10,DSEO_vdesc,DSEO_vn;//declaracion de variabl3
	int DSEO_i=0,DSEO_l;//declaracion de variable
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>DSEO_l;//entrada de datos
	do{//inicio de bucle hacer mientras 
		cout<<"Ingrese x: ";//salida de texto en oantalla
		cin>>DSEO_x;//entrada de datos
		DSEO_i=DSEO_i+1;//realizar proceso
		DSEO_s=DSEO_s+DSEO_x;//realizar proceso
	}while(DSEO_i<DSEO_l);//fin de bucle hacer mientras
	DSEO_vb=DSEO_s;//realizar proceso
	DSEO_viva=DSEO_vb*DSEO_piva/100;//realizar proceso
	DSEO_vdesc=DSEO_vb*DSEO_pdesc/100;//realizar proceso
	DSEO_vn=DSEO_vb+DSEO_viva-DSEO_vdesc;//realizar proceso
	cout<<"El valor a pagar es de: "<<DSEO_vn<<endl;//salida de texto en pantalla
	return 0;//Se utiliza para indicar que el programa de ejecuto de manera correcta.
	
}

