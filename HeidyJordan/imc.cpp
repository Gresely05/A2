//HeidyNayelliJordanCortez
#include<iostream>//operaciones de entrada/salida
using namespace std;//dar acceso al espacio de nombres (namespace) std, donde se encientra encerrada la libreria estandar
int main()//el punto de inicio de su ejecucion
{
	float HNJC_imc,HNJC_peso,HNJC_altura;//declaracion de variables
	cout<<"Ingrese el peso (kg) : ";//salida de texto en pantalla
	cin>>HNJC_peso;//entrada de datos
	cout<<"Ingrese la altura (metros) : ";//salida de texto en pantalla
	cin>>HNJC_altura;//entrada de datos
	HNJC_imc=HNJC_peso/(HNJC_altura*HNJC_altura);//realizar proceso
	if(HNJC_imc<18.5){//inicio del bucle si entonces
		cout<<"Usted tiene bajo peso"<<endl;//salida de texto en pantalla
	}if(HNJC_imc>=18.5 && HNJC_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;//salida de texto en pantalla
	}if(HNJC_imc>=25 && HNJC_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;//salida de texto en pantalla
	}if(HNJC_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;//salida de texto en pantalla
	}//fin del bucle si entonces
	return 0;//se utiliza para indicar que el programa se ha ejecutado de manera exitosa.

}
