
 es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida. 
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa. 
int main()
{
        es un tipo de variable primitiva que se caracteriza por ser una variable numérica que admite parte decimal
	float RYMG_x,RYMG_s=0.0;
	Números enteros definidos con la palabra clave int. Letras o caracteres definidos
	int RYMG_i=0,RYMG_l:";
	es el flujo de salida estándar que por lo general es la pantalla
	cout<<"ingrese el valor de RYMG_l :";
	es el flujo de entrada estándar que normalmente es el teclado
	cin>>RYMG_l;
	permite repetir una instrucción o una instrucción compuesta hasta que  una  expresión especificada sea false
	do{
	es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"ingrese el valor de RYMG_x :";
	es el flujo de entrada estándar que normalmente es el teclado
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
repetir una instrucción o una instrucción compuesta hasta que una expresión especificada
	}while(RYMG_i<RYMG_l)
	es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"la suma de los numeros fue : "<<endl;
	Finaliza la ejecución de una función y devuelve el control a la función de llamada
	return 0;
}
