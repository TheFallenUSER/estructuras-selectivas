#include <iostream>
using namespace std;

bool validaNota(int n){
	while(n<0||n>100){
		if(n<0){
			cout<<"ERROR: Nota ingresada es menor a cero, ingrese otro valor."<<endl;
		}else if(n>100){
				cout<<"ERROR: Nota ingresada es mayor a 100, ingrese otro valor."<<endl;
		}
		cout<<"Ingrese una nota:"<<endl;
		cin>>n;
	}
}

int main(){
	int nota1,nota2,nota3,prom;
	cout<<"Ingrese la primera nota:"<<endl;
	cin>>nota1;
	validaNota(nota1);
	cout<<"Ingrese la segunda nota:"<<endl;
	cin>>nota2;
	validaNota(nota2);
	cout<<"Ingrese la tercera nota:"<<endl;
	cin>>nota3;
	validaNota(nota3);
	prom=(nota1+nota2+nota3)/3;
	if(prom>=70){
		cout<<"Felicidades, aprobaste."<<endl;
	}
	else{
		cout<<"Que mal, has reprobado."<<endl;
	}
	return 0;
}

