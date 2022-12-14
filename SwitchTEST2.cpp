#include <iostream>

using namespace std;
int opc;

int main(){
	
cout<< "ESCOGE el intervalo de tu edad: " << endl;
cout<< "Si es mayor a 30 pon 1: " << endl;
cout<< "Si es de 25 a 30: pon 2: " << endl;
cout<< "Si es de entre 22 a 25 pon 3: " << endl;
cout<< "si es de entre 18 a 22 pon 4: " << endl;
	cin >> opc;
	
	

			
			switch (opc){
				case 1: 
						cout << "que has hecho de tu vida" <<endl;
				break;
					case 2: 
					cout << "disfuta"<< endl;
				break;
					case 3: 
					cout << "ya  tardaste"<< endl;
				break;
				case 4: 
					cout << "ta bien"<< endl;
				break;
				default:
					cout <<"invalid" << endl;
				break;
				
			}
		
}
