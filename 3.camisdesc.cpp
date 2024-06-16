#include <iostream>
using namespace std;

int main(){
	int cam, mont;
	cout<<"Introduce la cantidad de camisas a comprar:"<<endl;
	cin>>cam;
	cout<<"Ingrese el total de la compra:"<<endl;
	cin>>mont;
	if(cam>=3){
		mont=mont*0.8;
	}else{
		mont=mont*0.9;
	}
	cout<<"La cantidad a pagar por las camisas es de: "<<mont<<endl;
	return 0;
}
