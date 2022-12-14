//Generar un programa que pida dos valores y despues solicite la operacion a realizar
// suma, resta, multiplicacion, division 

#include <iostream>

using namespace std;

float numero;
float numero2;
char op;
bool Terminar;
float numero3;
string ContinuarWhile = "si";

void Operaciones(){
	switch (op)
		{
		case 'a':
		numero3=numero+numero2;
		cout << "La suma es: " << numero3 << endl;
		cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
		if(ContinuarWhile=="no"){
			op='s';
		}
			break;
				case 'b':
		numero3=numero-numero2;
		cout << "La resta es: " << numero3 << endl;
			cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
		if(ContinuarWhile=="no"){
			op='s';
		}
			break;
						case 'c':
		numero3=numero*numero2;
		cout << "La multiplicacion es: " << numero3 << endl;
			cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
		if(ContinuarWhile=="no"){
			op='s';
		}
			break;
					case 'd':
		numero3=numero/numero2;
		cout << "La division es: " << numero3 << endl;
			cout << "Deseas continar? si o no" << endl;
		cin >> ContinuarWhile;
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




