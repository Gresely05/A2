es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa
int main()
{
	
Las variables de este tipo almacenan números en formato de coma flotante, esto es, contienen un valor de mantisa y otro
	float RYMMG_x,RYMMG_pm=0;
Números enteros definidos con la palabra clave int. Letras o caracteres definidos
	int RYMMG_i=0,RYMMG_l;
es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"ingrese RYMMG_l: ";
es el flujo de entrada estándar que normalmente es el teclado
	cin>>RYMMG_l;
permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
	do{
		es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"ingrese RYMMG_x: ";
		es el flujo de entrada estándar que normalmente es el teclado
		cin>>RYMMG_x;
		RYMMG_i=RYMMG_i+1;
		es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
		if(RYMMG_x>RYMMG_pm){
			RYMMG_pm=RYMMG_x;
		}
		permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
	}while(RYMMG_i<RYMMG_l);
es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"el promedio maximo de el curso fue :"<<RYMMG_pm<<endl<<endl;
	Finaliza la ejecución de una función y devuelve el control a la función de llamada
return 0; 
}

