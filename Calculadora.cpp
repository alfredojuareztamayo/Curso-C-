//Generar un programa que pida dos valores y despues solicite la operacion a realizar
// suma, resta, multiplicacion, division 
//Generar la calculadora con clases

#include <iostream>

using namespace std;

float numero;
float numero2;
char op;
bool Terminar;
float numero3;
string ContinuarWhile = "si";


void Suma(){
	numero3=numero+numero2;
		cout << "La suma es: " << numero3 << endl;
		cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
}
void Resta(){
	numero3=numero-numero2;
		cout << "La resta es: " << numero3 << endl;
			cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
}
void multiplicacion(){
	numero3=numero*numero2;
		cout << "La multiplicacion es: " << numero3 << endl;
			cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
}
void Division(){
	numero3=numero/numero2;
		cout << "La division es: " << numero3 << endl;
			cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;	
}

void Operaciones(){
	switch (op)
		{
		case 'a':
		Suma();
		if(ContinuarWhile=="no"){
			op='s';
		}
		break;
		case 'b':
		Resta();
		if(ContinuarWhile=="no"){
			op='s';
		}
		break;
		case 'c':
		multiplicacion();
		if(ContinuarWhile=="no"){
			op='s';
		}
		break;
		case 'd':
		Division();
		if(ContinuarWhile=="no"){
			op='s';
		}
			break;
		
		}
}


int main(){
	
	while (op!='s'){
	
	cout << "Dame el primer numero: " << endl;
	cin >> numero;
		cout << "Dame el segundo numero: " << endl;
	cin >> numero2;
	cout << "Que deseas hacer?\n"
	<< "a) suma\n"
	<<"b) resta\n"
	<<"c) multiplicacion\n"
	<<"d) division\n"
	<< "s) salir\n"
	<< endl;
	cin >> op;
	 Operaciones();		
}
} 
