#include<iostream>
using namespace std;

int main()
{
	int DJJO_i=0,DJJO_l;
	float DJJO_x,DJJO_s=0;
	cout<<"ingrese el limite DJJO_l="; cin>>DJJO_l;
	do{
		
	cout<<"ingrese el numero DJJO_x="; cin>>DJJO_x;
	DJJO_i=DJJO_i+1;
	DJJO_s=DJJO_s+DJJO_x;



	}while(DJJO_i<DJJO_l);
	cout<<"Se ingresaron "<<DJJO_l<<" numeros "<< "que sumaron "<<DJJO_s<<endl;
	return 0;



}
