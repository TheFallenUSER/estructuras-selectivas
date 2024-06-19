#include <iostream>
using namespace std;

int main(){
	int num,tot,prec;
	cout<<"Ingrese la cantidad de llantas a comprar:"<<endl;
	cin>>num;
	if(num<5){
		prec=300;
		tot=num*300;
	}else if(num<=10){
		prec=250;
		tot=num*250;
	}else{
		prec=200;
		tot=num*200;
	}
	cout<<"El precio por las llantas es de: "<<prec<<endl;
	cout<<"El total a pagar por las llantas sera de: "<<tot<<endl;
	return 0;
}
