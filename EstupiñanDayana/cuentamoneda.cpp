//EstupiñanDayana
#include<iostream>  //operacion de entrada y salida
using namespace std; // da acceso al espacio de nombre(namespace) std, donde se encierra la libreria standar
int main() // Es el punto de inicio de su ejecucion 
{
	float DSEO_x,DSEO_s=0,DSEO_s1=0,DSEO_s5=0; // Es declarar las variables 
	int DSEO_i=0,DSEO_l,DSEO_i1=0,DSEO_i5=0; // Es declarar las variables 
	cout<<"Ingrese l: "; // Salida de un texto en la pantalla 
	cin>>DSEO_l; 
	do{ // Es el inicio del bucle hacer mientras
		cout<<"Ingrese x : "; // salida de texto en pantalla 
		cin>>DSEO_x; // entrada de datos
		DSEO_i=DSEO_i+1; // realizar proceso
		DSEO_s=DSEO_s+DSEO_x; // realizar proceso
		if(DSEO_x==1){ // inicio de bucle si entonces
			DSEO_i1=DSEO_i1+1; // realizar proceso
			DSEO_s1=DSEO_s1+DSEO_x; // realizarproceso

		}else{
			DSEO_i5=DSEO_i5+1; // realizar proceso
			DSEO_s5=DSEO_s5+DSEO_x; // realiza proceso
		}//fin del bucle si entonces

	}while(DSEO_i<DSEO_l);// fin del bucle hacer mientras
	cout<<"La cantidad de monedas fue : "<<DSEO_i<<endl;//salida de texto en pantalla
	cout<<"El valor fue: "<<DSEO_s<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas s1 fue : "<<DSEO_i1<<endl;// salida del texto en pantalla
	cout<<"El valor fue : "<<DSEO_s1<<endl;//salida de texto en pantalla

	cout<<"La cantidad de monedas .5";//salida del texto en pantalla
	cout<<"El valor fue : "<<DSEO_s5<<endl;//salida ee texto en pantalla
	return 0;// Se utiliza para indicar que el programase ha ejecutado de manera correcta.

}
