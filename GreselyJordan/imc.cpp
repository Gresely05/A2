#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float JAGC_imc,JAGC_peso,JAGC_altura;//declaracion de variables
	cout<<"Ingrese el peso (kg) : ";//salida de texto en pantalla
	cin>>JAGC_peso;//entrada de datos
	cout<<"Ingrese la altura (metros) : ";//salida de texto en pantalla
	cin>>JAGC_altura;//entrada de datos
	JAGC_imc=JAGC_peso/(JAGC_altura*JAGC_altura);//realizar proceso
	if(JAGC_imc<18.5){//inicio del bucle si entonces
		cout<<"Usted tiene bajo peso"<<endl;//salida de texto en pantalla
	}if(JAGC_imc>=18.5 && JAGC_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;//salida de texto en pantalla
	}if(JAGC_imc>=25 && JAGC_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;//salida de texto en pantalla
	}if(JAGC_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;//salida de texto en pantalla
	}//fin del bucle si entonces
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
