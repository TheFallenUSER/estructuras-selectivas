#include <iostream>
using namespace std;

int main(){
	int compra;
	cout<<"Ingresa el valor de la compra:"<<endl;
	cin>>compra;
	if(compra>1000){
		compra=compra*0.8;
	}
	cout<<"El monto a pagar es de: S/. "<<compra<<endl;
	return 0;
}
