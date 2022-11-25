
es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa
int main()
{
	
Las variables de este tipo almacenan números en formato de coma flotante, esto es, contienen un valor de mantisa y otro
	float RYMG_x,RYMG_s=0,RYMG_s1=0,RYMG_s5=0;
Números enteros definidos con la palabra clave int. Letras o caracteres definidos
	int RYMG_i=0,RYMG_l,RYMG_i1=0,RYMG_i5=0;
es el flujo de salida estándar que por lo general es la pantalla.
	cout<<" ingrese RYMG_l :"; 
es el flujo de entrada estándar que normalmente es el teclado
	cin>>RYMG_l;
permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
	do{
		
es el flujo de salida estándar que por lo general es la pantalla.
		cout<<" ingrese RYMG_x :";
es el flujo de entrada estándar que normalmente es el teclado
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
		es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
		if(RYMG_x==1){

			RYMG_i1=RYMG_i1+1;
			RYMG_s1=RYMG_s1+RYMG_x;
	

		el cual indica la acción o conjunto de acciones a llevar a cabo, en caso de que la condición del if no se cumpla.
		}else{
		RYMG_i5=RYMG_i5+1;
		RYMG_s5=RYMG_s5+RYMG_x;
	}
permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
}while(RYMG_i<RYMG_l)
es el flujo de salida estándar que por lo general es la pantalla.
cout<<" la cantidad de monedas fue :"<<RYMG_i<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"el valor en monedas fue :"<<RYMG_s<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"la cantidad de monedas ($1) fue :"<<RYMG_i1<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"el valor fue :"<<RYMG_s1<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"la cantidad de monedas .50 fue :"<<RYMG_i5<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"el valor fue :"<<RYMG_s5<<endl;
Finaliza la ejecución de una función y devuelve el control a la función de llamada
return 0;
}

