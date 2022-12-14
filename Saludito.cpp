#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool GenerarNombre = true;
char letraNombre[10];
	int i = 0;

void nombreChar(){
	
	
	cout<<"Dime tu nombre letra por letra"<<endl;
	
	//cin >> letraNombre;
	while (GenerarNombre) {
	cin >> letraNombre[i];
     i = i+1;
  if ( i == 10 || letraNombre[i] = "\n" ){
  	cout << letraNombre;
  	GenerarNombre = false;


  }
      }
}

int main(){
	//string nombre;
	//cout<<"Cual es tu nombre?: \n";
//	cin >> nombre;
	
//	cout << "Hola, espero te encuentres bien " << nombre << " pasalo increible\n";
	nombreChar();
}


