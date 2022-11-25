
es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
#include<iostream>
es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;
sirve como punto de partida para la ejecución del programa
int main()
{

Las variables de este tipo almacenan números en formato de coma flotante, esto es, contienen un valor de mantisa y otro
	float RYMG_x,RYMG_s=0,RYMG_vb,RYMG_piva=12,RYMG_viva,RYMG_pdesc=10,RYMG_vdesc,RYMG_vn;
Números enteros definidos con la palabra clave int. Letras o caracteres definidos
	int RYMG_i=0,RYMG_l;
es el flujo de salida estándar que por lo general es la pantalla.
	cout<<" ingrese RYMG_l :";
es el flujo de entrada estándar que normalmente es el teclado
	cin>>RYMG_l;
permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
	do{
		es el flujo de salida estándar que por lo general es la pantalla.
		cout<<"ingrese RYMG_x :";
		es el flujo de entrada estándar que normalmente es el teclado
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
		 permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false.
	}while(RYMG_i<RYMG_l);
	RYMG_vb=RYMG_s;
	RYMG_viva=RYMG_vb*RYMG_piva/100;
	RYMG_vdesc=RYMG_vb*RYMG_pdesc/100;
	RYMG_vn=RYMG_vb+RYMG_viva-RYMG_vdesc;
	es el flujo de salida estándar que por lo general es la pantalla.
	cout<<"el valor a pagar es de :"<<RYMG_vn<<endl<<endl;
	Finaliza la ejecución de una función y devuelve el control a la función de llamada
	return 0;
}

