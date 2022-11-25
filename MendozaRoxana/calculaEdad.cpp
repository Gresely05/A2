es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa
int main()
{
	
Números enteros definidos con la palabra clave int. Letras o caracteres definidos
	int RYMG_aa,RYMG_ma,RYMG_da,RYG_an,RYMG_mn,RYMG_dn,RYMG_a,RYMG_m,RYMG_d;
es el flujo de salida estándar que por lo general es la pantalla.	
cout<<"ingrese la fecha actual :";
es el flujo de entrada estándar que normalmente es el teclado
	cin>>RYMG_aa>>RYMG_ma>>RYMG_da;
es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"ingrese la fecha de nacimiento :";
es el flujo de entrada estándar que normalmente es el teclado
	cin>>RYMG_an>>RYMG_mn>>RYMG_dn;
es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.
	if(RYMG_da>RYMG_dn){
		RYG_d=RYMG_da-RYMG_dn;
el cual indica la acción o conjunto de acciones a llevar a cabo, en caso de que la condición del if no se cumpla.
	}else{
		RYMG_da=RYMG_da+30;
		RYMG_ma=RYMG_ma-1;
		RYMG_d=RYG_da-RYMG_dn;
	}
es una estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condición y de ese modo modificar la ejecución de tareas en un programa según se necesite.	
 if(RYMG_ma>RYMG_mn){
		RYMG_m=RYMG_ma-RYMG_mn;
el cual indica la acción o conjunto de acciones a llevar a cabo, en caso de que la condición del if no se cumpla.
	}else{
		RYMG_ma=RYMG_ma+12;
		RYMG_aa=RYMG_aa-1;
		RYMG_m=RYMG_ma-RYMG_mn;
	}
	RYMG_a=RYMG_aa-RYMG_an;
	es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"usted tiene "<<RYMG_a<<" años, "<<RYMG_m<<" meses, "<<RYMG_d<<" dias "<< endl;
	Finaliza la ejecución de una función y devuelve el control a la función de llamada
	return 0;
}

