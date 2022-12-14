#include <iostream>

using namespace std;
int edad;

int main(){
	cout<< "Dame tu edad: " << endl;
	cin >> edad;
	
	if(edad <18){
		cout << "Tas pollo";
	}else{
		if(edad<30){
			cout << "Aun no necesitas omeprazol" << endl;
			
		}else{
			cout << "Omeprazol" << endl;
		}
	}
}
