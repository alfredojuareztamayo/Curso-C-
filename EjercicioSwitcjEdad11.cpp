#include <iostream>

using namespace std;
int opc;
int edad;
int main(){
	
cout<< "Dame tu edad: " << endl;
	cin >> edad;
	if(edad>=30){
		opc = 1;	
	}else{
		if (edad>=25){
				opc = 2;
		}else{
			if (edad>=22){
					opc = 3;
		}else{
			if (edad>=18){
					opc = 4;
		}else{
		
			cout<<"Ta bien"<<endl;}
				opc = 4;
		}
		}
	}

			//>:) :DCSMN
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
