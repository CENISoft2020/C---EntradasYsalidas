#include <iostream> //libreria que nos permite manejar nuestro lenguaje c

using namespace std; // permite el manejo de cout o cin

int main(){

	int num1;// son numero enteros
	int num2 = 5;//normal entero
	float num3 = 10.523;//son numero flotantes 
	//son variables con mayor capacidad de bist
	double num4;
	double num5 = 13.54339384294224828498; 
	//son texto o caracteres
	char letra = 'A';
	
	//----------------------ingreso de datos --------------//
	
	cout<<"Dame el valor de NUM1?";
	cin>>num1;
	cout<<"Dame el valor de NUM4?";
	cin>>num4;
		
//------------------LA PARTE DEL CODIGO QUE SE MUESTRA EN CONSOLA -----------------------
	cout<<"----------------------------------------------------------";
	cout<<"\n Los Hackers son el numero "<< num1 + num2 <<" del sistema "; // utilizamos las variables num1 y num2
	cout<<"\n y no son flotantes como esto "<<num3;
	cout<<"\n ni estos " << num4 + num5;
	cout<<"\n los Hacker son un "<< letra;
	cout<<"\n----------------------------------------------------------";
	
	return 0;
}


