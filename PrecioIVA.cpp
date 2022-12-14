#include <iostream>

using namespace std;
int producto;
float IVA = 0.16;
string Productos[] = {"pescado","jueguete Super", "coquita de vidrio"};
int i;
float Precios[] = {100,200,15};
float preciosConIva;

void  CalcularIva(){
	if (i == 0){
	preciosConIva =	Precios[i] + (Precios[i] * IVA);
	cout <<"El valor ya con Iva es: \n"<< preciosConIva;
	}else if(i == 1){
		preciosConIva =	Precios[i] + (Precios[i] * IVA);
	cout <<"El valor ya con Iva es: \n"<< preciosConIva;
	} else if (i == 2){
		preciosConIva =	Precios[i] + (Precios[i] * IVA);
	cout <<"El valor ya con Iva es: \n"<< preciosConIva;
	}
}

int main(){
	//Generar un codigo que solicite el precio de x producto y nos regrese cuanto pagara de IVA *16%
	
	cout << "Que precio desea solicitar";
	cout << "Los productos con los que contamos son: \n" << Productos[0]  << endl;
	cout << Productos[1] << endl;
	cout << Productos[2] << endl;
	cout << "Si desea el pescado ponga 0, el juguete 1 o la coca ponga 2 :)" << endl;
	cin >> i;

	CalcularIva();
	
}
