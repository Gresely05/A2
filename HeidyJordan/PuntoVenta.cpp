
#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float HNJC_x,HNJC_s=0,HNJC_vb,HNJC_piva=12,HNJC_viva,HNJC_pdesc=10,HNJC_vdesc,HNJC_vn;//declaracion de variables
	int HNJC_i=0,HNJC_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>HNJC_l;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>HNJC_x;//entrada de datos
		HNJC_i=HNJC_i+1;//realizar proceso
		HNJC_s=HNJC_s+HNJC_x;//realizar proceso
	}while(HNJC_i<HNJC_l);//fin del bucle hacer mientras
	HNJC_vb=HNJC_s;//realizar proceso
	HNJC_viva=HNJC_vb*HNJC_piva/100;//realizar proceso
	HNJC_vdesc=HNJC_vb*HNJC_pdesc/100;//realizar proceso
	HNJC_vn=HNJC_vb+HNJC_viva-HNJC_vdesc;//realizar proceso
	cout<<"El valor a pagar es de: "<<HNJC_vn<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
