#include <stdlib.h>
#include <iostream>

using namespace std;

class carro{
	private:
	string Marca;
	string Color;
	string Modelo;
	float peso;
	
	public:
		carro(string, string, string, float);
		
	public:
		void Encender();
		void Acelerar();
		void Frenar();
};

//Inicializar
carro::carro(string _Marca, string _Color, string _Modelo, float _peso){
	Marca=_Marca;
	Color=_Color;
	Modelo=_Modelo;
	peso=_peso;
}
void carro :: Encender(){
	cout << "El " << Modelo << " Esta encendido\n"<<endl; 
}
void carro :: Acelerar(){
	cout << "El " << Modelo << " Esta Acelerando\n"<<endl; 
}
void carro :: Frenar(){
	cout << "El " << Modelo << " Esta Frenando\n"<<endl; 
}

class Nutricion{
	private:
	float peso;
	float altura;
	float factorDeActividad;
	string genero;
	float edad;
	
	public:
		Nutricion(float ,float ,float ,string , float);
	
	public:
		void CalculateCaloriasMessage();
		void CalcularProteina();
};

Nutricion::Nutricion(float _peso,float _altura,float _factorDeActividad,string _genero, float _edad){
peso = _peso;
altura = _altura;
factorDeActividad = _factorDeActividad;
genero = _genero;
edad = _edad;
};

void Nutricion::CalcularProteina(){
	float proteinaNecesaria = peso * 2;
	cout<< "las proteinas necesarias son: "<< proteinaNecesaria << " gramos\n" <<endl;
    
};
void Nutricion::CalculateCaloriasMessage(){
	if (genero == "M") { 
            float caloriasFinales = (((66 + (13.7 * peso) + (5 * altura) - (6.8 * edad)) * factorDeActividad / 100));
            cout<< "las calorias necesarias son: "<< caloriasFinales <<endl;
            
             }
            else if (genero == "F")
            {
                float caloriasFinales = ((655 + (9.6 * peso) + (1.8 * altura) - (4.7 * edad)) * factorDeActividad);
                 cout<< "las calorias necesarias son: "<< caloriasFinales <<endl;
            }
};

class Ejercicio
{
	private:
         string objetivo;
         float horasAplicadas;
         string tipoDieta;
         string suplementos;
         bool ciclo;
         public:
		Ejercicio(string, float, string, string, bool);
		 
		 public :
		 void GenerarMusculo();
		 void GenerarFuerza();
             
};
Ejercicio::Ejercicio(string _objetivo, float _horasAplicadas, string _tipoDieta, string _suplementos, bool _ciclo){
	objetivo = _objetivo;
    horasAplicadas= _horasAplicadas;
    tipoDieta = _tipoDieta;
    suplementos = _suplementos;
    ciclo = _ciclo;
};

void Ejercicio :: GenerarMusculo(){
	 if (tipoDieta == "deficit" & objetivo == "bajar")
            {
            	cout << "El objetivo de bajar va a ser posible debido a que estas en " << tipoDieta << endl;
                
            }else if(tipoDieta == "volumen" && objetivo =="crecer"){
				cout << "El objetivo de crecer va a ser posible debido a que estas en " << tipoDieta << endl;
               

            }else if(objetivo == "mantenerme" && tipoDieta == "mantenimiento" && horasAplicadas < 3)
            {
            	cout << "El objetivo de mantenerse va a ser posible debido a que estas en " << tipoDieta << endl;
                

            }
            else
            {
            	cout << "los valores no son compatibles por el tipo de dieta y el objetivo\n" << endl;
            }
}

void Ejercicio::GenerarFuerza(){
	if (ciclo == false)
            {
            	cout << "Vas a tener que hacer sobrecarga Progresiva, sigue así ser natty es lo mejor\n" << endl;
             

            }
            else
            {
            	cout << "Tranquilo por el ciclo generas fuerza solo\n" << endl;
            
            }
}

int main(){
	carro c1 = carro("BMW","Negro","z1",1000);
	c1.Encender();
	c1.Frenar();
	c1.Acelerar();
	
	Nutricion N1 = Nutricion(88,181,175,"M",26);
	N1.CalculateCaloriasMessage();
	N1.CalcularProteina();
	
	Ejercicio E1 = Ejercicio("bajar",3,"deficit","proteina",false);
	E1.GenerarFuerza();
	E1.GenerarMusculo();
	return 0;
}
