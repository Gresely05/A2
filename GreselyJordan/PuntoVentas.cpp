#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float JAGC_x,JAGC_s=0,JAGC_vb,JAGC_piva=12,JAGC_viva,JAGC_pdesc=10,JAGC_vdesc,JAGC_vn;//declaracion de variables
	int JAGC_i=0,JAGC_l;//declaracion de variables
	cout<<"Ingrese l: ";//salida de texto en pantalla
	cin>>JAGC_l;//entrada de datos
	do{//inicio del bucle hacer mientras
		cout<<"Ingrese x: ";//salida de texto en pantalla
		cin>>JAGC_x;//entrada de datos
		JAGC_i=JAGC_i+1;//realizar proceso
		JAGC_s=JAGC_s+JAGC_x;//realizar proceso
	}while(JAGC_i<JAGC_l);//fin del bucle hacer mientras
	JAGC_vb=JAGC_s;//realizar proceso
	JAGC_viva=JAGC_vb*JAGC_piva/100;//realizar proceso
	JAGC_vdesc=JAGC_vb*JAGC_pdesc/100;//realizar proceso
	JAGC_vn=JAGC_vb+JAGC_viva-JAGC_vdesc;//realizar proceso
	cout<<"El valor a pagar es de: "<<JAGC_vn<<endl;//salida de texto en pantalla
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.
	
}
