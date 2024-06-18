#include <iostream>
using namespace std;

int main(){
	int prom,pens;
	cout<<"Ingrese la pension educativa a pagar:"<<endl;
	cin>>pens;
	cout<<"Ingrese el promedio obenido en el ultimo periodo:"<<endl;
	cin>>prom;
	if(prom>=18){
		pens=pens*0.7;
	}else{
		pens=pens*1.18;
	}
	cout<<"El alumno debe pagar: "<<pens<<endl;
	return 0;	
}
