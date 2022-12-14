#include <iostream>

using namespace std;
int opc;
int main(){
	
	cout <<"Dame la opcion que quieres escoger" << endl;
	cout <<"1: cucu" << endl;
    cout <<"2: cucucu" << endl;
	cout <<"3: cucucucu" << endl;
	cin >> opc;
			
			switch (opc){
				case 1: 
					cout <<"escogiste la opcion 1" << endl;
				break;
					case 2: 
					cout <<"escogiste la opcion 2" << endl;
				break;
					case 3: 
					cout <<"escogiste la opcion 3" << endl;
				break;
				default:
					cout <<"invalid" << endl;
				break;
				
			}
		
}
