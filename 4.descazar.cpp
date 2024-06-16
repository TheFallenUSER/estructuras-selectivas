#include <iostream>
using namespace std;

int main(){
	int num,mont;
	cout<<"Ingresa el monto de la compra:"<<endl;
	cin>>mont;
	cout<<"Escoge un numero al azar:"<<endl;
	cin>>num;
	if(num<74){
		mont=mont*0.15;
	}else{
		mont=mont*0.2;
	}
	cout<<"El descuento a realizar es de "<<mont<<endl;
	return 0;
}
