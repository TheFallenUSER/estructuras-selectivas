#include <iostream>
using namespace std;

int main(){
	string sexo;
	int edad,puls;
	cout<<"Ingrese el sexo de la persona:"<<endl;
	cin>>sexo;
	cout<<"Ingrese la edad de la persona:"<<endl;
	cin>>edad;
	if(sexo=="femenino"){
		puls=(220-edad)/10;
	}else if(sexo=="masculino"){
		puls=(210-edad)/10;
	}
	cout<<"La cantidad de pulsaciones de la persona es de: "<<puls<<endl;
	return 0;
}
