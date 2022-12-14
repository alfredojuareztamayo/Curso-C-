//Ejercicio if, si tienes menos de 18 pero ya trabajas mandar un letrero que dice que sirve
//si es de entre 18 a 22  : ta bien
//si es de entre 22 a 25 : ya  tardaste
// de 25 a 30: disfuta
//>30 que has hecho de tu vida

#include <iostream>

using namespace std;
int edad;

int main(){
		cout<< "Dame tu edad: " << endl;
	cin >> edad;
	if(edad>=30){
		cout << "que has hecho de tu vida" <<endl;	
	}else{
		if (edad>=25){
				cout << "disfuta"<< endl;
		}else{
			if (edad>=22){
				cout << "ya  tardaste"<< endl;
		}else{
			if (edad>=18){
				cout << "ta bien"<< endl;
		}else{
		
			cout<<"Ta bien"<<endl;}
		}
		}
	}
	
}
