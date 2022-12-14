#include <stdlib.h>
#include <iostream>

using namespace std;


class Persona{
	private:
		int edad;
		string nombre;
		//creacion del constructor
		public:
			Persona(int, string);
		public:
			void caminar();
			void comer();
};

//Inicializar

Persona :: Persona (int _edad, string _nombre){
	edad = _edad;
	nombre=_nombre;
}

void Persona :: caminar(){
	cout <<"Soy " << nombre << " Estoy caminando\n" << endl;
	
}

void Persona :: comer(){
	cout <<"Soy " << nombre << " Estoy comiendo\n" << endl;
}

int main(){
Persona p1 = Persona(19,"Sebastian");
p1.comer();
p1.caminar();

Persona p2 = Persona(19,"villegas");
p2.caminar();
return 0;
}

