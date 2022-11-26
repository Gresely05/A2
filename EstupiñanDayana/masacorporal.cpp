//EstupiñanDayana
#include<iostream>//operacion de entrada y salida
using namespace std;// dar acceso al espacio de nombres (namespace) std, donde se encuentra la libreria estandar
int main()//Es el punto de inicio de su ejecucion
{
	float DSEO_imc,DSEO_peso,DSEO_altura;//declaracion de variable
	cout<<"Ingrese el peso (kg) : ";//salida de texto en pantalla
	cin>>DSEO_peso;//entrada de datos
	cout<<"Ingrese la altura (metros) : ";//salida de texto en pantalla
	cin>>DSEO_altura;//entrada de datos
	DSEO_imc=DSEO_peso/(DSEO_altura*DSEO_altura);//realizar proceso
	if(DSEO_imc<18.5){//inicio del bucle si entonces
		cout<<"Usted tiene bajo peso"<<endl;//salida de texto en pantalla
	}if(DSEO_imc>=18.5 && DSEO_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;//salida de texto en pantalla
	}if(DSEO_imc>=25 && DSEO_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;//salida ee texto en pantalla
	}if(DSEO_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;//salida de texto en pantalla
	}//fin de bucle si entonces 
	return 0;//Se utiliza para indicar que el programa se ha ejecutado de manera correcta.

}
