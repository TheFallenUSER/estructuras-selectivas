#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3,prom;
	cout<<"Ingrese la primera nota:"<<endl;
	cin>>n1;
	cout<<"Ingrese la segunda nota:"<<endl;
	cin>>n2;
	cout<<"Ingrese la tercera nota:"<<endl;
	cin>>n3;
	prom=(n1+n2+n3)/3;
	if(prom>=70){
		cout<<"Felicidades, aprobaste."<<endl;
	}
	else{
		cout<<"Que mal, has reprobado."<<endl;
	}
	return 0;
}

